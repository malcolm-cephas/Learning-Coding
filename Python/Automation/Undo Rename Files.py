import os
import re
import sys

def undo_renaming(root_dir):
    print(f"Scanning directory: {root_dir}")
    
    # Match files starting with YYYYMMDD-
    prefix_pattern = re.compile(r'^(\d{8})-(.+)')

    count_restored = 0
    count_skipped = 0

    for dirpath, dirnames, filenames in os.walk(root_dir):
        for filename in filenames:
            match = prefix_pattern.match(filename)

            if not match:
                continue  # Skip files not renamed

            original_name = match.group(2)
            
            old_path = os.path.join(dirpath, filename)
            new_path = os.path.join(dirpath, original_name)

            # Avoid overwriting existing files
            if os.path.exists(new_path):
                print(f"[-] Skipping (already exists): {original_name}")
                count_skipped += 1
                continue

            try:
                os.rename(old_path, new_path)
                print(f"[+] Restored: {filename} -> {original_name}")
                count_restored += 1
            except Exception as e:
                print(f"[!] Error restoring {filename}: {e}")

    print("-" * 40)
    print(f"Completed. Restored: {count_restored}, Skipped: {count_skipped}")


if __name__ == "__main__":
    target_dir = os.path.dirname(os.path.abspath(__file__))
    undo_renaming(target_dir)

    if sys.platform == 'win32':
        input("Press Enter to close...")
