#include<iostream>
using namespace std;
void persegipanjang()
{
double p, l;
cout<<"Luas Persegi Panjang"<<endl;
cout<<"Masukkan panjang <cm>: ";
cin>>p;
cout<<"Masukkan lebar <cm>: ";
cin>>l;
cout<<"Luas Persegi Panjang: "<<p*l<<endl;
}

void volume_kerucut()
{
double r, t;
cout<<"Volume kerucut"<<endl;
cout<<"Masukkan jari2 <cm>: ";
cin>>r;
cout<<"Masukkan t <cm>: ";
cin>>t;
cout<<"Volume kerucut: "<<3.14*r*r*t/3<<endl;
}

void Lingkaran()
{
double r;
cout<<"Luas Lingkaran"<<endl;
cout<<"Masukkan nilai r <cm>= ";
cin>>r;
cout<<"Luas Lingkaran <cm>= "<<3.14*r*r<<endl;
}

int main()
{
persegipanjang();
volume_kerucut();
Lingkaran();

return 0;
}