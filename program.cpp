/*
Nama    : Annas Malik
NIM     : 312310520
Kelas   : TI.23.BA.1
*/
#include <iostream>

using namespace std;

int main() {
    float alas, tinggi, luas;

    cout << "Masukkan Nilai Alas: ";
    cin >> alas;
    cout << "Masukkan Nilai Tinggi: ";
    cin >> tinggi;

    luas = 1/2 * (alas * tinggi);

    cout << "Luas Segitiga Adalah: " << luas << endl;

    return 0;
}
