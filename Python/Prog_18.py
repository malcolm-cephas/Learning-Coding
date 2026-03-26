'''Aim: Rewrite the first letter of every word with uppercase without using built-in string title/capitalize functions.'''

def custom_title(sentence):
    words = sentence.split()
    result_words = []

    for word in words:
        if word:

            first_char = word[0]
            if 'a' <= first_char <= 'z':
                first_char = chr(ord(first_char) - 32)

            rest = ""
            for char in word[1:]:
                if 'A' <= char <= 'Z':
                    rest += chr(ord(char) + 32)
                else:
                    rest += char

            result_words.append(first_char + rest)

    return " ".join(result_words)

user_input = input("Enter a sentence: ")
print(f"Custom Styled: {custom_title(user_input)}")
