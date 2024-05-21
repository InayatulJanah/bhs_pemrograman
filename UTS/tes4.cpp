#include <iostream>
using namespace std;

void tambah(int a, int b) {
    cout << "Hasil penjumlahan: " << a + b << endl;
}

void kurang(int a, int b) {
    cout << "Hasil pengurangan: " << a - b << endl;
}

void kali(int a, int b) {
    cout << "Hasil perkalian: " << a * b << endl;
}

void bagi(int a, int b) {
    if (b != 0) {
        cout << "Hasil pembagian: " << (float)a / b << endl;
    } else {
        cout << "Pembagian dengan nol tidak bisa dilakukan." << endl;
    }
}

int main() {
    int angka1, angka2;
    int pilih;

    cout << "Pilih operasi:\n";
    cout << "1. Pertambahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan menu : ";
    cin >> pilih;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (pilih) {
        case 1:
            tambah(angka1, angka2);
            break;
        case 2:
            kurang(angka1, angka2);
            break;
        case 3:
            kali(angka1, angka2);
            break;
        case 4:
            bagi(angka1, angka2);
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
    
    return 0;
}