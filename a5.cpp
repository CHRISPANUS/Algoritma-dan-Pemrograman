#include <iostream>
//I.S PROGRAM MENCARI LUAS DAN JARI JARI LINGKARAN
//F.S MENAMPILKAN HASIL LUAS DAN JARI JARI LINGKARAN
#define PHI 3.14 // konstanta

using namespace std;

int main() {
    
    //KAMUS
   float jari_jari, luas;
   
   //konstanta
   jari_jari = 25;
   
    //PROSES MENCARI LUAS
   luas = 0.5 * PHI * jari_jari * jari_jari;
   
    //MENAMPILKAN DATA LINGKARAN
    cout<<"data lingkaran";
   cout<<"\njari_jari : "<<jari_jari;
   cout<<"\nluas : "<<luas;
   cout<<"\n";
    
    //AKHIR PROGRAM
   return 0;
   }