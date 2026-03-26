'''Aim: Write a program to create, append, and remove lists in python.'''

pets = ['cat', 'dog', 'rat', 'pig', 'tiger']
snakes = ['python', 'anaconda', 'cobra', 'mamba']
print("Pets list:", pets)
print("Snakes list:", snakes)


animals = pets + snakes
print("Combined list:", animals)


animals.append("lion")
print("After append (lion):", animals)


animals.remove("rat")
print("After remove (rat):", animals)
