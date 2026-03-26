'''Aim: 2. Extract data from a database using Python (SQLite).'''
import sqlite3

# Connection
conn = sqlite3.connect(':memory:') # In-memory DB
cur = conn.cursor()

# Create and Insert
cur.execute("CREATE TABLE Lab (id INT, name TEXT)")
cur.execute("INSERT INTO Lab VALUES (1, 'ML Lab Task')")

# Extraction
cur.execute("SELECT * FROM Lab")
rows = cur.fetchall()

print("Extracted Data from Database:")
for row in rows:
    print(row)

conn.close()
