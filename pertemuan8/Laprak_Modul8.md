# <h1 align="center">Laporan Praktikum Modul 8 Algoritma Searching</h1>
<p align="center">Kanasya Abdi Aziz - 2311102140</p>

## Dasar Teori

Sequential search dan binary search adalah dua jenis algoritma pencarian yang sering digunakan pada program untuk menelusuri suatu data yang dicari. 

•	Sequential Search
1.	Algoritma ini membandingkan setiap elemen array satu per satu secara berurutan, mulai dari elemen pertama, sampai elemen yang dicari ditemukan atau sampai semua elemen diperiksa.
2.	Jika elemen ditemukan, ia mengembalikan indeksnya, jika tidak -1.
3.	Contoh: Linear Search

•	Binary Search
1.	Algoritma ini hanya dapat digunakan pada data yang sudah terurut.
2.	Algoritma ini membagi data menjadi dua bagian setiap kali, dan memeriksa apakah elemen yang dicari berada di setengah kiri atau setengah kanan.
3.	Apabila ditemukan kecocokan nilai maka akan mengembalikan output, jika tidak pencarian akan terus berlanjut hingga akhir dari pembagian jumlah elemen tersebut.
4.	Contoh: Binary Search.

Berikut adalah beberapa hal yang perlu dipertimbangkan saat menggunakan Algoritma Searching:
•	Kapan menggunakan sequential search: Data tidak terurut atau dalam keadaan acak, Jumlah data yang dicari relatif kecil, Data yang dicari berada di awal atau tengah array.
•	Kapan menggunakan binary search: Data sudah terurut, Jumlah data yang dicari relatif besar, Data yang dicari berada di akhir array atau tidak ada dalam array.
Namun, perlu diingat bahwa binary search lebih efisien dari sisi waktu dibandingkan dengan sequential search karena binary search hanya memerlukan logaritma basis 2 dari jumlah data yang dicari, sedangkan sequential search memerlukan waktu yang lebih lama karena harus memeriksa setiap elemen satu per satu secara berurutan.

Perbedaan antara sequential search dan binary search:
1.	Sequential search membandingkan setiap elemen array satu per satu secara berurutan, sedangkan binary search membagi data menjadi dua bagian setiap kali dan memeriksa apakah elemen yang dicari berada di setengah kiri atau setengah kanan.
2.	Sequential search dapat digunakan pada data yang tidak terurut, sedangkan binary search hanya dapat digunakan pada data yang sudah terurut.
3.	Binary search lebih efisien dari sisi waktu dibandingkan dengan sequential search karena binary search hanya memerlukan logaritma basis 2 dari jumlah data yang dicari, sedangkan sequential search memerlukan waktu yang lebih lama karena harus memeriksa setiap elemen satu per satu secara berurutan.
4.	Namun, binary search lebih rumit daripada sequential search dan memerlukan data yang sudah terurut.


## Guided 

### 1. [Guided 1]

```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // Algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            break;
        }
    }
    cout << "\tProgram Sequential Search Sederhana\n" << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
    if (ketemu) {
        cout << "\nAngka " << cari << " ditemukan pada indeks ke-"
<< i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." <<
endl;
    }
    return 0;
}
```
Skrip di atas adalah implementasi sederhana dari algoritma pencarian sequential dalam bahasa C++. Berikut adalah penjelasan singkat:
- Program ini dirancang untuk mencari suatu bilangan (`cari`) dalam sebuah array (`data`) dengan ukuran `n` (dalam kasus ini, `n` didefinisikan sebagai 10).
- Array `data` berisi bilangan {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}.
- Program menginisialisasi variabel boolean `ketemu` sebagai `false`, yang digunakan untuk melacak apakah bilangan target ditemukan.
- Algoritma iterasi melalui setiap elemen dalam array menggunakan perulangan for, membandingkan setiap elemen dengan bilangan target (`cari`).
- Jika ditemukan cocok, `ketemu` diatur sebagai `true` dan perulangan dihentikan menggunakan perintah `break`.
- Setelah perulangan, program memeriksa nilai `ketemu`. Jika `ketemu` adalah `true`, program mencetak pesan yang menunjukkan bahwa bilangan target ditemukan serta indeksnya dalam array. Jika `ketemu` adalah `false`, program mencetak pesan yang mengatakan bahwa bilangan target tidak ditemukan dalam data.

