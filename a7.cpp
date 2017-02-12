#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
//I.S PROGRAM PERHITUNGAN
//F.S MENAMPILKAN HASIL PERHITUNGAN

using namespace std;

int main() {
    
    // Kamus
    
    int a = 21;
    int b = 10;
    int c ;
    
    // Penjumlahan
    c = a + b;
    cout << c << endl;
    
    // Pengurangan
    c = a - b;
    cout << c << endl;
    
    // Perkalian
    c = a * b;
    cout << c << endl;
    
    // Pembagian
    c = a / b;
    cout << c << endl;
    
    // Sisa Pembagian
    c = a % b;
    cout << c << endl;
    
    // Tambah Satu
    c = a++;
    cout << c << endl;
    
    // Kurang Satu
    c = a--;
    cout << c << endl;
    
   return 0; // Mengakhiri Program
   }