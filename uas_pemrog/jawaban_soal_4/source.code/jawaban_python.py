import sqlite3

# Koneksi ke database
conn = sqlite3.connect('example.db')

# Membuat cursor
cur = conn.cursor()

# Membuat tabel
cur.execute('''CREATE TABLE IF NOT EXISTS users
               (id INTEGER PRIMARY KEY, name TEXT, age INTEGER)''')

# Menyisipkan sebuah record
cur.execute("INSERT INTO users (name, age) VALUES ('Alice', 25)")

# Menyimpan perubahan
conn.commit()

# Melakukan query pada database
cur.execute("SELECT * FROM users")
print(cur.fetchall())

# Menutup koneksi
conn.close()
