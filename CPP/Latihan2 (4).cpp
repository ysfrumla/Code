#include <iostream>
#include <string.h>
using namespace std;

int CariAngka(){
	int n, i, j, banyak;
	cout << "Bilangan: 10  2  4  4  9  7  4" << endl;
	cout << "Masukan bilangan yang akan dihitung: ";
	cin >> i;
	cout << "  ";
	
	banyak=0;
	int bilangan[] = {10, 2, 4, 4, 9, 7, 4};
	int banyakBilangan = sizeof(bilangan)/sizeof(*bilangan);
	for (j=0; j<banyakBilangan; j++)
	{
		if (bilangan[j] == i)
		{
			banyak++;
		}
	}
	
	cout << "Banyaknya Bilangan " << i << ": " << banyak;
}

int main(){
	CariAngka();
}

