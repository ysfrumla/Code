#include <iostream>
using namespace std;

int main (){
	int gaji;
	char golongan;
	
	cout << "Gaji: " << endl;
	cout << "1. 100-500." << endl;
	cout << "2. 501-1000." << endl;
	cout << "3. 1001-3000." << endl;
	cout << "4. 3001-5000." << endl;
	cout << "5. 5001-10000." << endl;
	cout << "Masukkan rentang nilai gaji anda (1/2/3/4/5): ";
	cin >> gaji;
	if (gaji==1){
		cout << "Anda Golongan E!" << endl;
	}
	if (gaji==2){
		cout << "Anda Golongan D!" << endl;
	}
	if (gaji==3){
		cout << "Anda Golongan C!" << endl;
	}
	if (gaji==4){
		cout << "Anda Golongan B!" << endl;
	}
	if (gaji==5){
		cout << "Anda Golongan A!" << endl;
	}
}

