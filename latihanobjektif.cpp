#include <iostream>
using namespace std;

//I.S Program Memasukan Angka
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main () {
    //Kamus
    int jmlmhs = 0, mhsl = 0, mhstl = 0;
    //jmlmhs = jumlah mahasiswa, mhsl = mahasiswa yang lulus, mhstl = mahasiswa yang tidak lulus
    float IP, total = 0, rata;
    cout << "Masukan Nilai IP : ";
    cin >> IP;
    while (IP > -999) {
        if (IP >= 0 && IP <= 4) {
        jmlmhs++;
        total = total + IP;
        if (IP >= 2,75) {
        mhsl++;
        
        } else {
        mhstl++;
        }
}
    cout << "Masukan Nilai IP :";
    cin >> IP;
    
}

cout << endl;
cout << "Jumlah Mahasiswa = " << jmlmhs << endl;
cout << "Jumlah Mahasiswa Yang Lulus = " << mhsl << endl;
cout << "Jumlah Mahasiswa Yang Tidak Lulus = " << mhstl << endl;
rata = total / jmlmhs;
cout << "Rata - Rata IP = " << rata;

return 0;
}