
set mylist1 {10 20 30}

puts "Original List: $mylist1"


lappend mylist1 40
lappend mylist1 50

puts "After Appending Elements: $mylist1"


puts "Traversing the List:"
foreach item $mylist1 {
    puts $item
}


set myList2 {60 70 80}
set newList [concat $mylist1 $myList2]

puts "Concatenated List: $newList"
