#!/usr/bin/env ruby
# encoding: UTF-8

class TreeNode
  attr_accessor :type, :attr, :split_point, :val
  attr_accessor :left, :right
  attr_accessor :id
  def initialize(type, attr, split_point, val)
    @attr = attr
    @split_point = split_point
    @val = val
    @type = type.zero? ? :val : :branch
  end

  def left_branch?
    left && left.type != :val
  end

  def right_branch?
    right && right.type != :val
  end

  def left_val
    left.type == :val ? left.val : nil
  end

  def right_val
    right.type == :val ? right.val : nil
  end
end

def serialize(root)
  return if root.nil?
  serialize(root.left)
  serialize(root.right)
end

def deserialize(tree_iter)
  tree_data, id = tree_iter.next
  return nil if tree_data[0] == -1
  node = TreeNode.new(*tree_data)
  node.id = id
  node.left = deserialize(tree_iter)
  node.right = deserialize(tree_iter)
  node
rescue StopIteration
  return nil
end

def build_tree(path)
  lines = File.read(path).each_line.map(&:chomp)
  datas = lines.map { |x| x.scan(/(-?\d+)/).flatten.map(&:to_i) }
  root = deserialize(datas.each.with_index)
  root
end
