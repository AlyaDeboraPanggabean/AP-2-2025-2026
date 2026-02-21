#include <iostream> // header standar C++, conio.h, stdio.h
#include <conio.h> // header untuk getche() dan getch()
using namespace std;

int main () {
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    cout << "Hello World !!" << endl;

    cout << "Masukkan nama : "; 
    // cin >> nama;
    getline(cin, nama); // agar karakter spasi bisa terbaca

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) : "; // getche
    jenisKelamin = getche(); // agar karakter langsg tampil, jadi ga perlu tekan enter

    /* Ini untuk Output */
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jenisKelamin << endl;
    putchar(jenisKelamin); // untuk menampilkan karakter "jenis kelamin"

    getch(); // karakter yg kita ketik tdk ditampilkan di layar
}