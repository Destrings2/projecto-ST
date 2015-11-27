#!/usr/bin/env ruby

# Este programa implementa una calculadora de flujo
# en la cual cada parametro esta acompanado de un
# valor y a medida que leer las operaciones y los
# valores realiza la operacion correspondiente:
# -a Add
# -s Subtract
# -t Times
# -d Divide

ret=0
oper=:noone
ARGV.each do |v|
  case v
  when "-a"
    oper=:add
  when "-s"
    oper=:sub
  when "-t"
    oper=:times
  when "-d"
    oper=:divide
  else
    case oper
    when :add
      ret += v.to_i
    when :sub
      ret -= v.to_i
    when :times
      ret *= v.to_i
    when :divide
      ret /= v.to_i
    end
    oper=:noone
  end
end

puts "Result: #{ret}"
