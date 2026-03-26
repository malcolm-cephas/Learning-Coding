'''Aim: 7. Morphological Analysis, N-Grams and Smoothing.'''
from nltk import ngrams

text = "Natural Language Processing is fun"
tokens = text.split()

# N-Grams (Bigrams)
bigrams = list(ngrams(tokens, 2))
print(f"Generated Bigrams: {bigrams}")

# N-Grams Smoothing (Add-One Smoothing Demo)
counts = {('Natural', 'Language'): 5, ('Language', 'Processing'): 2}
total_count = sum(counts.values())
vocab_size = 10
smoothed_prob = (counts.get(('Natural', 'Language'), 0) + 1) / (total_count + vocab_size)

print(f"Smoothed Prob (Add-One) for 'Natural Language': {smoothed_prob:.4f}")
