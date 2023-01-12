#include <iostream>
using namespace std;

int main(){
	int N1, N2, N3, N4, NR;
	cout << "Masukan nilai UTS: ";
	cin >> N1;
	cout << "Masukan nilai UAS: ";
	cin >> N2;
	cout << "Masukan nilai Praktikum: ";
	cin >> N3;
	cout << "Masukan nilai Tugas: ";
	cin >> N4;
	
	NR = (N1 + N2 + N3 + N4)/4;
	if (NR < 60){
		cout << "Anda Tidak Lulus! Nilai Anda = " << NR; 
	}
	else {
		cout << "Anda Lulus! Nilai Anda = " << NR;
	}
	
}
