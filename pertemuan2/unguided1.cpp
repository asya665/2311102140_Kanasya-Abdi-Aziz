#include <iostream> 
using namespace std; 

int main() { 
    int bilangan [10]; 
    
    //data array yang akan di proses
    cout << "Data Array : " ; 
    for (int i=0; i<10; i++){ 
        cin >> bilangan [i] ; 
        
    } 
    // proses pemilihan nomor genap yang akan di outputkan
    cout << "Nomor Genap : " ; 
    for (int i=0; i<10; i++){ 
        if (bilangan [i]%2 == 0){ 
            cout << bilangan [i] << " " ; 
            
        } 
    } 
    //proses pemilihan nomor ganjil yang akan di outputkan
    cout << endl; 
    cout << "Nomor Ganjil : " ; 
    for (int i=0; i<10; i++){ 
        if (bilangan [i]%2 != 0){ 
            cout << bilangan [i] << " " ; 
         } 
    } 
    return 0; 
    
}