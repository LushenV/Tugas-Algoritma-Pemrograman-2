#include <iostream>
using namespace std;

int main() {
	string nama[3];
	
	for (int i=0;i<3;i++){
	cin >> nama[i];
	}
	
	
	cout << nama[0] << "-" << nama[1] << endl;
	cout << nama[1] << "-" << nama[2] << endl;
	cout << nama[1] << "-" << nama[1] << endl;
}


