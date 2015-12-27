#!/usr/bin/env ruby
# encoding: UTF-8

def diff
  total = 0
  correct = 0
  input = File.read('input.csv').each_line.map { |x| x.split(',').last.to_i }
  output = File.read('output.csv').each_line.map(&:to_i)
  input.zip(output) do |expect, ans|
    total += 1
    correct += 1 if expect == ans
  end
  rate = correct.to_f / total * 100
  puts "Success rate: #{rate}%"
  rate
end

diff if __FILE__ == $PROGRAM_NAME
