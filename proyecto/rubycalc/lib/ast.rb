require 'set'

class BinaryNode
  attr_reader :left, :right

  def initialize(left, right)
    @left = left
    @right = right
  end
end

class UnaryNode
  attr_reader :sub_tree

  def initialize(sub_tree)
    @sub_tree = sub_tree
  end
end

#NODOS BINARIOS

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

class ModulusNode < BinaryNode
  def initialize(left, right)
    super(left, right)
  end

  def evaluate
    @left.evaluate % @right.evaluate
  end
end

class AssignNode < BinaryNode
  def initialize(left, right)
    super(left, right)
  end

  def evaluate
    name = @left.evaluate
    result = @right.evaluate
    $calc.storevar(name, result)
    result
  end
end

#NODOS UNARIOS

class StoreNode < UnaryNode
  def initialize(sub_tree)
    super(sub_tree)
  end

  def evaluate
    $calc.store(@sub_tree.evaluate)
  end
end

class MemPlusNode < UnaryNode
  def initialize(sub_tree)
    super(sub_tree)
  end

  def evaluate
    $calc.mem_plus(@sub_tree.evaluate)
  end
end

class MemMinusNode < UnaryNode
  def initialize(sub_tree)
    super(sub_tree)
  end

  def evaluate
    $calc.mem_minus(@sub_tree.evaluate)
  end
end

#NODOS

class NumNode
  def initialize(num)
    @num = num
  end

  def evaluate
    @num
  end
end

class IdentifierNode
  def initialize(identifier)
    @identifier = identifier
  end

  def evaluate
    @identifier
  end
end

class ClearNode
  def evaluate
    $calc.clear
  end
end

class RecallNode
  def evaluate
    $calc.recall
  end
end
