#!/usr/bin/env ruby

# Muestra todas las variables de ambiente terminadas en PATH
ENV.each do |k,v|
  if k.match(/.*PATH$/) then
    puts "key: #{k} value: #{v}"
  end
end
