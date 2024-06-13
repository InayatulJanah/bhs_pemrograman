### PENJELASAN PROGRAM STACK
Disini memakai 3 include yaitu :
1. include iostream digunakan untuk membaca inputan dari pengguna dan menulis ouput ke layar
2. include vector digunakan untuk menggunakan vektor, yakni sebuah wadah yang bisa menyimpan banyak item seperti daftar atau tumpukan yang dapat berubah ukuran
3. include string digunakan dalam penggunaan string, yakni tipe data yang menyimpan teks.

# pendeklarasian
- class Stack
vector string stack;

Mendefinisikan kelas stack yang digunakan untuk mengelola tumpukan buku yang didalam nya berisi vector<string> bernama stack sebagai anggota datanya. Nah vektor<string> ini menyimpan elemen yang digunakan dalam menyimpan elemen elemen tumpukan buku.

Perlu diketahui void merupakan fungsi yang tidak dapat mengembalikan nilai.

- void push(const string& buku)
stack.push_back(buku)
cout << "Buku \"" << buku << "\" ditambahkan kedalam tumpukan.\n";

Penggunaan void push disini berfungsi untuk menambahkan sebuah buku ke dalam tumpukkan dan mencetak pesan, tetapi tidak perlu mengembalikan nilai apapun. prosesnya:
1. (const string& buku) menerima tipe data yang bernama buku.
2. implementasi pada stack.push_back(buku) berfungsi menambambahkan buku kedalam stack.
3. cout << "Buku \"" << buku << "\" ditambahkan kedalam tumpukan.\n"; kemudian dicetak ke layar.

- void pop() 
if (stack.empty()) 
cout << "\nTumpukan kosong. Tidak dapat mengambil.\n";
else 
cout << "\nBuku \"" << stack.back() << "\" diambil dari tumpukan.\n";
stack.pop_back();

Penggunaan void pop disini berfungsi untuk menghapus/mengeluarkan buku yang paling atas atau buku yang dimasukkan tekhir dari tumpukan(stack) dan menampilkan pesan apakah ada buku yang dihapus/dikeluarkan atau bahkan tumpukannya kosong. Penggunaan if else:
1. (stack.empty) jika pengguna memanggil pop dan tumpukan kosong maka pesan "Tumpukan kosong.Tidak dapat mengambil" akan ditampilkan. 
2. Jika pengguna memanggil pop dan tumpukan tidak kosong maka buku paling atas ditampilkan dan dihapus dari tumpukan buku yang paling atas (stack.pop_back();).

- void peek()
if (stack.empty())
cout << "\nTumpukan kosong.\n";
else 
cout << "\nBuku paling atas adalah \"" << stack.back() << "\".\n";

Penggunaan void peek digunakan untuk melihat buku yang paling atas atau buku yang dimasukkan terakhir dalam tumpukan tanpa menghapusnya. penggunaan if else:
1. Jika pengguna memanggil peek() dan tumpukan kosong maka Pesan "Tumpukan kosong." akan ditampilkan.
2. Jika pengguna memanggil peek() dan tumpukan tidak kosong maka Nama buku paling atas atau buku yang terkhir dimasukkan akan ditampilkan dengan format "Buku paling atas adalah "NamaBuku".

Perlu diketahui bool adalah tipe data kembalian dari fungsi ini. 

- bool isEmpty() 
return stack.empty()

Penggunaan bool isEmpty memberikan kemampuan untuk memeriksa tumpukan(stack) secara efisien sehingga mengetahui apakah tumpukan(stack) kosong atau tidak. Kemudian return stack.empty() adalah sebuah pernyataan yang mengembalikan hasil dari stack.empty().

- int size() 
return stack.size()

Penggunaan int size() bertujuan untuk mengembalikan jumlah elemen (buku) yang masih ada dalam tumpukan. Misalnya jika tumpukan memliki 3 buku, maka fungsi size() akan mengembalikan nilai 3.

