#include <iostream>
using namespace std;

int main(){
	int a, b, c, MAX;
	cout << "Masukan Nilai a: ";
	cin >> a;
	cout << "Masukan Nilai b: ";
	cin >> b;
	cout << "Masukan Nilai c: ";
	cin >> c;
	if (a > b){
		if (a > c){
			MAX = a;
		}
		else {
			MAX = c;
		}
	}
	else {
		if (b > c){
			MAX = b;
		}
		else {
			MAX = c;
		}
	}
	
	cout << "Bilangan Terbesar adalah: " << MAX;
}
