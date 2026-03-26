'''Aim: Write a function called has_duplicates that takes a list and returns True if there is any element that appears more than once.'''

def has_duplicates(lst):
    return len(lst) != len(set(lst))

# Testing
list1 = [1, 2, 3, 4, 5]
list2 = [1, 2, 3, 2, 5]

print(f"List {list1} has duplicates: {has_duplicates(list1)}")
print(f"List {list2} has duplicates: {has_duplicates(list2)}")