Inilah contoh dasar bagaimana algoritma sequential search bekerja, di mana algoritma memeriksa setiap elemen dalam array secara berurutan hingga mencapai akhir array atau menemukan bilangan target.

### 2. [Guided 2]

```C++
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int dataArray[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for (i = 0; i < 7; i++) {
        min = i;
        for (j = i + 1; j < 7; j++) {
            if (dataArray[j] < dataArray[min]) {
                min = j;
            }
        }
        temp = dataArray[i];
        dataArray[i] = dataArray[min];
        dataArray[min] = temp;
    }
}
void binarysearch() {
    int awal, akhir, tengah;
    bool b_flag = false;
    awal = 0;
    akhir = 6; // Corrected to 6 to match array bounds
    while (!b_flag && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (dataArray[tengah] == cari) {
            b_flag = true;
        } else if (dataArray[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if (b_flag) {
        cout << "\nData ditemukan pada index ke- " << tengah <<endl;
    } else {
        cout << "\nData tidak ditemukan\n";
    }
}
int main() {
    cout << "\tBINARY SEARCH" << endl;
    cout << "\nData: ";

    // Tampilkan data awal
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << dataArray[x];
    }
    cout << endl;

    cout << "\nMasukkan data yang ingin Anda cari: ";
    cin >> cari;

    cout << "\nData diurutkan: ";
    // Urutkan data dengan selection sort
    selection_sort();
    // Tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << dataArray[x];
    }
    cout << endl;

    binarysearch();

    _getche();
    return 0;
}
```
Skrip di atas adalah implementasi program C++ yang menggunakan algoritma binary search untuk mencari suatu bilangan (`cari`) dalam sebuah array (`dataArray`) yang telah diurutkan menggunakan algoritma selection sort. Berikut adalah penjelasan singkat:

- Program ini memuat array `dataArray` dengan 7 elemen: {1, 8, 2, 5, 4, 9, 7}.
- Program meminta pengguna untuk memasukkan bilangan yang ingin dicari (`cari`) melalui input.
- Program mengurutkan array menggunakan algoritma selection sort, yang mengurutkan array secara ascending.
- Setelah array diurutkan, program menggunakan algoritma binary search untuk mencari bilangan target (`cari`) dalam array.
- Algoritma binary search bekerja dengan cara membagi array menjadi dua bagian, mencari bilangan target di bagian tengah, dan kemudian membagi bagian yang sesuai lagi hingga ditemukan bilangan target atau mencapai akhir array.
- Jika bilangan target ditemukan, program mencetak indeksnya dalam array. Jika tidak ditemukan, program mencetak pesan bahwa bilangan target tidak ditemukan.
- Program menggunakan fungsi `_getche()` untuk menghentikan program dan menampilkan tampilan "Tekan tombol apa pun untuk keluar...".

Dengan demikian, program ini menunjukkan bagaimana binary search dapat digunakan untuk mencari suatu bilangan dalam array yang telah diurutkan secara efisien.

## Unguided 

### 1. [Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!]

