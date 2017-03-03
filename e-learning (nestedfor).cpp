#include <iostream>

//I.S Aplikasi Pengulangan (Nested For)
//F.S Menampilkan hasil fungsi nested for

using namespace std;

int main() {
    
    // Kamus
    int x, y;
    
    cout << "Pengulangan Berulang" << endl;
    
    //Fungsi Nested For
    for(x = 90; x <= 100; x++) { for(y = 90; y < x; y++) { cout << y; }
    
    //Menampilkan Hasil Fungsi Nested For 
        cout << x << endl;
    }
    
    //Perintah Mengakhiri Program
    return 0;
    }