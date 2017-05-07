#include <iostream>
using namespace std;

//I.S Program Memasukan Angka
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main(){
    int M [3] [3];
    int M1 [3] [3];
    int M2 [3] [3];
    
      for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<"Masukan angka untuk matriks pertama pada indeks baris ke-"<< i <<" dan indeks kolom ke-" << j <<" : ";
            cin >> M1 [i] [j];
            cout <<"Masukan angka untuk matriks kedua pada indeks baris ke-"<< i <<" dan indeks kolom ke-" << j <<" : ";
            cin >> M2 [i] [j];
            M [i] [j] = M1 [i] [j] + M2 [i] [j];
        }
    }
    cout <<"Tabel Matriks 1 : " << endl;
    cout <<" ========================"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M1 [0] [j] <<"\t" ;} cout<<"|"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M1 [1] [j] <<"\t" ;} cout<<"|"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M1 [2] [j] <<"\t" ;} cout<<"|"<< endl;
    cout <<" ========================"<< endl;
    cout << endl;
    
     cout <<"Tabel Matriks 2 : " << endl;
    cout <<" ========================"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M2 [0] [j] <<"\t" ;} cout<<"|"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M2 [1] [j] <<"\t" ;} cout<<"|"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M2 [2] [j] <<"\t" ;} cout<<"|"<< endl;
    cout <<" ========================"<< endl;
    cout << endl;
    
     cout <<"Tabel Penjumlahan Matriks 1 dan Matriks 2 : " << endl;
    cout <<" ========================"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M [0] [j] <<"\t" ;} cout<<"|"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M [1] [j] <<"\t" ;} cout<<"|"<< endl;
        for (int j = 0; j < 3; j++) {
    cout <<" |  "<< M [2] [j] <<"\t" ;} cout<<"|"<< endl;
    cout <<" ========================"<< endl;
    cout << endl;
    return 0;
}