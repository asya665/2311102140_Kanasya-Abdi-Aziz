#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim140;
    float nilai140;
};

class HashTable {
private:
    static const int table_size = 10; // Ukuran hash table disetel ke 10 untuk contoh
    vector<Mahasiswa> table[table_size];

    int hash_func(string nim140) {
        int sum = 0;
        for (char c : nim140) {
            sum += int(c);
        }
        return sum % table_size;
    }

public:
    void tambah_data(Mahasiswa mahasiswa) {
        int index = hash_func(mahasiswa.nim140);
        table[index].push_back(mahasiswa);
    }

    bool hapus_data(string nim140) {
        int index = hash_func(nim140);
        for (int i = 0; i < table[index].size(); ++i) {
            if (table[index][i].nim140 == nim140) {
                table[index].erase(table[index].begin() + i);
                return true;
            }
        }
        return false;
    }

    Mahasiswa* cari_berdasarkan_nim(string nim140) {
        int index = hash_func(nim140);
        for (Mahasiswa &mahasiswa : table[index]) {
            if (mahasiswa.nim140 == nim140) {
                return &mahasiswa;
            }
        }
        return nullptr;
    }

    vector<Mahasiswa> cari_berdasarkan_rentang_nilai(float nilai_awal, float nilai_akhir) {
        vector<Mahasiswa> mahasiswa_ditemukan;
        for (int i = 0; i < table_size; ++i) {
            for (Mahasiswa &mahasiswa : table[i]) {
                if (mahasiswa.nilai140 >= nilai_awal && mahasiswa.nilai140 <= nilai_akhir) {
                    mahasiswa_ditemukan.push_back(mahasiswa);
                }
            }
        }
        return mahasiswa_ditemukan;
    }
};

// Fungsi untuk menampilkan menu
void tampilkan_menu() {
    cout << "Pilihan Menu:" << endl;
    cout << "1. Tambah Data Mahasiswa" << endl;
    cout << "2. Hapus Data Mahasiswa" << endl;
    cout << "3. Cari Data Mahasiswa Berdasarkan NIM" << endl;
    cout << "4. Cari Data Mahasiswa Berdasarkan Rentang Nilai (80-90)" << endl;
    cout << "5. Keluar" << endl;
}

int main() {
    HashTable hash_table;

    while (true) {
        tampilkan_menu();
        int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        if (pilihan == 1) {
            Mahasiswa mahasiswa;
            cout << "Masukkan NIM mahasiswa: ";
            cin >> mahasiswa.nim140;
            cout << "Masukkan nilai mahasiswa: ";
            cin >> mahasiswa.nilai140;
            hash_table.tambah_data(mahasiswa);
            cout << "Data mahasiswa telah ditambahkan." << endl;
        } else if (pilihan == 2) {
            string nim140;
            cout << "Masukkan NIM mahasiswa yang akan dihapus: ";
            cin >> nim140;
            if (hash_table.hapus_data(nim140)) {
                cout << "Data mahasiswa dengan NIM " << nim140 << " telah dihapus." << endl;
            } else {
                cout << "Data mahasiswa dengan NIM " << nim140 << " tidak ditemukan." << endl;
            }
        } else if (pilihan == 3) {
            string nim140;
            cout << "Masukkan NIM mahasiswa yang ingin dicari: ";
            cin >> nim140;
            Mahasiswa* mahasiswa = hash_table.cari_berdasarkan_nim(nim140);
            if (mahasiswa != nullptr) {
                cout << "Data mahasiswa ditemukan:" << endl;
                cout << "NIM: " << mahasiswa->nim140 << endl;
                cout << "Nilai: " << mahasiswa->nilai140 << endl;
            } else {
                cout << "Data mahasiswa dengan NIM " << nim140 << " tidak ditemukan." << endl;
            }
        } else if (pilihan == 4) {
            vector<Mahasiswa> mahasiswa_ditemukan = hash_table.cari_berdasarkan_rentang_nilai(80, 90);
            if (!mahasiswa_ditemukan.empty()) {
                cout << "Data mahasiswa dengan nilai antara 80 dan 90:" << endl;
                for (Mahasiswa &mahasiswa : mahasiswa_ditemukan) {
                    cout << "NIM: " << mahasiswa.nim140 << endl;
                    cout << "Nilai: " << mahasiswa.nilai140 << endl;
                }
            } else {
                cout << "Tidak ada data mahasiswa dengan nilai antara 80 dan 90." << endl;
            }
        } else if (pilihan == 5) {
            cout << "Terima kasih!" << endl;
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    }

    return 0;
}
