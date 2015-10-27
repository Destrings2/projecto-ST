require 'set'

class BinaryNode
  attr_reader :left, :right

  def initialize(left, right)
    @left = left
    @right = right
  end
end

class UnaryNode
  attr_reader :subtree

  def initialize(subtree)
    @subtree = subtree
  end
end

class AddNode < BinaryNode
  def initialize(left, right)
    super(left, right)
  end

  def evaluate
    @left.evaluate + @right.evaluate
  end
end

class SubNode < BinaryNode
  def initialize(left, right)
    super(left, right)
  end

  def evaluate
    @left.evaluate - @right.evaluate
  end
end

class NumNode
  def initialize(num)
    @num = num
  end

  def evaluate
    @num
  end
end
