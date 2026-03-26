'''Aim: Write a python code to read a phone number and email-id from the user and validate it for correctness.'''

import re

def validate_phone(phone):
    # Matches a basic 10-digit phone number
    return re.fullmatch(r'\d{10}', phone) is not None

def validate_email(email):
    # Basic email regex
    regex = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b'
    return re.fullmatch(regex, email) is not None

phone = input("Enter Phone Number (10 digits): ")
email = input("Enter Email Address: ")

print(f"Phone Validation: {'Valid' if validate_phone(phone) else 'Invalid'}")
print(f"Email Validation: {'Valid' if validate_email(email) else 'Invalid'}")
