#include <iostream> // Library Standar Yang Digunakan Untuk Input Dan Output
using namespace std;

//I.S Program Memasukan Data
//F.S Program Menampilkan Data Sesuai Operasi Logika

//Prototype Fungsi 
void quick(int arr[], int kiri, int kanan);

int main () { 
    
    int N;
    cout << "Masukan jumlah elemen Array : ";
    cin >> N;
    
    int A[N];
    
    //Pengulangan sebuah proses sesuai jumlah elemen array yang di input diatas
    
    for (int i = N; i > 0; i--) {
        
        //Memasukan nilai ke array sebanyak pengulangan di atas
        cout << "Masukan Nilai Array A ke " << i << " : ";
        cin >> A [i];
    }

    //Pemangilan Fungsi Pengelompokan
    quick(A,1,10); //Definisi variabel ex. i(1), j(10)
    cout << endl;
    
    //Pengulangan 
    for (int j = 1; j <= N; j++) {
        cout << A [j] << endl;
    }
 return 0;   
}

void quick(int arr[], int kiri, int kanan) {
    
    //Kamus
    int i = kiri, j = kanan; 
    int tmp;
    int pivot = arr[(kiri + kanan) / 2];
    
    //Partision (Penglompokan)
    while (i <= j) {
        
        //Statment
        
        //Jika sisi i kurang dari variabel pivot maka increment tambah nilai i
        while (arr[i] < pivot)
            i++;
        //Jika sisi J lebih dari variabel pivot maka increment kurang nilai j
        while (arr[j] > pivot)
            j--;
        
        //Jika Nilai i kurang dari sama dengan Nilai j
        if (i <= j) {
            
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++; j--;
        }
    };
    
    //Rekrusi
    
    if (kiri < j)
        quick(arr,kiri,j);
    
    if (i < kanan)
        quick(arr,i,kanan);
        
}