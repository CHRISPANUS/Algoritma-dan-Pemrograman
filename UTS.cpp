#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output

using namespace std;

int main () {
    // Kamus
    int a, b, t, k, z, c;
    
    cout << "Masukan nilai a : ";
    cin >> a;
    
    cout << "Masukan nilai b : ";
    cin >> b;
    
    cout << endl;
    
    t = a + b;
    cout << "Hasil pertambahan a dan b adalah " << t << endl;
    
    k = a - b;
    cout << "Hasil pengurangan a dan b adalah " << k << endl;
    
    z = a * b;
    cout << "Hasil perkalian a dan b adalah " << z << endl;
    
    c = a % b;
    cout << "Hasil pembagian a dan b adalah " << c << endl;
    
     if( a == b ) {
    cout << "a sama dengan b" << endl;
    } else {
    cout << "a tidak sama dengan b" << endl;
    }
    
    if( a != b ) {
    cout << "a tidak sama dengan b" << endl;
    } else {
    cout << "a sama dengan b" << endl;
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
    
    if ( a <= b ) {
    cout << "a lebih kecil dari b" << endl;
    }
    
    if ( a >= b ) {
    cout << "a lebih besar dari b" << endl;
    }
return 0; // Mengakhiri Program
}