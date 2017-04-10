#include<iostream>

using namespace std;

int main () {
	char karakter [10];
	int i;
	int banyaknya =0;
	
	for(int i=0; i< 10; i++) {
		
		cin >> karakter[i];
		
	if (karakter[i] == 'a' || karakter[i] == 'A' ) {
		banyaknya++;
	}
	}
	
	
	
	for (int i = 0; i < 10; i++) {
		cout << karakter [i];
		
	}
cout << endl << "Jumlah karakter huruf a adalah: " << banyaknya ; 	
}