#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	struct belanja{
		int noBrg;
	};
	struct bayar{
		int hargaBrg;
		char jenisBrg[20];
		int bnykBrg;
		belanja biaya;
	};
	
	bayar BELANJA[20];
	int n;
	cout << "Masukan Jumlah barang yang mau Anda beli: "; cin >> n;
	for (int i=0; i<=n; i++)
	{
		cout << "Masukan barang ke-" << i+1 << " yang dibeli: ";
		cin >> BELANJA[i].jenisBrg;
		cout << "Anda membeli " << BELANJA[i].jenisBrg << ", berapa banyak? ";
		cin >> BELANJA[i].bnykBrg;
		cout << "Harga Rp. :";
		cin >> BELANJA[i].hargaBrg;
	}
	
	BELANJA[i]= BELANJA[i].bnykBrg*BELANJA[i].hargaBrg;
	cout << "Total = " << BELANJA[i].biaya;
}
