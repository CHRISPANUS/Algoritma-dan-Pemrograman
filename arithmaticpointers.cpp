#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
using namespace std;

//I.S Program Memasukan Data
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main ()  {
    int var = 10;
    int *ptr = &var;
    
    cout << ptr << endl;
    cout << ptr++ << endl;
    cout << ptr++ << endl;
    cout << ptr++ << endl;
    
    return 0;
}