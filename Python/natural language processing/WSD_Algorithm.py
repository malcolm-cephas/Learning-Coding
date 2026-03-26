'''Aim: 4. Implement Word Sense Disambiguation (WSD).'''

ambiguous_words = {
    'bank': ['river bank', 'financial bank'],
    'bat': ['sporting bat', 'flying mammal'],
    'crane': ['machinery', 'bird'],
    'match': ['firestick', 'sporting event'],
    'fair': ['justice', 'carnival']
}

def disambiguate(word, context):
    senses = ambiguous_words.get(word.lower(), [])
    for sense in senses:
        if sense.split()[0] in context.lower():
            return sense
    return senses[0] if senses else "Unknown"

ctx = "I went to the financial bank today."
print(f"Disambiguated 'bank' in context: {disambiguate('bank', ctx)}")
