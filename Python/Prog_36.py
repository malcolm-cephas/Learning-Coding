'''Aim: Write a GUI program to create a window wizard having two text labels, two text fields and two buttons as Submit and Reset.'''

from tkinter import *

def submit():
    print(f"Submitted! Name: {entry1.get()}, ID: {entry2.get()}")

def reset():
    entry1.delete(0, END)
    entry2.get(0, END)
    print("Reset!")

root = Tk()
root.title("Window Wizard")
root.geometry("300x200")

Label(root, text="Enter Name:").pack()
entry1 = Entry(root)
entry1.pack()

Label(root, text="Enter ID:").pack()
entry2 = Entry(root)
entry2.pack()

Button(root, text="Submit", command=submit).pack(side=LEFT, padx=30, pady=20)
Button(root, text="Reset", command=reset).pack(side=RIGHT, padx=30, pady=20)

root.mainloop()
