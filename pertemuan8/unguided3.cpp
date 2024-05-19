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
