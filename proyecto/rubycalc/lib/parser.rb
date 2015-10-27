require 'ast'
require 'scanner'
require 'token'
require 'calcex'

class Parser
  def initialize(istream)
    @scan = Scanner.new(istream)
  end
   
  def parse()
    prog
  end
  
  private
  def prog
    result = expr
    t = @scan.getToken
    
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
    
    if t.type == :add
         return rest_expr(AddNode.new(e,term))
    end
    
    if t.type == :sub
      return rest_expr(AddNode.new(e,term))
    end
      
    @scan.putBackToken
    
    e
  end
  
  def term
    # Write your Term() code here. This code is just temporary
    # so you can try the calculator out before finishing it.
    
    t = @scan.get_token
    
    if t.type == :number
      val = t.lex.to_i
      return numnode.new(val)
    end
    
    puts "Term not implemented\n"
    
    raise parseerror.new
  end
   
  def rest_term(e)
    
    puts "RestTerm not implemented"
    raise ParseError.new # "Parse Error"
  end
   
  def storable()
   
    puts "Storable not implemented"
    raise ParseError.new # "Parse Error"
  end
   
  def factor()
    
    puts "Factor not implemented"
    raise ParseError.new # "Parse Error"
  end         
end
