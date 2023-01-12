#include <iostream>
using namespace std;

int biayaPercakapan(int N){
	int d = 5, bayar;
	bayar = ((150/d)*N);
}
	

int main(){
	int jAw, mAw, dAw, jAk, mAk, dAk, n;
	int j = 3600, m = 60;
	int totalBiaya;
	
	cout << "Masukkan Jam awal; " << endl;
	cin >> jAw;
	cout << "Masukkan Menit awal: " << endl;
	cin >> mAw;
	cout << "Masukkan Detik awal: " << endl;
	cin >> dAw;
	cout << "Masukkan Jam akhir: " << endl;
	cin >> jAk;
	cout << "Masukkan Menit akhir: " << endl;
	cin >> mAk;
	cout << "Masukkan Detik akhir: " << endl;
	cin >> dAk;
	
	n = ((jAk*j) + (mAk*m) + 5) - ((jAw*j) + (mAw*m) + 0);
	
	totalBiaya = biayaPercakapan(n);
	cout << "Total Biaya Percakapan: Rp. " << totalBiaya << ".";
}

