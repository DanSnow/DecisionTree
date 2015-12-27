#!/usr/bin/env ruby
# encoding: UTF-8

require 'ostruct'
require 'erb'

require_relative 'tree_node'

ERB_PATH = File.join(__dir__, 'erb')

DECISION_TPL = File.read(File.join ERB_PATH, 'decision.cpp.erb')
PROTO_TPL = File.read(File.join ERB_PATH, 'prototype.cpp.erb')
BRANCH_TPL = File.read(File.join ERB_PATH, 'branch.cpp.erb')
VAL_TPL = File.read(File.join ERB_PATH, 'val.cpp.erb')

class ProgGen
  def initialize(root)
    @root = root
    @prototypes = []
    @decisions = []
  end

  def generate
    convert_tree
    output_result
  end

  private

  def convert_tree
    queue = []
    queue.push @root
    until queue.empty?
      node = queue.shift
      gen_code node
      queue.push node.left if node.left_branch?
      queue.push node.right if node.right_branch?
    end
  end

  def gen_code(node)
    ns = gen_namespace(node)
    bind_scope = ns.instance_eval { binding }
    erb = ERB.new(PROTO_TPL)
    @prototypes.push erb.result(bind_scope)
    tpl = branch_tpl(ns.val1, ns.val2)
    erb = ERB.new(tpl)
    @decisions.push erb.result(bind_scope)
  end

  def branch_tpl(val1, val2)
    val1.nil?.! && val1 == val2 ? VAL_TPL : BRANCH_TPL
  end

  def gen_namespace(node)
    OpenStruct.new(
      branch_id: node.id,
      attr: node.attr,
      split_point: node.split_point,
      val1: node.left_val,
      val2: node.right_val,
      left_id: node.left.id,
      right_id: node.right.id
    )
  end

  def output_result
    bind_scope = binding
    erb = ERB.new(DECISION_TPL)
    File.write('decision.cpp', erb.result(bind_scope))
  end
end

def main
  generator = ProgGen.new build_tree(
    File.join(
      __dir__,
      '..',
      'src',
      'tree.dump'
    )
  )
  generator.generate
end

main if __FILE__ == $PROGRAM_NAME
