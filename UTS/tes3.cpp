#include <iostream>
using namespace std;

int main() {
    float angka1, angka2;
    
    // Meminta pengguna memasukkan dua angka
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // Melakukan operasi penjumlahan, pengurangan, perkalian, dan pembagian
    float penjumlahan = angka1 + angka2;
    float pengurangan = angka1 - angka2;
    float perkalian = angka1 * angka2;
    float pembagian = angka1 / angka2;
    
    // Mencetak hasil operasi
    cout << "Hasil penjumlahan: " << penjumlahan << endl;
    cout << "Hasil pengurangan: " << pengurangan << endl;
    cout << "Hasil perkalian: " << perkalian << endl;
    cout << "Hasil pembagian: " << pembagian << endl;

	return 0;
}