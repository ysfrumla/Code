#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	double luas, keliling;
	int panjang, lebar;
	
	cout << "Masukan panjang dari persegi panjang: ";
	cin >> panjang;
	cout << "Masukan lebar dari persegi panjang: ";
	cin >> lebar;
	
	luas = panjang * lebar;
	cout << "Luas persegi panjang = " << luas << " cm." << endl;
	keliling = 2 * (panjang + lebar);
	cout << "Keliling persegi panjang = " << keliling << " cm.";
	
}
