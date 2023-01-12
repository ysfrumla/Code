#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int v_kubus;
	double l_kubus;
	int panjang_sisi;
	int banyak_bidang_sisi_kubus = 6;
	
	cout << "Masukan panjang sisi kubus: ";
	cin >> panjang_sisi;
	
	v_kubus = panjang_sisi * panjang_sisi * panjang_sisi;
	cout << "Volume Kubus = " << v_kubus << " cm^3." << endl;
	
	l_kubus = banyak_bidang_sisi_kubus * (panjang_sisi * panjang_sisi);
	cout << "Luas kubus = " << l_kubus << " cm^2";
	
}
