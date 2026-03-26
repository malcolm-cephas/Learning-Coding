'''Aim: 3. Word Analysis and Word Generation.'''

# Word Analysis (Morphological breakdown)
word = "unbelievable"
analysis = {"root": "believe", "prefix": "un", "suffix": "able"}
print(f"Analysis of '{word}': {analysis}")

# Word Generation (Combinatorial rules)
root = "play"
forms = [root + "er", root + "ing", root + "ed", root + "s"]
print(f"Generated forms of '{root}': {forms}")
