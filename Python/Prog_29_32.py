'''Aim: Merge two file contents into a third file (Ex 29), Check words in file (Ex 30), Find word with most occurrences (Ex 31), and File stats (Ex 32).'''


with open("file1.txt", "w") as f1: f1.write("Python is great for learning programming.\n")
with open("file2.txt", "w") as f2: f2.write("Learning Python is fun and practical!\n")

def merge_files(f1, f2, f3):
    with open(f1, "r") as r1, open(f2, "r") as r2, open(f3, "w") as w:
        w.write(r1.read() + "\n" + r2.read())
    print(f"Merged {f1} and {f2} into {f3}")

def analyze_file(filename):
    words = []
    vowels = "aeiouAEIOU"
    stat = {"words": 0, "vowels": 0, "spaces": 0, "lower": 0, "upper": 0}

    with open(filename, "r") as f:
        content = f.read()
        stat["spaces"] = content.count(' ')
        for char in content:
            if char.lower() in vowels: stat["vowels"] += 1
            if char.islower(): stat["lower"] += 1
            if char.isupper(): stat["upper"] += 1

        words = content.split()
        stat["words"] = len(words)


    freq = {}
    for w in words: freq[w] = freq.get(w, 0) + 1
    most_common = max(freq, key=freq.get)

    return stat, most_common


merge_files("file1.txt", "file2.txt", "file3.txt")
stats, common = analyze_file("file3.txt")

print("\nFile Statistics for file3.txt:")
for k, v in stats.items(): print(f"{k.capitalize()}: {v}")
print(f"Most frequent word: '{common}'")
