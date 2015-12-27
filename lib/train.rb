#!/usr/bin/env ruby
# encoding: UTF-8

require_relative 'prog_gen'
require_relative 'diff'

DATA_SIZE = 700
TRAIN_SIZE = 500
SIZE_DIFF = 50

def train(train_data, train_size, skip_len)
  File.write 'train.csv', train_data.drop(skip_len).take(train_size).join("\n")
  `./tree train.csv`
  generator = ProgGen.new build_tree('tree.dump')
  generator.generate
  puts `make`
  `./test`
  diff
end

# def main
#   train_size = TRAIN_SIZE
#   train_data = File.read('full_train_data.csv').each_line.map(&:chomp)
#   while train_size < DATA_SIZE - 2 * SIZE_DIFF
#     skip_max = DATA_SIZE - train_size
#     (0..skip_max).map do |skip_len|
#       train(train_data, train_size, skip_len)
#     end
#     train_size += SIZE_DIFF
#   end
# end

def run_train(train_size, train_offset)
  train_data = File.read('full_train_data.csv').each_line.map(&:chomp)
  train(train_data, train_size, train_offset)
end

def main
  train_size = ARGV[0] || 600
  train_offset = ARGV[1] || 10
  Dir.chdir(File.join(__dir__, '..', 'src')) unless File.exist? 'Makefile'
  run_train(train_size, train_offset)
end

main if __FILE__ == $PROGRAM_NAME
