import os
import re
import datetime
import sys
import time

# Try to import Pillow for accurate Date Taken from EXIF
try:
    from PIL import Image
    from PIL.ExifTags import TAGS
    PILLOW_AVAILABLE = True
except ImportError:
    PILLOW_AVAILABLE = False
    print("Warning: 'Pillow' library is not installed.")
    print("Script will rely on Filename Patterns and File Modification Dates.")
    print("To install Pillow for better accuracy with images: pip install Pillow")

def get_date_taken(path, filename):
    """
    Determines the best 'Date Taken' for a file using:
    1. EXIF Metadata (for supported images)
    2. Filename Pattern (e.g. VID_20230101_...)
    3. File Modification Date (Fallback)
    """
    
    # 1. Try EXIF for Images (JPEGs, TIFFs, etc)
    if PILLOW_AVAILABLE and filename.lower().endswith(('.jpg', '.jpeg', '.png', '.tiff', '.webp')):
        try:
            image = Image.open(path)
            exif = image._getexif()
            if exif:
                for tag, value in exif.items():
                    decoded = TAGS.get(tag, tag)
                    if decoded in ("DateTimeOriginal", "DateTime"):
                        # Format is usually "YYYY:MM:DD HH:MM:SS"
                        date_part = value.split(' ')[0]
                        clean_date = date_part.replace(':', '').replace('-', '')
                        if len(clean_date) == 8 and clean_date.isdigit():
                            return clean_date
        except Exception:
            # Failed to read EXIF, continue to next method
            pass

    # 2. Try to extract date from Filename
    # Common patterns: 
    #   20230101_... 
    #   IMG_20230101_... 
    #   VID-20230101-...
    #   Screenshot_2023-01-01...
    # Look for YYYYMMDD with a sensible year (e.g. 1990-2030)
    match = re.search(r'(19|20)\d{2}[-_]?((0[1-9])|(1[0-2]))[-_]?((0[1-9])|([12]\d)|(3[01]))', filename)
    if match:
        # Normalize the matched date components
        # match.group(0) is the entire string, but might contain hyphens
        # We can construct it from the captured groups if we get group indexes right, 
        # but regex above is a bit loose. simpler regex:
        
        # Stricter regex for 8 digits YYYYMMDD
        strict_match = re.search(r'(19|20)\d{2}(0[1-9]|1[0-2])(0[1-9]|[12]\d|3[01])', filename)
        if strict_match:
            return strict_match.group(0)
            
        # Regex for YYYY-MM-DD or YYYY_MM_DD
        sep_match = re.search(r'((19|20)\d{2})[-_](0[1-9]|1[0-2])[-_](0[1-9]|[12]\d|3[01])', filename)
        if sep_match:
            return f"{sep_match.group(1)}{sep_match.group(3)}{sep_match.group(4)}"

    # 3. Fallback to File Modification Date
    try:
        mtime = os.path.getmtime(path)
        dt = datetime.datetime.fromtimestamp(mtime)
        return dt.strftime('%Y%m%d')
    except Exception as e:
        print(f"Error reading modification time: {e}")
        return None

def organize_files(root_dir):
    print(f"Scanning directory: {root_dir}")
    print("Looking for images and videos...")
    
    # Extensions to explicitly process (optional, but good for confirmation)
    # We will process EVERYTHING, but these are the main targets user cares about
    VIDEO_EXTS = {'.mp4', '.mov', '.avi', '.mkv', '.wmv', '.flv', '.webm', '.m4v', '.3gp', '.mts', '.m2ts'}
    IMAGE_EXTS = {'.jpg', '.jpeg', '.png', '.gif', '.bmp', '.tiff', '.webp', '.heic', '.heif', '.arw', '.cr2', '.nef', '.dng', '.orf', '.rw2'}
    
    count_renamed = 0
    count_skipped = 0
    
    # Regex to check if ALREADY in format YYYYMMDD-
    prefix_check = re.compile(r'^\d{8}-')

    for dirpath, dirnames, filenames in os.walk(root_dir):
        for filename in filenames:
            # Skip script files
            if filename.endswith('.py') or filename.startswith('.'):
                continue
                
            # Check if file is likely a media file just for logging purposes
            ext = os.path.splitext(filename)[1].lower()
            
            # Skip if already formatted
            if prefix_check.match(filename):
                # print(f"Skipping already formatted: {filename}")
                continue

            full_path = os.path.join(dirpath, filename)
            
            # Get the Date
            date_str = get_date_taken(full_path, filename)
            
            if not date_str:
                print(f"[!] Could not determine date for: {filename}")
                continue
                
            new_filename = f"{date_str}-{filename}"
            new_full_path = os.path.join(dirpath, new_filename)
            
            # Avoid duplicates
            if os.path.exists(new_full_path):
                print(f"[-] Skipping duplicate: {new_filename}")
                count_skipped += 1
                continue
                
            # Rename
            try:
                os.rename(full_path, new_full_path)
                print(f"[+] Renamed: {filename} -> {new_filename}")
                count_renamed += 1
            except Exception as e:
                print(f"[!] Error renaming {filename}: {e}")

    print("-" * 40)
    print(f"Completed. Renamed: {count_renamed}, Skipped: {count_skipped}")

if __name__ == "__main__":
    # Use the current directory where the script is running
    target_dir = os.path.dirname(os.path.abspath(__file__))
    
    # Run
    organize_files(target_dir)
    
    # Keep window open
    if sys.platform == 'win32':
        input("Press Enter to close...")
