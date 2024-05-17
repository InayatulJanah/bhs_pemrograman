# include <iostream>

using namespace std;

int main() {
     
     cout << "Iteration Statement" << endl;
     cout << "Penggunaan FOR" << endl;

     //int a = 1;
     // apa beda nya int di luar for dengan int didalam for ??
     //int diluar for memiliki variabel global dan nilai variabel dapat diubah didalam loop dan tersimpan diluar loop.
     //int didalam for memiliki variabel lokal hanya berlaku didalam loop

     for(int a=1; a<=5; a++){
        cout << a << endl;
     }


     return 0;
}