#include <iostream>

using namespace std;

int main(){
int n,bunga,t,u; 

cout<<"+++++++Aplikasi Menghitung Bunga Shoppe Pinjam++++++++"<<endl<<"Masukan Pinjaman Anda : "; 
cin>>n;
cout<<"Berapa Bulan :"; 
cin>>t; 

	if (n<1000000) 
	{
		cout<<"Bunga Anda sebesar Rp. "<<(n/10000*t)<<endl; 
		cout << "Cicilan: Rp." <<(n/t)+(n/10000*t) << endl; 
		cout << "Jika dilunasi: Rp." <<((n/t)+(n/10000*t))*t << endl; 
	}
	else if (1000000<n<10000000) 
	{
		cout<<"Bunga Anda sebesar Rp. "<<(n/1000*t)<<endl; 
		cout << "Cicilan: Rp." <<(n/t)+(n/1000*t) << endl;
		cout << "Jika dilunasi: Rp." <<((n/t)+(n/1000*t))*t << endl; 
	}
	else if (10000000<n<50000000) 
	{
		cout<<"Bunga Anda sebesar Rp. "<<(n/1000*5*t)<<endl; 
		cout << "Cicilan: Rp." <<(n/t)+(n/1000*5*t) << endl; 
		cout << "Jika dilunasi: Rp." <<((n/t)+(n/1000*5*t))*t << endl; 
	}
	else if (n>50000000) 
	{
		cout<<"Bunga Anda sebesar Rp. "<<(n/100*t)<<endl; 
		cout << "Cicilan: Rp." <<(n/t)+(n/100*t) << endl; 
		cout << "Jika dilunasi: Rp." <<((n/t)+(n/100*t))*t << endl;
	}
	else
		cout<<"Silahkan menghubungi customer service Shoppe"<<endl; 
system("pause"); 
return 0;
}
