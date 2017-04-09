#include <iostream>
#include <conio.h>

using namespace std;




//prototype//
void input();
void pilihanA();
void pilihanB();

//variable global//
int angka, jumlah, max, min, pilihan;


main () {

	while (pilihan != 3) {
		cout << "================================\n";
		cout << "MENU\n";
		cout << " 1. Cari nilai terkecil\n";
		cout << " 2. Cari nilai terbesar\n";
		cout << " 3. Keluar\n";
		cout << "================================\n";
		cout << "Pilihan Anda : ";
		cin >> pilihan;
	
	
	if (pilihan == 1) {
		pilihanA();
	
	} else if (pilihan == 2) {
		pilihanB();
	}

}
}


void pilihanA() {
	int angka, jumlah, max, min;
     
       cout << "1. Mencari nilai terkecil. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;
       cout << endl;
    
       for (int i = 1; i <= jumlah; i++) {
     
       cout << "Masukkan Angka       : "; cin >> angka;
   
       if ( i == 1 ) {
		   jumlah;
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
           }
    
       cout << endl;
       cout << "Nilai terkecil           : " <<  min << endl;
	   cout << "jumlah : "	<< jumlah  << endl;
     
    
    }
	   
void pilihanB() {
		int angka, jumlah, max, min;
	cout << "2. Mencari nilai terbesar. (jumlah angka ditentukan)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka: "; cin >> jumlah;
       cout << endl;
    
       for (int i = 1; i <= jumlah; i++) {
		
       cout << "Masukkan Angka       : "; cin >> angka;
			
       if ( i == 1 ) {
				jumlah;
             min = angka;
             max = angka;
            }
            else if ( max < angka ) {
               max = angka;
            }
           }
    
       cout << endl;
       cout << "Nilai terbesar           : " <<  max << endl;
	   cout << "jumlah : "	<< jumlah  << endl;
     
}

//nanda aldila TIF RM16A//