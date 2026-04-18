#include <iostream>
#include <vector>
using namespace std;

int main () {
    // Vector Declartion & Initialization
    vector<string> nama_karyawan = {"Alya", "Parul", "Hana", "Dewi", "Padhil"};

    // Menampilkan Data Ascending
    // for(int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Add data to vector
    nama_karyawan.push_back("Edric");

    // Menampilkan Data Ascending
    // for(int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);

    for(int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }
}