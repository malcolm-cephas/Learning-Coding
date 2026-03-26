'''Aim: 6. POS Tagging and finding POS for a given word.'''
import nltk

def tag_pos(words):

    tags = {
        'book': 'Noun', 'read': 'Verb', 'blue': 'Adj', 'quickly': 'Adv',
        'is': 'Verb', 'in': 'Preposition', 'and': 'Conjunction', 'he': 'Pronoun',
        'apple': 'Noun', 'jump': 'Verb'
    }
    return [(w, tags.get(w.lower(), 'Unknown')) for w in words]

words = ["Book", "Read", "Quickly", "He", "Apple"]
print(f"POS Tags: {tag_pos(words)}")
