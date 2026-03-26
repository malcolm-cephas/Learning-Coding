def check_integers(a, b)
  if a == 20 || b == 20
    true
  else
    a + b
  end
end

puts "Enter first number:"
x = gets.to_i
puts "Enter second number:"
y = gets.to_i

result = check_integers(x, y)
puts "Result: #{result}"