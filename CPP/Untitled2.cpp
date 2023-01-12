#include <iostream>
using namespace std;

int TOTAL(int a, int b, int c, float d){
	int Total_Gaji = ((a * (b + c)) + d);
	return(Total_Gaji);
}

int main(){
	int gaji = 400000;
	int komisi = 100000;
	float plus = 0.01;
	
	char nama[15];
	int real_estate;
	int total;
	int total_gaji;
	
	cout << "Masukan nama Anda: ";
	cin >> nama;
	cout << "Berapa banyak real estate yang dijual Anda? ";
	cin >> real_estate;
	
	total_gaji = TOTAL(real_estate, gaji, komisi, plus);
	cout << "Nama: " << nama << endl;
	cout << "Banyak real estate yang dijual: " << real_estate << endl;
	cout << "Total gaji penjualan: Rp. " << total_gaji;
}
