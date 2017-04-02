#include <iostream>
using namespace std;

//I.S Program Memasukan Angka
//F.S Program Menampilkan Data Sesuai Operasi Logika

int main(){
    int n,a,min,max,bil,i;
    
    cout<< "PROGRAM MENCARI NILAI MAKSIMAL DAN MINIMAL"; 
    cout<< endl;
    cout<<"Masukkan jumlah bilangan : ";
    cin>>n;
    cout<<"Masukkan bilangan ke-1 : ";
    cin>>a;
    min=a;
    max=a;
    for(i=2;i<=n;i++){
    cout<<"Masukkan bilangan ke-"<<i<<" : ";
        cin>>bil;
        if ((bil>max)){
            max=bil;
        } else if((bil<min)){
       min=bil;
   }
}
cout<< endl;
cout<<"Nilai maximal adalah : "<<max<<endl;
cout<<"Nilai minimal adalah : "<<min<<endl;

    return 0;
}