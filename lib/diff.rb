#!/usr/bin/env ruby
# encoding: UTF-8

def load_data
  input = File.read('input.csv').each_line.map { |x| x.split(',').last.to_i }
  output = File.read('output.csv').each_line.map(&:to_i)
  [input, output]
end

def count_diff
  total = 0
  correct = 0
  input, output = load_data
  input.zip(output) do |expect, ans|
    total += 1
    correct += 1 if expect == ans
  end
  correct.to_f / total * 100
end

def diff
  rate = count_diff
  puts "Success rate: #{rate}%"
  rate
end

diff if __FILE__ == $PROGRAM_NAME
