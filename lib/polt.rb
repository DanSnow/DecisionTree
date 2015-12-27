#!/usr/bin/env ruby
# encoding: UTF-8

require 'gnuplot'

require_relative 'train'

result = Gnuplot.open do |gp|
  Gnuplot::Plot.new(gp) do |plot|
    plot.title  'Correct rate'
    plot.xlabel 'Train size'
    plot.ylabel 'Rate(%)'
    plot.terminal 'png size 800,300 font "Courier" 11'

    x = []
    y = []

    train_data = File.read('full_train_data.csv').each_line.map(&:chomp)

    (100..650).step(50).map do |size|
      x << size
      y << train(train_data, size, 0)
    end

    plot.data << Gnuplot::DataSet.new( [x, y] ) do |ds|
      ds.with = "linespoints"
      ds.notitle
    end
  end
end

File.write('polt.png', result)
