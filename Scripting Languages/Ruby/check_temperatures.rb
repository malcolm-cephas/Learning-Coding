def check_temps(temp1, temp2)
 return (temp1 < 0 && temp2 > 100) || (temp2 < 0 && temp1 > 100)
end

puts "Enter first temperature:"
temp1 = gets.to_i

puts "Enter second temperature:"
temp2 = gets.to_i

result = check_temps(temp1, temp2)
puts "Result: #{result}"