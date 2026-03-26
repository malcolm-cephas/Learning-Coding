'''Aim: 3. Study of Pandas and Matplotlib.'''
import pandas as pd
import matplotlib.pyplot as plt


data = {
    'Course': ['Python', 'Java', 'Prolog', 'C++'],
    'Students': [15, 20, 10, 12]
}
df = pd.DataFrame(data)
print("Pandas DataFrame:")
print(df)


plt.bar(df['Course'], df['Students'], color='skyblue')
plt.title("Student Enrollment")
plt.xlabel("Course Name")
plt.ylabel("Num Students")

print("\nPlot generated (Matplotlib demo complete).")
