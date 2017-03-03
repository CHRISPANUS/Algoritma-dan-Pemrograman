#include <iostream>

//I.S Program menunggu memasukan data ( Nested While )
//F.S Program menampilkan Data sesuai operasi logika

using namespace std;
 
int main () {
    
    //Kamus
   int x = 0;
   
   
   while(x < 3)
    {
       int y = 0;
       
       while(y < 5)
       {
           
           cout << "Nilai a = " << x << " di b = " << y << endl;
           y++;
       }
       x++;       
   }
    
    //Perintah Mengakhiri Program
   return 0;
}