puts "Enter three numbers:"
a = gets.to_i
b = gets.to_i
c = gets.to_i

if a >= b && a >= c
  puts "#{a} is the greatest."
elsif b >= a && b >= c
  puts "#{b} is the greatest."
else
  puts "#{c} is the greatest."
end