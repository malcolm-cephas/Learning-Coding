'''Aim: Write a program to create, append, and remove lists in python.'''

pets = ['cat', 'dog', 'rat', 'pig', 'tiger']
snakes = ['python', 'anaconda', 'cobra', 'mamba']
print("Pets list:", pets)
print("Snakes list:", snakes)

# Concatenate
animals = pets + snakes
print("Combined list:", animals)

# Append
animals.append("lion")
print("After append (lion):", animals)

# Remove
animals.remove("rat")
print("After remove (rat):", animals)
