#include <iostream>
using namespace std;

int main () {
	int sum, i;
	int tabint[10];
	int tabNilai[10];
	cout << "isilah 10 data nilai dalam range 0-100; ";
	
	for (i = 0; i<10; i++) {
		cin >> tabNilai[i];
	}
	cout << "data input: " << endl;
	sum=0;
	for (i=0; i<10; i++) {
		cout << tabint[i] << endl;
		sum = sum + tabint[i];
		
	}
	cout << "rata-rata: ";
	cout << (float)sum/10.0 << endl;
	return 0;
	
}