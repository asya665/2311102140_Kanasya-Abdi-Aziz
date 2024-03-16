#include <iostream> 
using namespace std; 

int main() { 
    int a, b, c; 
    cout << "Masukkan jumlah elemen matriks: "; 
    cin >> a; 
    cout << "Masukkan ukuran matriks (y z): "; 
    cin >> b >> c; 
    
    int arr[a][b][c]; 
    //Input elemen 
    for (int i = 0; i < a; i++) { 
        for (int j = 0; j < b; j++) { 
            for (int k = 0; k < c; k++) { 
                cout << "Input Array[" << i << "][" << j << "][" << k << "] = "; 
                cin >> arr[i][j][k]; 
            } 
        } 
        cout << endl; 
    } 
    //Output Array 
    for (int i = 0; i < a; i++) { 
        for (int j = 0; j < b; j++) { 
            for (int k = 0; k < c; k++) { 
                cout << "Data Array[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl; 
            }
            
        } 
    }
    cout << endl; 
    //Tampilan array 
    for (int i = 0; i < a; i++) { 
        cout << "Matriks ke-" << i+1 << ":" << endl; 
        for (int j = 0; j < b; j++) { 
            for (int k = 0; k < c; k++) { 
                cout << arr[i][j][k] << " "; 
            } 
             cout << endl; 
        } 
        cout << endl; 
    } 
    return 0; 
}