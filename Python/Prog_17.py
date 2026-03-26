'''Aim: Remove the given word in all the places in a string.'''

sentence = input("Enter a sentence: ")
target_word = input("Enter word to remove: ")




result = " ".join([word for word in sentence.split() if word != target_word])

print(f"Updated sentence: {result}")
