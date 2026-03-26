# (i) Create a list
set mylist1 {10 20 30}

puts "Original List: $mylist1"

# (ii) Append elements to the list
lappend mylist1 40
lappend mylist1 50

puts "After Appending Elements: $mylist1"

# (iii) Traverse the list
puts "Traversing the List:"
foreach item $mylist1 {
    puts $item
}

# (iv) Concatenate the list with another list
set myList2 {60 70 80}
set newList [concat $mylist1 $myList2]

puts "Concatenated List: $newList"