//3. Sudah diperbaiki
#include <iostream>  // Menambahkan header
using namespace std; // Menggunakan namespace std agar tidak perlu menulis std:: di depan cin dan cout

int main() { // Fungsi utama yang akan dieksekusi pertama kali
    int n, i, j; // Deklarasi variabel untuk jumlah baris dan counter

    cout << "Masukkan jumlah baris: "; // Meminta input dari pengguna
    cin >> n; // Membaca input dari pengguna dan menyimpannya ke dalam variabel n

    // Loop pertama untuk mengontrol jumlah baris.
    for (i = 1; i <= n; i++) {
        // Loop kedua untuk mencetak bintang sebanyak nilai i pada baris tersebut
        for (j = 1; j <= i; j++) {
            cout << "*"; // Mencetak bintang
        }
        cout << "\n";
    }

    return 0;