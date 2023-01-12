#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main(){
	int jari_jari;
	double luas, keliling;
	int diameter;
	float phi = 3.14;
	
	cout << "Masukan diameter lingkaran: ";
	cin >> diameter;
	
	jari_jari = diameter/2;
	cout << "Jari-jari lingkaran adalah " << jari_jari << " cm." << endl;
	
	keliling = phi * 2 * jari_jari;
	cout << "Keliling lingkaran adalah " << keliling << " cm." << endl;
	
	luas = phi * (jari_jari^2);
	cout << "Luas lingkaran adalah " << luas << " cm.";
	
}
