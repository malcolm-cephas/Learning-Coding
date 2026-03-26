# Check for correct number of arguments
if {$argc != 2} {
    puts "Usage: tclsh copy_translate.tcl <source_file> <destination_file>"
    exit 1
}

# Get file names from command line
set source [lindex $argv 0]
set dest   [lindex $argv 1]

# Open source file in read mode with auto translation
set inFile [open $source r]
fconfigure $inFile -translation auto

# Open destination file in write mode with native translation
set outFile [open $dest w]
fconfigure $outFile -translation native

# Copy contents
while {[gets $inFile line] >= 0} {
    puts $outFile $line
}

# Close files
close $inFile
close $outFile

puts "File copied from $source to $dest with native format."