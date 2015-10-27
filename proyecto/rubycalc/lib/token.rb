class Token
  attr_reader :type, :line, :col

  def initialize(type,line_num,col_num)
    @type = type
    @line = line_num
    @col = col_num
  end
end

class LexicalToken < Token
  attr_reader :lex
  
  def initialize(type,lex,line_num,col_num)
    super(type,line_num,col_num)
    @lex = lex
  end
end
