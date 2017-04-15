#include <iostream>
using namespace std;

typedef struct {

	string hari;
	string bulan;
	string tahun;
} tanggal;

typedef struct {

	int jam;
	int menit;
	int detik;
} jam;

typedef struct {

	int noKA;
	string KotaAsalKA;
	jam jamBerangkat;
	tanggal tanggalBerangkat;
	string kotatujuanKA;
	jam jamTiba;
	tanggal tanggalTiba;
} jadwalKA;

int main () {
	
jadwalKA jadwalKeretaApi;

jadwalKeretaApi.noKA = 1;
jadwalKeretaApi.KotaAsalKA = "JAKARTA";
jadwalKeretaApi.jamBerangkat.jam = 10;
jadwalKeretaApi.jamBerangkat.menit = 20;
jadwalKeretaApi.jamBerangkat.detik = 05;
jadwalKeretaApi.tanggalBerangkat.hari = "Senin";
jadwalKeretaApi.tanggalBerangkat.bulan = "Januari";
jadwalKeretaApi.tanggalBerangkat.tahun = "2017";
jadwalKeretaApi.kotatujuanKA = "BANDUNG";
jadwalKeretaApi.jamTiba.jam = 13;
jadwalKeretaApi.jamTiba.menit = 15;
jadwalKeretaApi.jamTiba.detik = 02;
jadwalKeretaApi.tanggalTiba.hari = "Senin";
jadwalKeretaApi.tanggalTiba.bulan = "Januari";
jadwalKeretaApi.tanggalTiba.tahun = "2017";

cout << "----------------------------------------------" << endl;
cout <<  " ---****JADWAL KEBERANGKATAN KERTA API****---" << endl;
cout << "----------------------------------------------" << endl;


cout <<" NOMER KEBERANGKATAN KERETA API = " << jadwalKeretaApi.noKA << endl;
cout << "----------------------------------------------" << endl;
cout <<" WAKTU BERANGKAT DARI KOTA ASAL = " << jadwalKeretaApi.KotaAsalKA << endl;
cout <<" TIME = " << jadwalKeretaApi.jamBerangkat.jam << ":" 
	 << jadwalKeretaApi.jamBerangkat.menit << ":"
	 << jadwalKeretaApi.jamBerangkat.detik << endl;
cout <<" DATE = " << jadwalKeretaApi.tanggalBerangkat.hari << ", "
	 << jadwalKeretaApi.tanggalBerangkat.bulan << " "
	 << jadwalKeretaApi.tanggalBerangkat.tahun << endl;
cout << "----------------------------------------------" << endl;
cout <<" WAKTU TIBA DI KOTA TUJUAN = " << jadwalKeretaApi.kotatujuanKA << endl;
cout <<" TIME = " << jadwalKeretaApi.jamTiba.jam << ":" 
	 << jadwalKeretaApi.jamTiba.menit << ":"
	 << jadwalKeretaApi.jamTiba.detik << endl;
cout <<" DATE = " << jadwalKeretaApi.tanggalTiba.hari << ", "
	 << jadwalKeretaApi.tanggalTiba.bulan << " "
	 << jadwalKeretaApi.tanggalTiba.tahun  << endl;
cout << "----------------------------------------------" << endl;



	return 0;
}