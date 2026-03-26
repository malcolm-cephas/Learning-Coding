proc multiplyNums {} {
    set product 1

    for {set i 1} {$i <= 10} {incr i} {
        set product [expr {$product * $i}]
    }

    return $product
}


set result [multiplyNums]
puts "The product of numbers from 1 to 10 is: $result"
