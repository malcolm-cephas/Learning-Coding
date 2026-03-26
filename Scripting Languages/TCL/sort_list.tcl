proc compare {mylist} {
    set len [llength $mylist]
    set len [expr {$len - 1}]

    for {set i 0} {$i < $len} {incr i} {
        for {set j 0} {$j < [expr {$len - $i}]} {incr j} {

            set a [lindex $mylist $j]
            set b [lindex $mylist [expr {$j + 1}]]

            if {$a > $b} {
                # swap elements
                set temp $a
                lset mylist $j $b
                lset mylist [expr {$j + 1}] $temp
            }
        }
    }

    puts $mylist
}

set mylist {17 31 15 22}
compare $mylist