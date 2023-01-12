#include <iostream>
using namespace std;

int main(){
	char nama[50];
	int N_UTS = 0.3, N_Praktikum = 0.2, N_UAS = 0.5;
	float N_Akhir;
	
	cout << "Masukan Nama Anda: ";
	cin >> nama;
	
	N_Akhir = (N_UTS + N_Praktikum + N_UAS)/4;
	if (N_Akhir >= 60.0){
		cout << "Selamat! Anda dinyatakan lulus. ";
	}
	else {
		cout << "Maaf! Anda dinyatakan tidak lulus. ";
	}
}


