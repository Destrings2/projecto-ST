require 'stringio'
require 'calcex'

class Scanner
  def initialize(in_stream)
    @istream = in_stream
    @keywords = Set.new(["S", "R", "M", "P", "C"])
    @line_count = 1
    @col_count = -1
    @need_token = true
    @last_token = nil
  end

  def put_back_token
    @need_token = false
  end

  def get_token
    unless @need_token
      @need_token = true
      return @last_token
    end

    state = 0
    found_one = false
    c = @istream.getc

    if @istream.eof
      @last_token = Token.new(:eof, @line_count, @col_count)
      return @last_token
    end

    until found_one
      @col_count = @col_count + 1
      case state
        when 0
          lex = ""
          column = @col_count
          line = @line_count
          if is_letter(c)
            state=1
          elsif is_digit(c)
            state=2
          elsif c == ?+
            state = 3
          elsif c == ?-
            state = 4
          elsif c == ?*
            state = 5
          elsif c == ?/
            state = 6
          elsif c == ?(
            state = 7
          elsif c == ?)
            state = 8
          elsif c == ?%
            state = 9
          elsif c == ?=
            state = 10
          elsif c == ?\n
            @col_count = -1
            @line_count = @line_count+1
          elsif is_white_space(c)
            state = state #ignore whitespace
          elsif @istream.eof
            @found_one = true
            type = :eof
          else
            puts "Unrecognized Token found at line ", line, " and column ", column, "\n"
            raise UnrecognizedTokenException # "Unrecognized Token"
          end
        when 1
          if is_letter(c) or is_digit(c)
            state = 1
          else
            if @keywords.include?(lex)
              found_one = true
              type = :keyword
            else
              found_one = true
              type = :identifier
            end
          end
        when 2
          if is_digit(c)
            state = 2
          else
            type = :number
            found_one = true
          end
        when 3
          type = :add
          found_one = true
        when 4
          type = :sub
          found_one = true
        when 5
          type = :times
          found_one = true
        when 6
          type = :divide
          found_one = true
        when 7
          type = :lparen
          found_one = true
        when 8
          type = :rparen
          found_one = true
        when 9
          type = :modulus
          found_one = true
        when 10
          type = :assign
          found_one = true
      end

      unless found_one
        lex.concat(c)
        c = @istream.getc
      end

    end

    @istream.ungetc(c)
    @col_count = @col_count - 1
    if type == :number or type == :identifier or type == :keyword
      t = LexicalToken.new(type, lex, line, column)
    else
      t = Token.new(type, line, column)
    end

    @last_token = t
    t
  end

  private
  def is_letter(c)
    ((?a <= c and c <= ?z) or (?A <= c and c <= ?Z))
  end

  def is_digit(c)
    (?0 <= c and c <= ?9)
  end

  def is_white_space(c)
    (c == ?\ or c == ?\n or c == ?\t)
  end
end
