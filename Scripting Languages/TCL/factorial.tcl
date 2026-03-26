puts "Enter a number:"
set num [gets stdin]

set fact 1

for {set i 1} {$i <= $num} {incr i} {
    set fact [expr {$fact * $i}]
}

puts "Factorial of $num is $fact"

puts "Total Marks: #{total_marks}"