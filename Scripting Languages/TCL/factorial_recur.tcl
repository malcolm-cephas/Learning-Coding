proc factorial {n} {
    if {$n <= 1} {
        return 1
    } else {
        return [expr {$n * [factorial [expr {$n - 1}]]}]
    }
}

puts "Enter a number:"
set num [gets stdin]

puts "Factorial of $num is [factorial $num]"