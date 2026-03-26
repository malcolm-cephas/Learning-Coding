'''Aim: Check whether the given input is digit or lowercase character or uppercase character or a special character.'''

ch = input("Enter any character: ")

if ch.isdigit():
    print(f"'{ch}' is a Digit.")
elif ch.islower():
    print(f"'{ch}' is a Lowercase Character.")
elif ch.isupper():
    print(f"'{ch}' is an Uppercase Character.")
else:
    print(f"'{ch}' is a Special Character.")
