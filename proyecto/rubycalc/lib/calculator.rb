require 'parser'
require 'ast'

class Calculator
  attr_accessor :memory, :assigned, :variables, :envprefered, :assignlog

  def initialize
    @memory = 0
    @variables = Hash.new
    @assigned = false
    @envprefered = false
    @assignlog = Array.new
  end

  def eval(expr)
    expr = expr.gsub(/\s+/, " ")
    parser = Parser.new(StringIO.new(expr))
    ast = parser.parse
    ast.evaluate
  end

  def clear
    @memory = 0
  end

  def storevar_(name, value, set)
    if set
      @assigned = true
      @assignlog.push(name + " <- " + value.to_s)
    end
    @variables.store(name.chomp, value)
  end

  def storevar(name, value)
    storevar_(name, value, true)
  end

  def storevar!(name, value)
    storevar_(name, value, false)
  end

  def getvar(name)
    @variables.fetch(name.chomp, 0)
  end

  def store(num)
    @memory = num
  end

  def recall
    @memory
  end

  def mem_minus(num)
    @memory -= num
  end

  def mem_plus(num)
    @memory += num
  end
end
