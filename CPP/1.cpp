#include <iostream>
using namespace std;

int main(){
	int hari, upah, bayar;
	cout << "Ketikan lama (hari) kerja dalam seminggu: ";
	cin >> hari;
	cout << "Ketikan upah kerja dalam sehari: ";
	cin >> upah;
	
	bayar = upah*hari;
	cout << "Output upah pegawai dalam seminggu: " << bayar;
}
