#include <iostream>
using namespace std;

//prototype
void prosesbaca();
void prosestukar();
void prosestampil();

//variable global
	int a, b, temp;
	
//program utama
int main() {
	prosesbaca();
	prosestukar();
	prosestampil();
	return 0;
}


void prosesbaca() {
cout << "masukkan nilai A : ";
	cin >> a;
	
cout << "masukkan nilai b : ";
	cin >> b;
	
}	
	
void prosestukar() {
	temp = b;
	b = a;
	a = temp;
	}
	
void prosestampil() {
cout << "---------------------------" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;
	}
	