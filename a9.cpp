#include <iostream>
// I.S Program Operator Boolean
// F.S Menampilkan Operator Logika / Boolean
 
using namespace std;

int main() { 
    
    //Kamus
	int a = 21; // Konstanta
	int b = 10;  // Konstanta
	int c;
    
	if(a && b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

	if(a != b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

	if(a || b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
    
    return 0;
}