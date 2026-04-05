import random
import string

def generate_password(length=12):
    characters = string.ascii_letters + string.digits + string.punctuation
    password = ''.join(random.choice(characters) for _ in range(length))
    return password

def check_strength(password):
    strength = 0

    if any(c.islower() for c in password):
        strength += 1
    if any(c.isupper() for c in password):
        strength += 1
    if any(c.isdigit() for c in password):
        strength += 1
    if any(c in string.punctuation for c in password):
        strength += 1
    if len(password) >= 12:
        strength += 1

    if strength <= 2:
        return "Weak"
    elif strength == 3 or strength == 4:
        return "Moderate"
    else:
        return "Strong"

# Generate and check password
pwd = generate_password(12)
print("Generated Password:", pwd)
print("Strength:", check_strength(pwd))
