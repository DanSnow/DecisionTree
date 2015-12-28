require 'highline'
require_relative 'lib/train'
require_relative 'lib/diff'

cli = HighLine.new

namespace :build do
  task :tree do
    Dir.chdir('src') do
      `make tree`
    end
  end

  task :test do
    Dir.chdir('src') do
      `make test`
    end
  end
end


desc 'Train ai test'
task train: 'build:tree' do
  Dir.chdir('src') do
    train_data = File.read('full_train_data.csv').each_line.map(&:chomp)
    train_size = cli.ask('Train size? (600) ', Integer) { |q| q.default = 600 }
    train_offset = cli.ask('Train offset? (20) ', Integer) { |q| q.default = 20 }
    train(train_data, train_size, train_offset)
  end
end

desc 'Test ai and print out success rate'
task test: 'build:test' do
  Dir.chdir('src') do
    `./test`
    diff
  end
end

task default: :test
