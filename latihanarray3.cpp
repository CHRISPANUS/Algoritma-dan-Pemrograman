#include <iostream>
using namespace std;

//I.S Program Memasukan Data
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main(){
    string name[3];
    cout << " Masukan 3 Nama Anda " << endl;
    
    cin >> name[0];
    cin >> name[1];
    cin >> name[2];
    
    cout << "Nama Anda 1 :" <<name[0]<<endl;
    cout << "Nama Anda 2 :" <<name[1]<<endl;
    cout << "Nama Anda 3 :" <<name[2]<<endl;

return 0;
}