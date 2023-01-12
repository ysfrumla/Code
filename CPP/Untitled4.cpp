#include <iostream>
#include <math.h>
using namespace std;

float bbm1(int a, int b){
	float Bbm = a/b;
	return (Bbm);
}
float bbm2(int c, int d){
	float BBM = c/d;
	return (BBM);
}

int main(){
	int bensin = 12;
	int jarak_tempuh1 = 200;
	int jarak_tempuh2 = 500;
	float total;
	int pilih;
	
	cout << "Anda mau ke mana? " << endl;
	cout << "1. Dalam Kota" << endl;
	cout << "2. Keluar Kota" << endl;
	cout << "(ketikan angka yang anda pilih): "; 
	cin >> pilih;
	if(pilih == 1){
		total = bbm1(jarak_tempuh1, bensin);
	}
	else if(pilih == 2){
		total = bbm2(jarak_tempuh2, bensin);
	}
	
	cout << "Efisiensi BBM (km/liter) adalah " << total << "km/liter.";
	
}
