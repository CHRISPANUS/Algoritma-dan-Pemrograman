#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
//I.S PROGRAM 
//F.S MENAMPILKAN HASIL 

using namespace std;

main() {
    
    // Kamus 
    int a = 21;
    int b = 10;
    int c ;
    
    if( a = b ) {
    cout << "a sama dengan b" << endl;
    } else {
    cout << "a tidak sama dengan b" << endl;
    }
    
    if( a < b ) {
    cout << "a lebih kecil dari b" << endl;
    } else {
    cout << "a tidak lebih kecil dari b" << endl;
    }
    
    
    if( a > b ) {
    cout << "a lebih besar dari b" << endl;
    } else {
    cout << "a tidak lebih besar dari b" << endl;
    }
    
    /* Ganti nilai a dan nilai b */
        a = 5;
        b = 20;
    
    if ( a <= b ) {
    cout << "a lebih kecil dari b" << endl;
    }
    
    if ( a >= b ) {
    cout << "a lebih besar dari b" << endl;
    }
    
    return 0; // Mengakhiri Program
}