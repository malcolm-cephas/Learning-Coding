set file1 "file1.txt"
set file2 "file2.txt"

set t1 [file mtime $file1]
set t2 [file mtime $file2]

if {$t1 > $t2} {
    puts "$file1 is newer"
} elseif {$t1 < $t2} {
    puts "$file2 is newer"
} else {
    puts "Both files have same modified time"
}