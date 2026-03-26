def string_copies(str, n)
  return str * n    # returns n copies of str      
end

print "Enter a string: "
input_str = gets.chomp

print "Enter a non-negative integer: "
n = gets.to_i

result = string_copies(input_str, n)
puts "Result: #{result}"