```C++
//Kanasya Abdi Aziz ( 2311102140 )
#include <iostream>
using namespace std;

void selectionSort(string &huruf, int n)
{
    int i, j, min140;
    for (i = 0; i < n - 1; i++)
    {
        min140 = i;
        for (j = i + 1; j < n; j++)
            if (huruf[j] < huruf[min140])
                min140 = j;
        char temp = huruf[i];
        huruf[i] = huruf[min140];
        huruf[min140] = temp;
    }
}

int binarySearch(string Huruf140, int kiri140, int kanan140, char target140)
{
    while (kiri140 <= kanan140)
    {
        int mid = kiri140 + (kanan140 - kiri140) / 2;
        if (Huruf140[mid] == target140)
            return mid;
        if (Huruf140[mid] < target140)
            kiri140 = mid + 1;
        else
            kanan140 = mid - 1;
    }
    return -1;
}

int main()
{
    string kalimat140;
    char input140;
    cout << "====================================" << endl;
    cout << "PROGRAM MENENTUKAN INDEKS PADA HURUF" << endl;
    cout << "====================================" << endl;
    cout << "Masukkan kalimat yang anda inginkan: ";
    getline(cin, kalimat140);
    cout << "Masukkan huruf yang anda ingin cari: ";
    cin >> input140;
    cout << endl;
    selectionSort(kalimat140, kalimat140.size());
    int result = binarySearch(kalimat140, 0, kalimat140.size() - 1, input140);
    if (result == -1)
    {
        cout << "Huruf yang anda cari tidak ditemukan!" << endl;
    }
    else
    {
        cout << "Huruf setelah diurutkan: " << kalimat140 << endl;
        cout << "Huruf ditemukan pada indeks ke- " << result << endl;
    }
    return 0;
}

```
#### Output:
![Screenshot Output Unguided 1](Output-Unguided-1_Kanasya.png)

Skrip di atas adalah implementasi program C++ yang menggunakan algoritma selection sort dan binary search untuk mencari indeks suatu huruf dalam sebuah kalimat. Berikut adalah penjelasan singkat:

- Program ini meminta pengguna untuk memasukkan sebuah kalimat dan suatu huruf yang ingin dicari.
- Program menggunakan algoritma selection sort untuk mengurutkan huruf dalam kalimat secara ascending.
- Kemudian, program menggunakan algoritma binary search untuk mencari huruf yang ingin dicari dalam kalimat yang telah diurutkan.
- Algoritma binary search bekerja dengan cara membagi kalimat menjadi dua bagian, mencari huruf target di bagian tengah, dan kemudian membagi bagian yang sesuai lagi hingga ditemukan huruf target atau mencapai akhir kalimat.
- Jika huruf target ditemukan, program mencetak indeksnya dalam kalimat. Jika tidak ditemukan, program mencetak pesan bahwa huruf target tidak ditemukan.
- Program menggunakan fungsi `getline` untuk memasukkan kalimat dan fungsi `cin` untuk memasukkan huruf yang ingin dicari.

Dengan demikian, program ini menunjukkan bagaimana binary search dapat digunakan untuk mencari suatu huruf dalam sebuah kalimat yang telah diurutkan secara efisien.

### 2. [Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!]

```C++
//Kanasya Abdi Aziz ( 2311102140 )
#include <iostream>
using namespace std;

int main()
{
   string kalimat140;
   int count=0;
   cout << "==============================" << endl;
   cout << "PROGRAM MENENTUKAN HURUF VOKAL" << endl;
   cout << "==============================" << endl;
   cout << "Masukan Kalimat yang anda inginkan: "   ;
   cin  >> kalimat140; 

   for (int i=0; i<kalimat140.length(); i++)
   {
       if(kalimat140[i]=='a'|| kalimat140[i]=='i'|| kalimat140[i]=='u'|| kalimat140[i]=='e'|| kalimat140[i]=='o')
       {
             count++;
       }
   }
   cout << "Jumlah huruf vokal pada kalimat tersebut adalah : " << count;
   
}
```
#### Output:
![Screenshot Output Unguided 1](Output-Unguided-2_Kanasya.png)

Skrip di atas adalah implementasi program C++ yang digunakan untuk menghitung jumlah huruf vokal dalam sebuah kalimat. Berikut adalah penjelasan singkat:

- Program ini meminta pengguna untuk memasukkan sebuah kalimat melalui input.
- Program kemudian menggunakan perulangan untuk memeriksa setiap huruf dalam kalimat.
- Dalam perulangan, program memeriksa apakah huruf tersebut adalah huruf vokal ('a', 'i', 'u', 'e', atau 'o') menggunakan operator logika '||' untuk membandingkan huruf dengan huruf vokal.
- Jika huruf tersebut adalah huruf vokal, program meningkatkan nilai variabel `count` untuk menghitung jumlah huruf vokal.
- Setelah perulangan selesai, program mencetak jumlah huruf vokal yang ditemukan dalam kalimat.

