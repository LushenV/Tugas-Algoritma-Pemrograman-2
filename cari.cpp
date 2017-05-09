#include <iostream>

using namespace std;

int main(){
	int satu[30], dua, tiga;
	int nilai = 1;
	
cout << "|| PROGRAM CARI LETAK ANGKA ||" << endl;
			for(int i=0; i <10; i++){
				cout << "input nilai ke = " << nilai << " urutan ke = " << i << " : ";
				cin >> satu[i];
				nilai++;
			}
		cout << "\ninput nilai yang dicari : ";
		cin >> dua;
		tiga = 0;
	
	for (int i=0; i<10; i++){
		if(dua == satu[i]){
			cout << "Data yang didapatkan" <<endl;
			cout << "nilai " << dua << "ada pada urutan ke = " << i <<endl;
			tiga++;
			break;
		}
	}
	
				if (tiga == 0) {
					cout << "Data tidak dapat ditemukan" << endl;
					cout << "angka" << dua << "tidak terdapat pada array";
					
				}
	return 0;
}	