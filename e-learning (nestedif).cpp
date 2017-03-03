#include <iostream>

//I.S Program Memasukan Data Diri (Nested IF) 
//F.S Menampilkan Data Diri 

using namespace std;

int main() {

//Kamus
char nama[20];
int jenis_kelamin, tinggi;

cout<<"Contoh program Nested IF"<<endl<<endl;
cout<<"Masukkan data anda dengan benar"<<endl<<endl;

cout<<"Nama : ";
    cin >> nama;
cout<<"Jenis Kelamin"<<endl;
cout<<"1. Laki-Laki"<<endl;
cout<<"2. Perempuan"<<endl;
cout<<"Masukkan pilihan : "; 
    cin >> jenis_kelamin;
cout<<"Tinggi Badan     : "; 
    cin >> tinggi;

if(jenis_kelamin==1) {
    if(tinggi>=165)
       {cout<<"\n-----Anda Dinyatakan Lulus Seleksi Ini-----"<<endl;}
   else
       cout<<"Maaf, Tinggi Badan Anda Belum Memenuhi Syarat"<<endl; }
else if (jenis_kelamin==2)
    {
    if(tinggi>=160)
       {cout<<"\n-----Anda Dinyatakan Lulus Seleksi Ini-----"<<endl;}
   else
       cout<<"Maaf, Tinggi Badan Anda Belum Memenuhi Syarat"<<endl;
       }

// Akhir Program
return 0;
}

