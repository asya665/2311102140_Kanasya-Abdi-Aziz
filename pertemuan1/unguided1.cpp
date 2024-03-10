#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi
double hitungLuasPersegi_140(double sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung volume kubus
double hitungVolumeKubus_140(double sisi) {
    return sisi * sisi * sisi;
}

int main() {
    double sisi;

    // memasukan panjang sisi persegi atau kubu
    cout << "Masukkan panjang sisi: ";
    cin >> sisi;

    // pemanggilan 
    double luasPersegi = hitungLuasPersegi_140(sisi);
    double volumeKubus = hitungVolumeKubus_140(sisi);

    // hasil output
    cout << "Luas persegi dengan sisi " << sisi << " adalah: " << luasPersegi << endl;
    cout << "Volume kubus dengan sisi " << sisi << " adalah: " << volumeKubus << endl;

    return 0;
}