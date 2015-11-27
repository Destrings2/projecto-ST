require 'ast'
require 'scanner'
require 'token'
require 'calcex'

class Parser
  def initialize(istream)
    @scan = Scanner.new(istream)
  end

  def parse
    prog
  end

  private
  def prog
    result = expr
    t = @scan.get_token

    if t.type != :eof
      print "Expected EOF. Found ", t.type, ".\n"
      raise ParseError.new
    end

    result
  end

  def expr
    rest_expr(term)
  end

  def rest_expr(e)
    t = @scan.get_token

    case t.type
      when :add
        return rest_expr(AddNode.new(e, term))
      when :sub
        return rest_expr(SubNode.new(e, term))
    end

    @scan.put_back_token

    e
  end

  def term
    rest_term(storable)
  end

  def rest_term(e)
    t = @scan.get_token

    case t.type
      when :times
        return rest_term(TimesNode.new(e, storable))
      when :divide
        return rest_term(DivideNode.new(e, storable))
      when :modulus
        return rest_term(ModulusNode.new(e, storable))
    end

    @scan.put_back_token

    e
  end

  def storable
    result = factor
    t = @scan.get_token

    if t.type == :keyword
      case t.lex
        when "S"
          return StoreNode.new(result)
        when "P"
          return MemPlusNode.new(result)
        when "M"
          return MemMinusNode.new(result)
        else
          raise ParseError.new
      end
    end

    @scan.put_back_token
    result
  end

  def factor
    t = @scan.get_token
    case t.type
      when :number
        return NumNode.new(t.lex.to_i)
      when :identifier
        return assign(IdentifierNode.new(t.lex))
      when :keyword
        case t.lex
          when "R"
            return RecallNode.new
          when "C"
            return ClearNode.new
          else
            raise ParseError.new
        end
      when :lparen
        result = expr
        t = @scan.get_token
        if t.type == :rparen
          return result
        end
    end
    raise ParseError.new
  end

  def assign(e)
    t = @scan.get_token
    if t.type == :assign
      result = expr
      AssignNode.new(e, result)
    else
      recall = $calc.getvar(e.evaluate)
      @scan.put_back_token
      NumNode.new(recall)
    end
  end
end
