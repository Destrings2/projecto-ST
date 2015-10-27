#!/usr/bin/ruby

def echo1
  s = gets
  puts s
end

def echo2
  s = gets
  puts s
  s
end

def incrementar
  i = 0;
  Proc.new{++i}
end

def sumar(a,b)
  a+b
end

def incr2 a
  a + 1
end

class Estudiante
  attr_reader :nombre, :edad
  
  def initialize(nombre, edad)
    @nombre = nombre
    @edad = edad
  end

  def imprimir
    puts "Nombre: #{@nombre} edad #{@edad}"
  end
end

