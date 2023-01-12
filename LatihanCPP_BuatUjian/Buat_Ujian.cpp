#include <bits/stdc++.h>
using namespace std;

float persamaan(float x){
	float e = 2.71828;
	return (0.5 * x * (pow(e,pow(x,0.5)))) - 2;
}
int main(){
	float ea = 100;
	float xi = 1;
	float xu = 2;
	float fxi, fxu, xr, fxr;
	float tampung;
	
	xr = (xi + xu) / 2;
	tampung = xr;
	int penangkal = 0;
	
	while (ea > 4){
		penangkal += 1;
		cout << "\nNilai xi: " << xi;
		cout << "\nNilai xu: " << xu;
		fxi = persamaan(xi);
		fxu = persamaan(xu);
		cout << "\nNilai fxi: " << fxi;
		cout << "\nNilai fxu: " << fxu;
		xr = (xi + xu) / 2;
		fxr = persamaan(xr);
		
		if (fxi * fxr > 0){
			xi = xr;
		}
		else {
			xu = xr;
		}
		
		if (penangkal > 1){
			ea = ((xr - tampung) / xr) * 100;
			if (ea < 0){
				ea = -1 * ea;
			}
			tampung = xr;
			cout << "\nIterasi " << penangkal << "\nAkar = " << xr << "\nError: " << ea << "%" << endl << endl;
		}
		else {
			cout << "\nIterasi " << penangkal << "\nAkar = " << xr << endl << endl;
		}
	}
}
