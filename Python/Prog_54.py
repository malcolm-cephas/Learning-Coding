'''Aim: Write a program that inputs a text file. The program should print all of the unique words in the file in alphabetical order.'''

filename = input("Enter file name: ")

try:
    with open(filename, "r") as f:
        content = f.read()
        # Splitting and stripping punctuation
        words = content.lower().split()
        unique_words = sorted(set(words))
        
        print("\nUnique words in alphabetical order:")
        for word in unique_words:
            print(word)
except FileNotFoundError:
    print("Error: File not found.")
