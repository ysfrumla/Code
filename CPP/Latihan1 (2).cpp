#include <iostream>
using namespace std;

int main()
{
	int r, n, i=1;
	int total = 0; 
	float ratarata;
	
	cout << "Berapa banyak bilangan?";
	cin >> n;
	while(i<=n){
		cout << "Bilangan Ke" << i << ":";
		cin >> r;
		total+=r;
		i++;
	}
	ratarata=total/n;
	cout << "Total: " << total << endl;
	cout << "Rata-rata: " << ratarata << endl;
}
	

