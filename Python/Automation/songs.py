import os
import re

# Folder containing your songs
folder_path = r"C:\Music\Playlist"   # CHANGE THIS

def normalize_filename(filename):
    name, ext = os.path.splitext(filename)

    # Convert to lowercase
    name = name.lower()

    # Remove unwanted patterns (like track numbers, brackets, etc.)
    name = re.sub(r'\[.*?\]|\(.*?\)', '', name)   # remove [ ] and ( )
    name = re.sub(r'^\d+\s*[-._]*\s*', '', name)  # remove leading numbers
    name = re.sub(r'[^a-z0-9\s-]', '', name)      # remove special chars

    # Replace spaces with underscores
    name = re.sub(r'\s+', '_', name.strip())

    return name + ext.lower()

# Process files
for filename in os.listdir(folder_path):
    old_path = os.path.join(folder_path, filename)

    if os.path.isfile(old_path):
        new_name = normalize_filename(filename)
        new_path = os.path.join(folder_path, new_name)

        # Avoid overwriting files
        if old_path != new_path:
            counter = 1
            while os.path.exists(new_path):
                name, ext = os.path.splitext(new_name)
                new_name = f"{name}_{counter}{ext}"
                new_path = os.path.join(folder_path, new_name)
                counter += 1

            os.rename(old_path, new_path)
            print(f"Renamed: {filename} -> {new_name}")

print("Done ✅")
