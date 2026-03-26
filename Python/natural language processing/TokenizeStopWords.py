'''Aim: 1. Tokenization and Stop word removal in Python.'''

text = "Natural Language Processing is a field of Artificial Intelligence."
tokens = text.split() # Basic tokenization
print(f"Tokens: {tokens}")

stop_words = ["is", "a", "of"] # Basic stop list
filtered = [w for w in tokens if w.lower() not in stop_words]
print(f"Filtered (Stop Removed): {filtered}")
