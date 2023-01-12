#include <iostream>
using namespace std;

int main(){
	char nama[15];
	int lembur, absen, bonus;
	
	cout << "Masukan Nama Anda: ";
	cin >> nama;
	cout << "Berapa lama Anda lembur? ";
	cin >> lembur;
	cout << "Berapa kali Anda Absen? ";
	cin >> absen;
	if (lembur - (2*absen/3 > 0)){
		bonus = 100000;
	}
	else {
		bonus = 0;
	}
	
	cout << "Bonus untuk " << nama << " adalah Rp. " << bonus;
}

