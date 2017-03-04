#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
using namespace std;

//I.S Program Memasukan Data
//F.S Program Menampilkan Data Sesuai Operasi Logika

//Prototype Fungsi
long rek(int f);

    int main ()  {
        
        int x;
        int n = 4;
        
        cout << n << " ! = " << rek(n) << endl;
        
        n = 9;
        
        cout << n << " n = " << rek(n) << endl;
        
        cout << " Masukan Angka Yang Akan di Faktorialkan : ";
        cin >> x;
        
        cout << x << " n = " << rek(x) << endl;
        
    return 0;
        
    }

long rek(int f) {
    
    if (f == 0)
        return 1;
    
    else return f * rek(f-1);
}