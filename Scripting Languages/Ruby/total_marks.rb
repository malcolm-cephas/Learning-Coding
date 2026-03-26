student_marks = {
  "Maths" => 85,
  "Science" => 92,
  "English" => 78,
  "Hindi" => 88,
  "Telegu"=> 90
}

total_marks = 0

student_marks.each do |subject, marks|
  total_marks += marks
end

puts "Total Marks: #{total_marks}"