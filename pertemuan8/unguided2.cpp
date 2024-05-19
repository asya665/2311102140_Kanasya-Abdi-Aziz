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
