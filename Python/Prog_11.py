'''Aim: Write a function called is_sorted that takes a list as a parameter and returns True if the list is sorted in ascending order and False otherwise.'''

def is_sorted(lst):
    return lst == sorted(lst)

# Testing
list1 = [1, 2, 3, 4, 5]
list2 = [1, 3, 2, 4, 5]

print(f"List {list1} is sorted: {is_sorted(list1)}")
print(f"List {list2} is sorted: {is_sorted(list2)}")
