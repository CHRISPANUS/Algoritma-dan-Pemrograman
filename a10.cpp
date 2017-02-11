#include <iostream>

using namespace std;

int main () {

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
    
return 0;
}