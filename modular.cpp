#include <iostream>
#include <string>
// {i.s} Inisialisasi Fungsi
// {f.s} Pemanggilan Fungsi
using namespace std;

 void universitas() {
  cout << "==== SELAMAT DATANG MAHASISWA BARU ====" << endl;
     cout << endl;

}

 void salam(string nama) {
  cout << "=--= HAI " << nama << endl;
}

int main(){

  universitas(); // pemanggilan fungsi


  salam("CHRISPIANUS =--="); // pemanggilan fungsi
    cout << endl;

  cout << "------SELAMAT BERGABUNG DI STT BANDUNG------" << endl;

  return 0;
}
