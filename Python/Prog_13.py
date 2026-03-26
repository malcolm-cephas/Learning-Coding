'''Aim: Write a function called remove_duplicates that takes a list and returns a new list with only the unique elements from the original.'''

def remove_duplicates(lst):

    return list(set(lst))


original_list = [1, 2, 2, 3, 4, 4, 5]
unique_list = remove_duplicates(original_list)

print(f"Original: {original_list}")
print(f"Unique: {unique_list}")
