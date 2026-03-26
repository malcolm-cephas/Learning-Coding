'''Aim: Write a function called palindrome that takes a string argument and returns True if it is a palindrome and False otherwise.'''

def palindrome(s):

    s = s.lower().replace(" ", "")
    return s == s[::-1]

test_word = "Radar"
print(f"Is '{test_word}' a palindrome? {palindrome(test_word)}")
