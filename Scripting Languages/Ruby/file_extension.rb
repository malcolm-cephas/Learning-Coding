print "Enter a filename: "
f_name = gets.chomp

extension = File.extname(f_name)

puts "File extension: #{extension}"