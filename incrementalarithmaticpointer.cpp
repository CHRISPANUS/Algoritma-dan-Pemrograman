#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
using namespace std;

//I.S Program Memasukan Data
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main ()  {
    const int MAX = 3;
    int var [MAX] = {10, 100, 200};
    int *ptr;
        
    //alamat array ke pointer
    ptr = var;
    
    for (int i = 0; i < MAX; i++) {
        cout << "address of var["<< i <<"] =";
        cout << *ptr << endl;
        
        // Menunjuk ke memory selanjutnya
        ptr++;
    
    }
   return 0; 
}