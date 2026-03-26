'''Aim: Write a python code to read dictionary values from the user. Construct a function to invert its content.'''

def invert_dictionary(d):
    # keys become values and values become keys
    return {v: k for k, v in d.items()}

# Getting user input
n = int(input("Enter number of entries in dictionary: "))
user_dict = {}
for i in range(n):
    key = input(f"Enter key {i+1}: ")
    val = input(f"Enter value {i+1}: ")
    user_dict[key] = val

print("\nOriginal Dictionary:", user_dict)
inverted_dict = invert_dictionary(user_dict)
print("Inverted Dictionary:", inverted_dict)
