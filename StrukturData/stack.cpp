#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack {
    vector<string> stack;

public:
    void push(const string& buku) {
        stack.push_back(buku);
        cout << "Buku \"" << buku << "\" ditambahkan kedalam tumpukan.\n";
    }

    void pop() {
        if (stack.empty()) {
            cout << "\nTumpukan kosong. Tidak dapat mengambil.\n";
        } else {
            cout << "\nBuku \"" << stack.back() << "\" diambil dari tumpukan.\n";
            stack.pop_back();
        }
    }

    void peek() {
        if (stack.empty()) {
            cout << "\nTumpukan kosong.\n";
        } else {
            cout << "\nBuku paling atas adalah \"" << stack.back() << "\".\n";
        }
    }

    bool isEmpty() {
        return stack.empty();
    }

    int size() {
        return stack.size();
    }
};

int main() {
    Stack tumpukanBuku;
    string perintah;
    string buku;

    while (true) {
        cout << "\nPilihan (push, pop, peek, isEmpty, size, exit)\n";
        cout << "Masukkann Pilihan anda : ";
        cin >> perintah;

        if (perintah == "push") {
            cout << "\nMasukkan nama buku: ";
            cin.ignore();
            getline(cin, buku);
            tumpukanBuku.push(buku);
        } else if (perintah == "pop") {
            tumpukanBuku.pop();
        } else if (perintah == "peek") {
            tumpukanBuku.peek();
        } else if (perintah == "isEmpty") {
            if (tumpukanBuku.isEmpty()) {
                cout << "\nTumpukan Kosong.\n";
            } else {
                cout << "\nTumpukan Tidak Kosong.\n";
            }
        } else if (perintah == "size") {
            cout << "\nUkuran tumpukan: " << tumpukanBuku.size() << "\n";
        } else if (perintah == "exit") {
        	cout << "\n------------TERIMAKASIH :)-------------";
            break;
        } else {
            cout << "Perintah tidak valid.\n";
        }
    }
    
    return 0;
}