#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Membuat vector dan mengisi data awal
    vector<string> mahasiswa = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};

    // Menampilkan isi vector awal
    cout << "Isi vector awal:" << endl;
    for (string nama : mahasiswa) {
        cout << nama << endl;
    }

    // Menambahkan nama ke belakang vector
    mahasiswa.push_back("Houra");

    // Menghapus nama terakhir
    mahasiswa.pop_back();

    // Menghapus data pada indeks ke-1
    mahasiswa.erase(mahasiswa.begin() + 1);

    // Menampilkan isi vector setelah perubahan
    cout << "\nIsi vector setelah perubahan:" << endl;
    for (string nama : mahasiswa) {
        cout << nama << endl;
    }

    // Menampilkan jumlah data tersisa
    cout << "\nJumlah data tersisa: " << mahasiswa.size() << endl;

    return 0;
}