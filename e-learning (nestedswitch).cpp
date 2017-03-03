#include <iostream>

//I.S Aplikasi Sederhana Pemilihan Hero Game (Nested Switch)
//F.S Menampilkan hasil proses fungsi nested switch

using namespace std;

int main () {
    
    //Kamus ;
    int pilih, a, b;
    
    cout << "\n" << endl;
    
    cout << "SELAMAT DATANG DI SITUS JUAL BELI BARANG ELEKTONIK ONLINE" << endl;
    
 cout << "\n" << endl;
    
 cout << " Pilih Barang Yang Akan Anda Beli " << endl;
 cout << "\t 1. Handphone" << endl;
 cout << "\t 2. Laptop" << endl;
 cout << "\n" << endl;
 cout << "Masukan Angka Pilihan:";
 cin >> pilih;
 cout << "\n" << endl;
 
 
   switch(pilih) {
    
           // Jika Mmemilih Handphone
      case 1: 
         cout << "Pilih Merk Handphone Yang Anda Inginkan:" << endl << endl;
         cout << "\t1. Samsung" << endl;
         cout << "\t2. Asus" << endl;
         cout << "\t3. Oppo" << endl;
         
         cout << "\n" << endl;
         cout << "Masukan Angka Pilihan :";
         cin >> a;
        cout << "\n" << endl;  
           
        switch(a) 
        {
                
            case 1:
               cout << "Barang Yang Anda Beli Adalah" << endl;
               cout << "Handphone Samsung" << endl;
                cout << "T E R I M A - K A S I H" << endl;
               break;
                
            case 2:
               cout << "Barang Yang Anda Beli Adalah" << endl;
               cout << "Handphone Asus" << endl;
                cout << "T E R I M A - K A S I H" << endl;
               break;
            
            case 3:
               cout << "Barang Yang Anda Beli Adalah" << endl;
               cout << "Handphone Oppo" << endl;
                cout << "T E R I M A - K A S I H" << endl;
               break;
         }
           
        break; 
           
           // Jika Memilih Laptop
        case 2: 
         cout << "Pilih Merk Laptop Yang Anda Inginkan: "<< endl;
         cout << "\t1. Acer" << endl;
         cout << "\t2. Toshiba" << endl;
         cout << "\t3. Lenovo" << endl;
         cout << "\n" << endl;
         cout << "Masukan Angka Pilihan :";
         cin >> b;
         cout << "\n" << endl;
         
           
        switch(b) 
        {
             
            case 1:
               cout << "Barang Yang Anda Beli Adalah" << endl;     
               cout << "Laptop Acer" << endl;
                cout << "T E R I M A - K A S I H" << endl;
               break;
            
            case 2:
               cout << "Barang Yang Anda Beli Adalah" << endl;
               cout << "Laptop Toshiba" << endl;
                cout << "T E R I M A - K A S I H" << endl;
               break;
            
            case 3:
               cout << "Barang Yang Anda Beli Adalah" << endl;    
               cout << "Laptop Lenovo" << endl;
                cout << "T E R I M A - K A S I H" << endl;
               break;
         }
   }
	
   return 0;
}