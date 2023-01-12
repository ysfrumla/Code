#include <iostream>
#include <math.h>
using namespace std;

int totalBiaya(int a, int b, float c){
	int jumlah = ((a * (b))/100 * (c));
	return(jumlah);
}

int main(){
	float asuransi = 3.5;
	string jenis_ladang;
	int luas_ladang;
	int tanggungan;
	
	int total_biayaTanggungan;
	
	cout << "Apa jenis ladang Anda? ";
	cin >> jenis_ladang;
	
	cout << "Berapa luas ladang Anda? ";
	cin >> luas_ladang;
	
	cout << "Berapa tanggungan Anda? ";
	cin >> tanggungan;
	
	total_biayaTanggungan = totalBiaya(luas_ladang, tanggungan, asuransi);
	
	cout << "Jenis ladang: Ladang " << jenis_ladang << "."<< endl;
	cout << "Luas ladang: " << luas_ladang << " hektar." << endl;
	cout << "Total biaya tanggungan asuransi Anda sebesar Rp. " << total_biayaTanggungan;
	
}
