
if {$argc != 2} {
    puts "Usage: tclsh copy_translate.tcl <source_file> <destination_file>"
    exit 1
}


set source [lindex $argv 0]
set dest   [lindex $argv 1]


set inFile [open $source r]
fconfigure $inFile -translation auto


set outFile [open $dest w]
fconfigure $outFile -translation native


while {[gets $inFile line] >= 0} {
    puts $outFile $line
}


close $inFile
close $outFile

puts "File copied from $source to $dest with native format."
