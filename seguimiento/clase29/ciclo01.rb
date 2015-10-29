
#!/usr/bin/env ruby

i = 0
num = 4

# ciclo while
puts "Ciclo de while"
while i < num do
  puts "i: #{i}"
  i += 1
end

# ciclo begin end while
i = 0
puts "Ciclo begin end while"
begin
  puts "i: #{i}"
  i += 1
end while i < num

# until
i = 0
puts "Ciclo until"
until i >= num
  puts "i: #{i}"
  i += 1
end

# begin end until
i = 0
puts "Ciclo begin end until"
begin
  puts "i: #{i}"
  i += 1
end until i >= num

# for i in
puts "Ciclo for"
for i in 0..4 do
  puts "i: #{i}"
end

# (expression).each do | | code end
puts "Ciclo (expression).each do"
(0..4).each do |i|
  puts "i: #{i}"
end

# ciclo (expresion)
puts "Ciclo (expresion).each code"
(0..4).each {|i| puts "i: #{i}" }

# times ciclo
puts "times do end"
4.times do |i|
  puts "i: #{i}"
end

# times ciclo
puts "times {...}"
4.times {|i| puts "i: #{i}" }




