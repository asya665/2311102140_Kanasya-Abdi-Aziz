#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mahasiswa;

    // penyimpanan array
    mahasiswa[2311102140] = "Kanasya Abdi Aziz";
    mahasiswa[2311102126] = "Agnes Refilina Fiska";
    mahasiswa[2311102144] = "Syamsul Adam";

        // pemanggilan array
        cout << "Data Mahasiswa : " << endl;
        cout << mahasiswa[2311102140] << endl
            << mahasiswa[2311102126] << endl
            << mahasiswa[2311102144] << endl;
}