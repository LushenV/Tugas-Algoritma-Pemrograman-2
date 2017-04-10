#include <iostream>
using namespace std;


typedef struct {
	string hari;
	string bulan;
	string tahun;
} tanggal;

typedef struct {
	int jam ;
	int menit;
	int detik;
} jam;

typedef struct {
	int NoKa;
	string kotaasal;
	jam jamberangkat;
	tanggal tanggalberangkat;
	string kotatujuanka;
	jam jamtiba;
	tanggal tanggaltiba;
} Jadwal_Ka;

int main () {
	Jadwal_Ka jadwalkeretaapi;
	jadwalkeretaapi.NoKa = 1;
	jadwalkeretaapi.kotaasal = "Bandung" ;
	jadwalkeretaapi.jamberangkat.jam = 00;
	jadwalkeretaapi.jamberangkat.menit = 00;
	jadwalkeretaapi.jamberangkat.detik = 01;
	jadwalkeretaapi.tanggalberangkat.hari = "senin/ 09";
	jadwalkeretaapi.tanggalberangkat.bulan = "Januari";
	jadwalkeretaapi.tanggalberangkat.tahun = "2017";
	jadwalkeretaapi.kotatujuanka = "Bandung";
	jadwalkeretaapi.tanggaltiba.hari = "senin/ 09";
	jadwalkeretaapi.tanggaltiba.bulan = "Januari";
	jadwalkeretaapi.tanggaltiba.tahun = "2017";
	jadwalkeretaapi.jamtiba.jam = 00;
	jadwalkeretaapi.jamtiba.menit = 10;
	jadwalkeretaapi.jamtiba.detik = 00;
	
	cout << "------------------------+-----------------------------------" << endl;
	cout << "Nomor KA 		-> 	|" << jadwalkeretaapi.NoKa << endl;
	cout << "Kota Asal 		-> 	|" << jadwalkeretaapi.kotaasal << endl;
	cout << "Jam Berangkat 		-> 	|" << jadwalkeretaapi.jamberangkat.jam << " : " << jadwalkeretaapi.jamberangkat.menit << " : " << jadwalkeretaapi.jamberangkat.detik << endl;
	cout << "Tanggal Berangkat 	-> 	|" << jadwalkeretaapi.tanggalberangkat.hari << " - " << jadwalkeretaapi.tanggalberangkat.bulan << " - " <<jadwalkeretaapi.tanggalberangkat.tahun << endl;
	cout << "Kota Tujuan 		-> 	|" << jadwalkeretaapi.kotatujuanka << endl;
	cout << "Tanggal Tiba 		-> 	|" << jadwalkeretaapi.tanggaltiba.hari << " - " << jadwalkeretaapi.tanggaltiba.bulan << " - " <<jadwalkeretaapi.tanggaltiba.tahun << endl;
	cout << "Jam Tiba 		-> 	|" << jadwalkeretaapi.jamtiba.jam << " : " << jadwalkeretaapi.jamtiba.menit << " : " << jadwalkeretaapi.jamtiba.detik << endl;
	cout << "------------------------+----------------------------------";
}