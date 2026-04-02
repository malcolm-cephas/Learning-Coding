import os
import hashlib

# CHANGE THIS to your target folder
FOLDER_PATH = r"C:\Users\YourName\Downloads"

# Output report file
REPORT_FILE = "report.txt"

def get_file_hash(filepath):
    hasher = hashlib.md5()
    try:
        with open(filepath, 'rb') as f:
            while chunk := f.read(4096):
                hasher.update(chunk)
        return hasher.hexdigest()
    except Exception as e:
        print(f"Error reading {filepath}: {e}")
        return None

def find_duplicates(folder):
    hashes = {}
    duplicates = {}

    for root, dirs, files in os.walk(folder):
        for file in files:
            path = os.path.join(root, file)
            file_hash = get_file_hash(path)

            if file_hash:
                if file_hash in hashes:
                    if file_hash not in duplicates:
                        duplicates[file_hash] = [hashes[file_hash]]
                    duplicates[file_hash].append(path)
                else:
                    hashes[file_hash] = path

    return duplicates

def write_report(duplicates):
    with open(REPORT_FILE, "w", encoding="utf-8") as f:
        if not duplicates:
            f.write("No duplicates found.\n")
            return

        f.write("DUPLICATE FILE REPORT\n")
        f.write("=" * 50 + "\n\n")

        count = 1
        for file_hash, files in duplicates.items():
            f.write(f"Group {count}:\n")
            for file in files:
                f.write(f"  {file}\n")
            f.write("\n")
            count += 1

    print(f"\nReport generated: {REPORT_FILE}")

def main():
    print("Scanning for duplicates (including subfolders)...\n")
    duplicates = find_duplicates(FOLDER_PATH)

    total_groups = len(duplicates)
    total_files = sum(len(v) for v in duplicates.values())

    print(f"Duplicate groups: {total_groups}")
    print(f"Total duplicate files: {total_files}\n")

    write_report(duplicates)

if __name__ == "__main__":
    main()
