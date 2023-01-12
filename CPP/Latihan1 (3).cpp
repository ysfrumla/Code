#include <iostream>
using namespace std;

int main(){
	int n, f, f1, f2;
	f1=0;
	f2=1;
	f=f1+f2;
	
	
	cout << "Masukkan Batas Nilai Deret Bilangan Fibonacci: ";
	cin >> n;
	cout << "Deret Fibonacci: ";
	for (int i=1; i<=n; i++){
		f=f1+f2; f2=f1; f1=f;
		cout << f;
	}
}

