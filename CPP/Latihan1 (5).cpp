#include <iostream>
using namespace std;

int main ()
{
	int n, i;
	int bilanganprima = true;
	
	cout << "Masukkan satu bilangan bulat: ";
	cin >> n;
	if (n==0 && n==1){
		bilanganprima = false;
	}
	else {
		for (i=2; i<=n/2; i++){
			if (n % i==0){
			bilanganprima = false;
			break;
			}
		}
	}
	if (bilanganprima)
		cout << n << " termasuk bilangan prima.";
	else
		cout << n << " bukan bilangan prima.";
}
