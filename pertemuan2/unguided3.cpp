#include <iostream> 
using namespace std; 

int main() { 
    int a; 
    cout << "Masukkan jumlah elemen array yang anda inginkan: "; 
    cin >> a; 
    
    int arr[a]; 
    for (int i = 0; i < a; i++) { 
        cout << "Input elemen array ke-" << i+1 << ": "; 
        cin >> arr[i]; 
        } 
        
        int choose; 
        if (true) { 
            cout << endl; 
            cout << "Pilih menu yang diinginkan: " << endl; 
            cout << "1. Mencari nilai maksimum" << endl; 
            cout << "2. Mencari nilai minimum" << endl; 
            cout << "3. Mencari nilai rata-rata" << endl; 
            cout << "Pilihan Anda: "; 
            cin >> choose; 
            switch(choose) { 
                case 1: { 
                    int maks = arr[0]; 
                    for (int i = 1; i < a; i++) {
                    if (arr[i] > maks) { 
                        maks = arr[i]; 
                        } 
                } 
                cout << "Nilai maksimum: " << maks << endl; 
                
                break; 
                }
                case 2: { 
                    int min = arr[0]; 
                    for (int i = 1; i < a; i++) { 
                    if (arr[i] < min) { 
                        min = arr[i]; 
                        } 
                } 
                cout << "Nilai minimum: " << min << endl; 
                
                break; 
                
                }
                 case 3: { 
                    int sum = 0; 
                    for (int i = 0; i < a; i++) { 
                        sum += arr[i]; 
                        } 
                        double ratarata = (double)sum / a; 
                        cout << "Nilai rata-rata: " << ratarata << endl; 
                        
                        break; 
                        
                        } 
                        default: { 
                            cout << "Pilihan yang anda masukkan tidak valid." << endl; 
                            
                            break; 
                            
                            } 
                        } 
                    } 
                    return 0; 
                }