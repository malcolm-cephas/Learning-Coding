'''Aim: 5. NLTK toolkit Stemming Demo.'''
import nltk
from nltk.stem import PorterStemmer

# Ensure nltk data is available or mock
ps = PorterStemmer()
words = ["running", "cats", "played", "quickly"]
stems = [ps.stem(w) for w in words]

print(f"NLTK Porter Stemmer Results: {stems}")
