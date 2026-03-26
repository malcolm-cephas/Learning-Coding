'''Aim: The wordlist I provided, words.txt, doesn't contain single letter words. So you might want to add "I", "a", and the empty string.'''

words_file = "words.txt"

# Add standard words to a text file
extra_words = ["I", "a", ""]

try:
    with open(words_file, "a+") as f:
        # Check if file exists and has content
        f.seek(0)
        content = f.read().splitlines()
        
        # Add words if they aren't already there
        for word in extra_words:
            if word not in content:
                f.write(word + "\n")
    
    print(f"Successfully updated {words_file} with single-letter words and empty strings.")
except Exception as e:
    print(f"An error occurred while updating {words_file}: {e}")
