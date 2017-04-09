#include <iostream>
using namespace std;

//I.S Program Memasukan Angka
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main(){
    int c = 0;
    string array [10];
    cout << "Masukan Elemen Aray : " << endl;
    
    for (int i = 0; i< 10; i++){ // perulangan
        cout << "Elemen ke-" << i+1 << " = ";
        cin >> array [i];
    }
    cout << " Masing - Masing Elemen " << endl;
        for (int i = 0; i< 10; i++){
            if (array[i] =="A"){
                c++;
            }
            cout <<" Elemen ke-" << i+1 << " = "<< array[i] << endl;
        }
        cout << " Jumlah Elemen A Yang Di Input = " << c;
        
return 0;
    }