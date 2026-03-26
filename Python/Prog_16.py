'''Aim: Add a comma between the characters. If the given word is 'Apple', it should become 'A,p,p,l,e'.'''

word = input("Enter a word: ")
formatted_word = ",".join(list(word))
print(f"Comma-separated: {formatted_word}")
