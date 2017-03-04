#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
using namespace std;

//I.S Program Memasukan Data
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main ()  {
    int *ptr = NULL;
    //coba int *ptr;
    
    cout << "The value of ptr is" << ptr ;
    if (ptr)
        cout << "not null";
    else
        cout << "null"; 
    cout << "\n" << endl;
    
    if (!ptr)
        cout << "null";
    else
        cout << "not null";
    
    return 0;
}
        