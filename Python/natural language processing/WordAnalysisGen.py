'''Aim: 3. Word Analysis and Word Generation.'''


word = "unbelievable"
analysis = {"root": "believe", "prefix": "un", "suffix": "able"}
print(f"Analysis of '{word}': {analysis}")


root = "play"
forms = [root + "er", root + "ing", root + "ed", root + "s"]
print(f"Generated forms of '{root}': {forms}")
