#include <iostream>
using namespace std;

int main(){
	char nama[20], tipeKamar[10];
	int jawab, lamaMenginap, hargaSewa;
	int SINGLE = 200000;
	int DOUBLE = 350000;
	int KELUARGA = 450000;
	int VIP = 500000;
	int BUNGALOW = 750000;
	float ppn = 0.15;
	
	cout << "Siapa nama Anda? ";
	cin >> nama;
	cout << "Anda ingin memilih tipe kamar yang mana? " << endl;
	cout << "1. SINGLE." << endl;
	cout << "2. DOUBLE." << endl;
	cout << "3. KELUARGA." << endl;
	cout << "4. VIP." << endl;
	cout << "5. BUNGALOW." << endl;
	cout << "Silakan ketikan Tipe Kamar yang Anda inginkan: ";
	cin >> tipeKamar;

	cout << "Berapa hari Anda ingin menginap? ";
	cin >> lamaMenginap;	
	
	if (hargaSewa = (SINGLE*lamaMenginap) + ppn){
		cout << "Anda memilih Tipe Kamar " << tipeKamar << " dengan total biaya pembayaram adalah Rp. " << hargaSewa << endl;
	}
	else {
		if (hargaSewa = (DOUBLE*lamaMenginap) + ppn){
			cout << "Anda memilih Tipe Kamar " << tipeKamar << " dengan total biaya pembayaram adalah Rp. " << hargaSewa << endl;
		}
		else {
			if (hargaSewa = (KELUARGA*lamaMenginap) + ppn){
				cout << "Anda memilih Tipe Kamar " << tipeKamar << " dengan total biaya pembayaram adalah Rp. " << hargaSewa << endl;
			}
			else {
				if (hargaSewa = (VIP*lamaMenginap) + ppn){
					cout << "Anda memilih Tipe Kamar " << tipeKamar << " dengan total biaya pembayaram adalah Rp. " << hargaSewa << endl;
				}
				else {
					if (hargaSewa = (BUNGALOW*lamaMenginap) + ppn){
						cout << "Anda memilih Tipe Kamar " << tipeKamar << " dengan total biaya pembayaram adalah Rp. " << hargaSewa << endl;
					}
				}
			}
		}
	}
	
	cout << endl;
	
	cout << "Ini Slip Bukti Pembayaran Anda: " << endl;
	cout << "Nama: " << nama << "." << endl;
	cout << "Total biaya pembayaran: Rp. " << hargaSewa<< "." << endl;
	cout << "Anda menyewa kamar dengan tipe " << tipeKamar << " selama " << lamaMenginap << " hari.";
}

