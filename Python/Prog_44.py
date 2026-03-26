'''Aim: Write a program to demonstrate working with dictionaries in python.'''

student = {
    'StuNo': '532',
    'StuName': 'Naveen',
    'StuAge': 21,
    'StuCity': 'Hyderabad'
}
print("Dictionary:", student)

# Accessing
print("Name:", student['StuName'])
print("City:", student['StuCity'])

# Updating
student['StuName'] = "Madhu"
student['Phno'] = 85457854
print("Updated Dictionary:", student)

# Keys and Values
print("Keys:", list(student.keys()))
print("Values:", list(student.values()))

# Removing
student.pop('StuAge')
print("After popping 'StuAge':", student)
