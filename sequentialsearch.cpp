#include <iostream>
using namespace std;

int main (){
    int mydata [10] = {2, 5, 1, 7, 9, 6, 25, 10, 19, 96};
    int  caridata, i,flag = 0;
    
    cout << " PENCARIAN DATA DENGAN METODE SEQUENTIAL SEARCH " << endl;
    cout << " ============================================== " << endl;
    cout << " Data : 2, 5, 1, 7, 9, 6, 25, 10, 19, 96 ";
    cout << endl;
    cout << endl;
    cout << " Masukan Data Yang Ingin Anda Cari : ";
    cin >> caridata;
    
    // cari dengan metode SEQUENTIAL SEARCH
    for (i = 0; i < 10; i++) 
    {
        if (mydata[i] == caridata)
        {
            flag = 1;
            break;
        }
    }
    
    // output 
    if (flag == 1)
        cout << " Data Ditemukan Pada indeks Ke-" << i << endl;
    else 
        cout << " Data Tidak Ditemukan" << endl;
    
    return 0;
}
    