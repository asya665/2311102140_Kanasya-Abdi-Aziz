//Kanasya Abdi Aziz_2311102140
#include <iostream> 
#include <iomanip> 
#include <vector> 
#include <string> 
using namespace std; 

int main() 
{ 
    int Kanasya_2311102140; 
    cout << "Silahkan masukkan jumlah simpul: "; 
    cin >> Kanasya_2311102140; 
    vector<string> simpul(Kanasya_2311102140); 
    vector<vector<int>> busur(Kanasya_2311102140, 
    vector<int>(Kanasya_2311102140, 0)); 
    
    cout << "Silahkan masukkan nama simpul " << endl; 
    
    for (int i = 0; i < Kanasya_2311102140; i++) { 
        cout << "Simpul ke-" << (i + 1) << ": "; 
        cin >> simpul[i]; 
        } 
        cout << "Silahkan masukkan bobot antar simpul" << endl; 
    
    for (int i = 0; i < Kanasya_2311102140; i++) { 
        
        for (int j = 0; j < Kanasya_2311102140; j++) 
        { 
            cout << simpul[i] << " --> " << simpul[j] << " = "; 
            cin >> busur[i][j];
             }
        } 
             cout << endl; 
             cout << setw(7) << " "; 
             for (int i = 0; i < Kanasya_2311102140; i++) {

                cout << setw(8) << simpul[i]; 
            } 
                cout << endl; 
                
                for (int i = 0; i < Kanasya_2311102140; i++) 
                { 
                    cout << setw(7) << simpul[i]; 
                    
                    for (int j = 0; j < Kanasya_2311102140; j++) 
                    
                {
                    cout << setw(8) << busur[i][j];
                } 
                cout << endl; 
            } 
        }