#include <iostream>

using namespace std;

int main(){
int n,bunga,t,u; // interger dari sebuah bilangan bulat yang di masukan

cout<<"+++++++Aplikasi Menghitung Bunga Shoppe Pinjam++++++++"<<endl<<"Masukan Pinjaman Anda : "; // cout menampilkan pesan dari masukan pijaman
cin>>n; // mengeluarkan dalam memasukan input
cout<<"Berapa Bulan :"; // menampilkan pesan berapa bulan pinjaman
cin>>t; //mengeluarkan fungsi input berdasarkan bulan

	if (n<1000000) // logika dari if jika n lebih kecil dari bilangan tersebut maka
	{
		cout<<"Bunga Anda sebesar Rp. "<<(n/10000*t)<<endl; // pesan yang di tampilkan dari bunga akan di kalkulasi kan berdasarkan inputan
		cout << "Cicilan: Rp." <<(n/t)+(n/10000*t) << endl; // pesan yang di tampilkan dari Cicilan akan di kalkulasi kan berdasarkan inputan
		cout << "Jika dilunasi: Rp." <<((n/t)+(n/10000*t))*t << endl; // pesan yang ditampilkan maka jumlah ketika di lunasi (cicilan + bunga perbulan
	else if (1000000<n<10000000) // jika bilangan tersebut lebih kecil dari n maka lbih kecil dari bilangan selanjutnya
	{
		cout<<"Bunga Anda sebesar Rp. "<<(n/1000*t)<<endl; // menampilkan hasil kalkulasi yang di tampilkan dari fungsi cout
		cout << "Cicilan: Rp." <<(n/t)+(n/1000*t) << endl; // diantaranya bunga, cicilan, jika di lunasi
		cout << "Jika dilunasi: Rp." <<((n/t)+(n/1000*t))*t << endl; // pesan yang ditampilkan maka jumlah ketika di lunasi (cicilan + bunga perbulan
	}
	else if (10000000<n<50000000) // jika bilangan tersebut lebih kecil dari n maka lbih kecil dari bilangan selanjutnya
	{
		cout<<"Bunga Anda sebesar Rp. "<<(n/1000*5*t)<<endl; // pesan yang di tampilkan dari bunga akan di kalkulasi kan berdasarkan inputan
		cout << "Cicilan: Rp." <<(n/t)+(n/1000*5*t) << endl; // pesan yang di tampilkan dari Cicilan akan di kalkulasi kan berdasarkan inputan
		cout << "Jika dilunasi: Rp." <<((n/t)+(n/1000*5*t))*t << endl; // pesan yang ditampilkan maka jumlah ketika di lunasi (cicilan + bunga perbulan
	}
	else if (n>50000000) // jika n lebih besar dari pada bilangan tersebut
	{
		cout<<"Bunga Anda sebesar Rp. "<<(n/100*t)<<endl; // maka pesan yang di tampilkan dari bunga akan di kalkulasi kan berdasarkan inputan
		cout << "Cicilan: Rp." <<(n/t)+(n/100*t) << endl; // pesan yang di tampilkan dari Cicilan akan di kalkulasi kan berdasarkan inputan
		cout << "Jika dilunasi: Rp." <<((n/t)+(n/100*t))*t << endl; // pesan yang ditampilkan maka jumlah ketika di lunasi (cicilan + bunga perbulan
	}
	else
		cout<<"Silahkan menghubungi customer service Shoppe"<<endl; // lalu jika terjadi masalah maka cout akan menampilkan  "Silahkan menghubungi customer service Shoppe"
system("pause"); // lalu program akan berhenti
return 0; // selesai
}
