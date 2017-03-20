#include <iostream>
using namespace std;

//prototype
void prosesbaca();
int prosestambah();
int proseskurang();
int proseskali ();
void prosestampil();

//variable global
	int a, b ;
	
//program utama
int main() {
	prosesbaca();
	prosestampil();
	return 0;
}

//prosesbaca
void prosesbaca() {
cout << "masukkan nilai A : ";
	cin >> a;
	
cout << "masukkan nilai b : ";
	cin >> b;
	
}

//prosestambah	

int prosestambah () {
	return a + b;
}

//proseskurang
 int proseskurang () {
	 int hasil;
	 hasil = a - b; 
	 return hasil;
 }
//proseskali
int proseskali () {
	int hkali;
	hkali = a * b;
	return hkali;
}

 
 void prosestampil() {
cout << "---------------------------" << endl;
	cout << "hasil tambah : " << prosestambah() << endl;
	cout << "hasil kurang : " << proseskurang() << endl;
	cout << "hasil kali : " << proseskali();
	}
	
	