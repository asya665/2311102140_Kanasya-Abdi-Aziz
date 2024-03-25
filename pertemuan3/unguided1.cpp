#include <iostream>
#include <iomanip>
using namespace std;

//Deklarasi Struct Node
struct Node {
    string Nama140;
    int Umur140;
    Node* next;
};

Node* head;
Node* tail;

//Inisialisasi Node
void inisialisasi140() {
    head = NULL;
    tail = NULL;
}

// Pengecekan
bool cek140() {
    if (head == NULL)
        return true;
    else
        return false;
}

//Tambah Depan
void depan140(string name, int age) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Nama140 = name;
    baru->Umur140 = age;
    baru->next = NULL;

    if (cek140() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        baru->next = head;
        head = baru;
    }
}

//Tambah Belakang
void belakang140(string name, int age) {
    //Buat Node baru
    Node* baru = new Node;
    baru->Nama140 = name;
    baru->Umur140 = age;
    baru->next = NULL;

    if (cek140() == true) {
        head = tail = baru;
        tail->next = NULL;
    }
    else {
        tail->next = baru;
        tail = baru;
    }
}

//Hitung Jumlah List
int jumlahlist140() {
    Node* hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL) {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

//Tambah Tengah
void tengah140(string name, int age, int posisi) {
    if (posisi < 1 || posisi > jumlahlist140()) {
        cout << "Tidak terjangkau!" << endl;
    }
    else if (posisi == 1) {
        cout << "Bukan di tengah." << endl;
    }
    else {
        Node* baru, * bantu;
        baru = new Node();
        baru->Nama140 = name;
        baru->Umur140 = age;

        // tranversing
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1) {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

//Hapus Depan
void hapus140() {
    Node* hapus;

    if (cek140() == false) {
        if (head->next != NULL) {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "Kosong!" << endl;
    }
}

//Hapus Belakang
void hapusbelakang140() {
    Node* hapus;
    Node* bantu;

    if (cek140() == false) {
        if (head != tail) {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail) {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else {
            head = tail = NULL;
        }
    }
    else {
        cout << "Kosong!" << endl;
    }
}

//Hapus Tengah
void hapustengah140(int posisi) {
    Node* hapus, * bantu, * bantu2;

    if (posisi < 1 || posisi > jumlahlist140()) {
        cout << "Tidak terjangkau!" << endl;
    }
    else if (posisi == 1) {
        cout << "Bukan yang tengah." << endl;
    }
    else {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi) {
            if (nomor == posisi - 1) {
                bantu2 = bantu;
            }

            if (nomor == posisi) {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }

        bantu2->next = bantu;
        delete hapus;
    }
}

//Ubah Depan
void ubahdepan140(string name, int age) {
    if (cek140() == false) {
        head->Nama140 = name;
        head->Umur140 = age;
    }
    else {
        cout << "Tidak ada yang berubah!" << endl;
    }
}

//Ubah Tengah
void ubahtengah140(string name, int age, int posisi) {
    Node* bantu;

    if (cek140() == false) {
        if (posisi < 1 || posisi > jumlahlist140()) {
            cout << "Tidak Terjangkau!" << endl;
        }
        else if (posisi == 1) {
            cout << "Bukan yang Tengah." << endl;
        }
        else {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi) {
                bantu = bantu->next;
                nomor++;
            }

            bantu->Nama140 = name;
            bantu->Umur140 = age;
        }
    }
    else {
        cout << "Kosong!" << endl;
    }
}

//Ubah Belakang
void ubahbelakang140(string name, int age) {
    if (cek140() == false) {
        tail->Nama140 = name;
        tail->Umur140 = age;
    }
    else {
        cout << "Kosong" << endl;
    }
}

//Hapus List
void hapuslist140() {
    Node* bantu, * hapus;
    bantu = head;

    while (bantu != NULL) {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "Menghapus semua!" << endl;
}

//Tampilkan List
void tampillist140() {
    Node* bantu;
    bantu = head;

    cout << left << setw(15) << "-Nama-" << right << setw(4) << "-Usia-" << endl; // Supaya rapi

    if (cek140() == false) {
        while (bantu != NULL) {
            cout << left << setw(15) << bantu->Nama140 << right << setw(4) << bantu->Umur140 << endl; // Supaya lurus di output
            bantu = bantu->next;
        }

        cout << endl;
    }
    else {
        cout << "Kosong!" << endl;
    }
}

int main() {
    inisialisasi140(); // Inisialisasi Linked List
    cout << "\n(A.)-=-=-= SELAMAT DATANG =-=-=-" << endl; // Menampilkan nama dan umur awal & menjawab poin a
    depan140("Karin", 18);
    depan140("Hoshino", 18);
    depan140("Akechi", 20); 
    depan140("Yusuke", 19);
    depan140("Michael", 18);
    depan140("Jane", 20);
    depan140("John", 19);
    depan140("Kanasya", 19);
    tampillist140();

    // Menjawab poin b
    cout << "-=-=-= (B) Hapus data 'Akechi' =-=-=-" << endl;
    hapustengah140(6);
    tampillist140();

    // Menjawab poin c
    cout << "-=-=-= (C) Tambah data 'Futaba (18)' diantara John & Jane =-=-=-" << endl;
    tengah140("Futaba", 18, 3);
    tampillist140();

    // Menjawab poin d
    cout << "-=-=-= (D) Tambah data 'Igor (20)' di awal =-=-=-" << endl;
    depan140("Igor", 20);
    tampillist140();

    // Menjawab poin e & f
    cout << "-=-=-= (E) Ubah data 'Michael' menjadi 'Reyn (18)' =-=-=-" << endl;
    cout << "-=-=-= (F) Tampilan Akhir =-=-=-" << endl;
    ubahtengah140("Reyn", 18, 6);
    tampillist140();

    return 0;
}