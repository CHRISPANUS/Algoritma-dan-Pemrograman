#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
using namespace std;

//I.S Program Memasukan Data
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main ()  {
    const int MAX = 3;
    int var [MAX] = {10, 100, 200};
    int *ptr;
    ptr = var;
    int i = 0;
    
   while ( ptr <= &var[MAX - 1] ) {
        cout << "address of var["<< i <<"] =";
        cout << *ptr << endl;
       
        cout << "value of var[" << i << "] = ";
        cout << *ptr << endl;
    
       ptr++;
       i++;
       
    }
   return 0; 
}