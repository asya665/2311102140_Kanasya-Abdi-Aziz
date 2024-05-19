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
