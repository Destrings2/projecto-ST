#!/usr/bin/env ruby
# coding: utf-8

# Sintaxis:
# commandline02 [-u|-l] [file]...
#
# Este programa lee varios ficheros y los muestra en mayúsculas (-u)
# o en minusculas (-v) o ninguno.

trans=:noone
case ARGV[0]
when "-u"
  trans=:upper
  ARGV.shift
when "-l"
  trans=:lower
  ARGV.shift
else
  trans=:noone
end

lines = ARGF.readlines
lines.each do |l|
  case trans
  when :upper
    puts l.upcase
  when :lower
    puts l.downcase
  else
    puts l
  end
end
