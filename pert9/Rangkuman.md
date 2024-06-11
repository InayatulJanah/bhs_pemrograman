## 1. DEFINISI ARRAY (IN PYTHON)
Struktur yang dapat penyimpan dan mengorganisir kumpulan data. struktur data sangat penting dan harus dikuasai oleh seorang programer. dalam materi ini, kita akan membahas struktur data lanjutan yaitu set dan dictionary.

## 2. SET
Set dalam bahasa pemrograman Python adalah tipe data kolektif yang digunakan untuk menyimpan banyak nilai dalam satu variabel dengan ketentuan sebagai berikut:
- Nilai yang disimpan harus unik (tidak boleh duplikat).
- Nilai anggota yang telah dimasukkan tidak bisa diubah lagi. 
- Set tidak berurutan, yang berarti tidak bisa diakses dengan indeks. 

input:
# menggunakan kurung kurawal
student_set = {'Huda', 'Lendis', 'Wahid', 'Basith'}
print(student_set)

# mengonversi list menjadi set
fruit_set = set(['mango', 'Apple'])
print(set_fruit)

# set dengan tipe data yang berbeda
set_mix = {'man', 'animal', 5, True, ('A', 'B')}
print(set_mix)

output:
{'Wahid', 'Lendis', 'Basith', 'Huda'}
{'apel, mangga'}
{Benar, 5, ('A', 'B'), 'hewan', 'manusia'}

# a. Unordered (set)
Tipe kumpulan data tidak berurutan. Artinya, kita tidak bisa menggunakan indeks untuk mengakses nilai di set. Bahkan jika kita memaksa, kita hanya akan mendapatkan error.

# b. Unchangeable (set)
Set di Python bersifat tidak dapat diubah, artinya setelah sebuah nilai dimasukkan ke dalam set, nilai tersebut tidak dapat diubah. Meskipun demikian, kita masih dapat menambah atau menghapus elemen dari set. Selain itu, karena sifat set yang tidak dapat diubah, hanya tipe data yang juga tidak dapat diubah (seperti string, angka, dan tuple) yang bisa menjadi anggota set.

# c. No duplikate Values (set)
Set di Python tidak mengizinkan nilai duplikat. Artinya, jika kita mencoba memasukkan nilai yang sudah ada di dalam set, nilai tersebut hanya akan disimpan satu kali saja. Ini memastikan bahwa semua elemen dalam set adalah unik.

# d. add/update set elements As we
Kita dapat menambah elemen baru ke dalam set menggunakan add() untuk menambahkan satu elemen dan update() untuk menambahkan beberapa elemen sekaligus. Meskipun nilai yang ada dalam set tidak bisa diubah, elemen baru masih bisa ditambahkan atau dihapus.

# e. Delete/Remove set elements to remove
- remove(value): Menghapus elemen tertentu, akan menghasilkan error jika elemen tidak ditemukan.
- discard(value): Menghapus elemen tertentu tanpa menghasilkan error jika elemen tidak ditemukan.
- pop(): Menghapus elemen acak karena set tidak berurutan.
- clear(): Menghapus semua elemen dalam set.

# f. Functions (set)
Berikut adalah ringkasan dari fungsi-fungsi bawaan tipe data set yang dapat kita gunakan:
- add () : menambahkan satu anggota ke dalam set
- clear () : menghapus seluruh set
- copy () : Membuat salinan dari satu set ke set baru.
- difference () : Melakukan operasi selisih antara dua set.
- discard () : Menghapus anggota set lain yang ada di set saat ini.
- intersection () : Menghapus satu anggota dari set.
- intercestion_update () : Melakukan operasi irisan antara dua set.
- isdisjoint () : Memperbarui anggota yang merupakan irisan dari dua set.
- issusbet () : Mengembalikan nilai True jika dua set tidak memiliki irisan.
- issuperset () : Mengembalikan nilai True jika set lain memiliki anggota dari set saat ini.
- pop () : Mengembalikan nilai True jika set saat ini memiliki anggota dari set lain.
- remove () : Menghapus dan mengembalikan nilai yang dihapus dari set.Menghapus sebuah nilai dari set.

## 3. 

