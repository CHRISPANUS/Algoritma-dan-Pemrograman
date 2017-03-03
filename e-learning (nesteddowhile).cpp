#include <iostream>

//I.S Aplikasi Pengulangan (Nested Do While)
//F.S Menampilkan Hasil Fungsi Nested Do While

using namespace std;

int main () {
    
    //Kamus
   int i, j;
    i = 20;
   
    do   {
        j   = 5; ;
        
       do {           
           cout << i*j << " " ;
           j++; }
        
       while(j <= i);
        cout << endl;
        i--; }
    while(i >= 5);
   
    //Perintah Mengakhiri Program
   return 0;
} 