Dengan demikian, program ini menunjukkan bagaimana cara menghitung jumlah huruf vokal dalam sebuah kalimat menggunakan C++.

### 3. [Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search! ]

```C++
//Kanasya Abdi Aziz ( 2311102140 )
#include <iostream>
using namespace std;

int HitungAngka140( const int array[], int size140, int target140) {
    int count = 0;
    
    for (int i = 0; i < size140; i++) {
        if (array[i] == target140) {
            count++;
        }
    }
    
    return count;
}

int main() {
    const int size140 = 10;
    int array[size140] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target140 = 4;
    
    int count = HitungAngka140(array, size140, target140);
    
    cout << "=======================================" << endl;
    cout << "========MENGHITUNG ANGKA TARGET========" << endl;
    cout << "=======================================" << endl;
    cout << "Jumlah angka " << target140 <<  endl; 
    cout << "Ditemukan dalam data sebanyak: " << count << endl;
    
    return 0;
}
```
![Screenshot Output Unguided 1](Output-Unguided-3_Kanasya.png)

Skrip di atas adalah implementasi program C++ yang digunakan untuk menghitung jumlah angka yang sama dengan suatu target dalam sebuah array. Berikut adalah penjelasan singkat:

- Program ini memiliki fungsi `HitungAngka140` yang menerima tiga parameter: array, ukuran array, dan target angka yang ingin dicari.
- Fungsi ini menggunakan perulangan untuk memeriksa setiap angka dalam array. Jika angka tersebut sama dengan target, fungsi meningkatkan nilai variabel `count` untuk menghitung jumlah angka yang sama dengan target.
- Setelah perulangan selesai, fungsi mengembalikan nilai `count` yang menunjukkan jumlah angka yang sama dengan target.
- Dalam fungsi `main`, program memasukkan array dengan ukuran 10 dan memasukkan target angka yang ingin dicari, yaitu 4.
- Program kemudian memanggil fungsi `HitungAngka140` dengan parameter array, ukuran array, dan target, dan mengembalikan nilai `count` yang menunjukkan jumlah angka 4 dalam array.
- Program mencetak hasilnya, yaitu jumlah angka 4 yang ditemukan dalam data.

Dengan demikian, program ini menunjukkan bagaimana cara menghitung jumlah angka yang sama dengan suatu target dalam sebuah array menggunakan C++.



## Kesimpulan
Setelah mempelajari algoritma searching sequential search dan binary search, dapat diketahui bahwa sequential search adalah metode pencarian data yang membandingkan setiap elemen dengan elemen yang dicari secara berurutan, mulai dari elemen pertama hingga elemen yang dicari ditemukan. Metode ini direkomendasikan untuk digunakan pada data yang relatif kecil. Sementara binary search adalah metode pencarian data yang memerlukan data dalam keadaan terurut, baik naik atau turun. Proses pencarian binary search hanya dapat dilakukan pada data yang telah diurutkan terlebih dahulu. Algoritma ini biasanya digunakan pada program dengan jumlah data yang besar, dengan kompleksitas Ο(log n), di mana n adalah jumlah item.

Binary search lebih efisien dari sisi waktu jika dibandingkan dengan sequential search, namun memerlukan data yang telah diurutkan terlebih dahulu. Algoritma binary search juga lebih kompleks daripada sequential search. Dalam menggunakan binary search, data dalam array harus diurutkan terlebih dahulu menggunakan teknik sorting seperti bubble sort.

## Referensi
[1] Y Rahmanto, J Alfian, D Damayanti - Jurnal Buana Informatika, 2021
[2] Y. Rahmanto, M. F. Randhika, F. Ulum, and B. Priyopradono, “Aplikasi pembelajaran audit sistem informasi dan tata kelola teknologi informasi berbasis Mobile,” J. TEKNOKOMPAK, vol. 14, no. 2, pp. 62–67, Aug. 2020, doi:10.33365/jtk.v14i2.723