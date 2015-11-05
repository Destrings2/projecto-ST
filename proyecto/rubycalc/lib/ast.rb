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

class TimesNode < BinaryNode
  def initialize(left, right)
    super(left, right)
  end

  def evaluate
    @left.evaluate * @right.evaluate
  end
end

class DivideNode < BinaryNode
  def initialize(left, right)
    super(left, right)
  end

  def evaluate
    @left.evaluate / @right.evaluate
  end
end

class StoreNode < UnaryNode
  def initialize(subtree)
    super(subtree)
  end

  def evaluate
    $calc.memory = @subtree.evaluate
  end
end

class RecallNode
  def evaluate
    $calc.memory
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