## Deklarasi Variabel
- int main() 

    Stack tumpukanBuku; --> Membuat objek tumpukanBuku dari kelas Stack
    string perintah; --> Variabel untuk menyimpan perintah dari pengguna misal (push, pop, peek, isEmpty dll)
    string buku; --> Variabel untuk menyimpan nama buku dari pengguna

## Looping 
Looping utama menggunakan while

- while (true) 
cout << "\nPilihan (push, pop, peek, isEmpty, size, exit)\n";
cout << "Masukkann Pilihan anda : ";
cin >> perintah;

Program akan berjalan dalam loop tak terbatas sampai pengguna memilih perintah "Exit" yang mengakhiri loop dengan menggunakan break. Pertama pengguna diminta untuk memilih perintah yang ingin dilakukan (push, pop, peek, isEmpty, size, exit) pilih salah satu nya, setiap perintah dijalankan sesuai kondisi yang ada.

1. if (perintah == "push") 
Pernyataan ini memeriksa apakah nilai dari variabel perintah sama dengan string "push". jika kondisi ini terpenuhi(true), maka kode didalam nya akan dieksekusi. Didalam if ini pengguna diminta untuk memasukkan nama buku kemudian ditambahkan ke dalam tumpukan menggunakan tumpukanBuku.push(buku).

2. else if (perintah == "pop") 
Pernyataan ini akan dievaluasi jika kondisi pada if (perintah == "push") tidak terpenuhi (false), tetapi perintah sama dengan "pop". Jika kondisi terpenuhi, maka kode didalamnya akan dieksekusi. Program akan melakukan operasi tumpukanBuku.pop() untuk menghapus buku yang paling atas dari tumpukan.

3. else if (perintah == "peek") 
Pernyataan ini akan dievaluasi jika kondisi pada if (perintah == "pop") tidak terpenuhi (false), tetapi perintah sama dengan "peek". Jika kondisi terpenuhi, maka kode di dalamnya akan dieksekusi. Program akan melakukan operasi tumpukanBuku.peek() untuk menampilkan buku paling atas dari tumpukan tanpa menghapusnya.

4. else if (perintah == "isEmpty") 
Pernyataan ini akan dievaluasi jika kondisi pada if (perintah == "peek") tidak terpenuhi (false), tetapi perintah sama dengan "isEmpty". Jika kondisi terpenuhi, maka kode di dalamnya akan dieksekusi. Program akan memeriksa apakah tumpukan kosong menggunakan tumpukanBuku.isEmpty() dan menampilkan pesan yang sesuai.

5. else if (perintah == "size") 
Pernyataan ini akan dievaluasi jika kondisi pada if (perintah == "isEmpty") tidak terpenuhi (false), tetapi perintah sama dengan "size". Jika kondisi terpenuhi, maka kode di dalamnya akan dieksekusi. Program akan menampilkan ukuran (jumlah buku) dari tumpukan menggunakan tumpukanBuku.size().

6. else if (perintah == "exit") 
Berfungsi dalam mengatur keluar dari loop utama dan mengakhiri program

7. else
Ini adalah kondisi terakhir dari kontrol alur yang menangkap kondisi jika tidak ada satu pun dari kondisi sebelumnya yang terpenuhi. Jika perintah tidak sama dengan "push", "pop", "peek", "isEmpty", atau "size", maka kode di dalam else akan dieksekusi.

# NOTED!
cin.ignore(); --> digunakan untuk membersihkan karakter newline (\n) yang tersisa di dalam buffer setelah operasi input sebelumnya ini memastikan bahwa operasi input selanjutnya tidak terpengaruh oleh karakter newline yang tidak di inginkan.
getline(cin,buku); --> digunakan untuk membaca sebuah baris teks dari input standar(biasanya keyboard) dan menyimpannya kedalam variabel buku, yang dalam konteks ini merupakan sebuah string.

