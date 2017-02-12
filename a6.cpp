#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
//I.S PROGRAM MENCARI UKURAN
//F.S MENAMPILKAN HASIL UKURAN 

using namespace std;

int main() {
    
    // PROSES MENCARI UKURAN
    // USER DEFINED TYPE
    
    typedef float olen;
    // typedef adalah syntax untuk mengganti variabel data
   cout<<"ukuran char : " <<sizeof(char) << endl;
   cout<<"ukuran int : " <<sizeof(olen) << endl;
   cout<<"ukuran short int : " <<sizeof(short int) << endl;
   cout<<"ukuran long int : " <<sizeof(long int) << endl;
   cout<<"ukuran float : " <<sizeof(olen) << endl;
   cout<<"ukuran double : " <<sizeof(double) << endl;
   cout<<"ukuran wchar_t : " <<sizeof(wchar_t) << endl;
    
   return 0; // Mengakhiri Program
   }