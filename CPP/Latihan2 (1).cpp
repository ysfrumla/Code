#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string kata1 = "algoritma";
	string kata2 = "lanjut";
	cout << "Menghapus karakter 'a' dan 'u' pada " << kata1+" "+kata2 << "." << endl;

	kata1.erase(0,1);
	kata1.erase(7,1);
	kata2.erase(1,1);
	kata2.erase(3,1);

	cout << "Hasil erase algoritma lanjut: " << kata1+" "+kata2;
}

