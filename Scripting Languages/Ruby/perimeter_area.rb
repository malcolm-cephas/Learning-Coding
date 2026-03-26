print "Enter the radius of the circle: "
radius = gets.to_f

perimeter = 2 * Math::PI * radius
area = Math::PI * radius**2

puts "Perimeter (Circumference): #{perimeter.round(4)}"
puts "Area: #{area.round(4)}"