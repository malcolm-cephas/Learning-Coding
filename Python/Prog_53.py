'''Aim: Write a script named copyfile.py. This script should prompt the user for the names of two text files. The contents of the first file should be input and written to the second file.'''

file1_name = input("Enter source file name: ")
file2_name = input("Enter destination file name: ")

try:
    with open(file1_name, "r") as src:
        content = src.read()
        with open(file2_name, "w") as dst:
            dst.write(content)
    print(f"Content copied from {file1_name} to {file2_name} successfully.")
except FileNotFoundError:
    print("Error: Source file not found.")
except Exception as e:
    print(f"An error occurred: {e}")
