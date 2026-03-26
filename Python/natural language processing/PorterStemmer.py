'''Aim: 2. Implement Porter Stemmer algorithm for stemming.'''

def stem(word):

    if word.endswith('ing'): return word[:-3]
    if word.endswith('ed'): return word[:-2]
    if word.endswith('s'): return word[:-1]
    return word

words = ["running", "cats", "played", "quickly"]
stems = [stem(w) for w in words]
print(f"Porter Stemmer Results: {stems}")
