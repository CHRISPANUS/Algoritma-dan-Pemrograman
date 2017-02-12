#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
//I.S PROGRAM MENCARI LUAS DAN JARI JARI LINGKARAN
//F.S MENAMPILKAN HASIL LUAS DAN JARI JARI LINGKARAN
#define PHI 3.14 // konstanta

using namespace std;

int main() {
    
   float jari_jari, luas;  //KAMUS
   
   jari_jari = 25; //konstanta
   
    //PROSES MENCARI LUAS
   luas = 0.5 * PHI * jari_jari * jari_jari;
   
    //MENAMPILKAN DATA LINGKARAN
    cout<<"data lingkaran";
   cout<<"\njari_jari : "<<jari_jari;
   cout<<"\nluas : "<<luas;
   cout<<"\n";
    
   return 0; // Mengakhiri Program
   }