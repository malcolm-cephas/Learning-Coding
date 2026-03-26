'''Aim: Remove the given word in all the places in a string.'''

sentence = input("Enter a sentence: ")
target_word = input("Enter word to remove: ")

# Splitting by word to ensure whole word removal or use string replacement?
# Using string replace handles substrings too. 
# For whole word only, use split and join.
result = " ".join([word for word in sentence.split() if word != target_word])

print(f"Updated sentence: {result}")
