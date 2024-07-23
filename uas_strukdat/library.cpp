#include <iostream>
#include <mysql/mysql.h>
#include <sstream>

using namespace std;

const char* hostname = "127.0.0.1";
const char* user = "root";
const char* pass = "123";
const char* dbname = "strukdat_uas";
unsigned int port = 31235;
const char* unixsocket = NULL;
unsigned long clientflag = 0;

MYSQL* connect_db() {
    MYSQL* conn = mysql_init(0);
    if (conn) {
        conn = mysql_real_connect(conn, hostname, user, pass, dbname, port, unixsocket, clientflag);
        if (conn) {
            cout << "Terhubung ke database dengan sukses." << endl;
        } else {
            cerr << "Koneksi gagal: " << mysql_error(conn) << endl;
        }
    } else {
        cerr << "mysql_init gagal" << endl;
    }
    return conn;
}

void admin_menu();
void user_menu(int user_id);

bool authenticate_user(const string& username, const string& password, string& role, int& user_id) {
    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "SELECT id, role FROM users WHERE username = '" << username << "' AND password = '" << password << "'";
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "SELECT gagal: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return false;
        }

        MYSQL_RES* res = mysql_store_result(conn);
        if (res == nullptr) {
            cerr << "mysql_store_result gagal: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return false;
        }

        MYSQL_ROW row = mysql_fetch_row(res);
        if (row) {
            user_id = stoi(row[0]);
            role = row[1];
            mysql_free_result(res);
            mysql_close(conn);
            return true;
        } else {
            cout << "Username atau password salah." << endl;
            mysql_free_result(res);
            mysql_close(conn);
            return false;
        }
    }
    return false;
}

void create_book() {
    string title, author;
    int year;
    cout << "Masukkan judul: ";
    cin.ignore();
    getline(cin, title);
    cout << "Masukkan penulis: ";
    getline(cin, author);
    cout << "Masukkan tahun: ";
    cin >> year;

    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "INSERT INTO books (title, author, year) VALUES ('" << title << "', '" << author << "', " << year << ")";
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "INSERT gagal: " << mysql_error(conn) << endl;
        } else {
            cout << "Buku berhasil ditambahkan." << endl;
        }
        mysql_close(conn);
    }
}

void get_books() {
    MYSQL* conn = connect_db();
    if (conn) {
        if (mysql_query(conn, "SELECT * FROM books")) {
            cerr << "SELECT gagal: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return;
        }

        MYSQL_RES* res = mysql_store_result(conn);
        if (res == nullptr) {
            cerr << "mysql_store_result gagal: " << mysql_error(conn) << endl;
            mysql_close(conn);
            return;
        }

        MYSQL_ROW row;
        while ((row = mysql_fetch_row(res))) {
            cout << "ID: " << row[0] << ", Judul: " << row[1] << ", Penulis: " << row[2] << ", Tahun: " << row[3] << endl;
        }

        mysql_free_result(res);
        mysql_close(conn);
    }
}

void update_book() {
    int book_id;
    string title, author;
    int year;
    cout << "Masukkan ID buku yang ingin diupdate: ";
    cin >> book_id;
    cout << "Masukkan judul baru: ";
    cin.ignore();
    getline(cin, title);
    cout << "Masukkan penulis baru: ";
    getline(cin, author);
    cout << "Masukkan tahun baru: ";
    cin >> year;

    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "UPDATE books SET title = '" << title << "', author = '" << author << "', year = " << year << " WHERE id = " << book_id;
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "UPDATE gagal: " << mysql_error(conn) << endl;
        } else {
            cout << "Buku berhasil diupdate." << endl;
        }
        mysql_close(conn);
    }
}

void delete_book() {
    int book_id;
    cout << "Masukkan ID buku yang ingin dihapus: ";
    cin >> book_id;

    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "DELETE FROM books WHERE id = " << book_id;
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "DELETE gagal: " << mysql_error(conn) << endl;
        } else {
            cout << "Buku berhasil dihapus." << endl;
        }
        mysql_close(conn);
    }
}

void borrow_book(int user_id) {
    int book_id;
    cout << "Masukkan ID buku yang ingin dipinjam: ";
    cin >> book_id;

    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "INSERT INTO borrows (user_id, book_id, borrow_date) VALUES (" << user_id << ", " << book_id << ", CURDATE())";
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "INSERT gagal: " << mysql_error(conn) << endl;
        } else {
            cout << "Buku berhasil dipinjam." << endl;
        }
        mysql_close(conn);
    }
}

void return_book(int user_id) {
    int borrow_id;
    cout << "Masukkan ID peminjaman yang ingin dikembalikan: ";
    cin >> borrow_id;

    MYSQL* conn = connect_db();
    if (conn) {
        stringstream query;
        query << "UPDATE borrows SET return_date = CURDATE() WHERE id = " << borrow_id << " AND user_id = " << user_id;
        if (mysql_query(conn, query.str().c_str())) {
            cerr << "UPDATE gagal: " << mysql_error(conn) << endl;
        } else {
            cout << "Buku berhasil dikembalikan." << endl;
        }
        mysql_close(conn);
    }
}

void admin_menu() {
    int choice;
    while (true) {
        cout << "\nMenu Admin:\n";
        cout << "1. Tambah Buku\n";
        cout << "2. Lihat Semua Buku\n";
        cout << "3. Update Buku\n";
        cout << "4. Hapus Buku\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> choice;

        if (choice == 1) {
            create_book();
        } else if (choice == 2) {
            get_books();
        } else if (choice == 3) {
            update_book();
        } else if (choice == 4) {
            delete_book();
        } else if (choice == 5) {
            break;
        } else {
            cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    }
}

void user_menu(int user_id) {
    int choice;
    while (true) {
        cout << "\nMenu User:\n";
        cout << "1. Pinjam Buku\n";
        cout << "2. Kembalikan Buku\n";
        cout << "3. Lihat Semua Buku\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> choice;

        if (choice == 1) {
            borrow_book(user_id);
        } else if (choice == 2) {
            return_book(user_id);
        } else if (choice == 3) {
            get_books();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    }
}

int main() {
    string username, password, role;
    int user_id;

    while (true) {
        cout << "Masukkan username: ";
        cin >> username;
        cout << "Masukkan password: ";
        cin >> password;

        if (authenticate_user(username, password, role, user_id)) {
            if (role == "admin") {
                admin_menu();
            } else if (role == "user") {
                user_menu(user_id);
            } else {
                cout << "Role tidak valid." << endl;
            }
        }
    }

    return 0;
}