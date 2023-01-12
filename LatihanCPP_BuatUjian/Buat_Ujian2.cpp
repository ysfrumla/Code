#include <bits/stdc++.h>
using namespace std;

int main(){
	float error = 100;
	float xi;
	float xu;
	float e, fxi, fxu, xr, fxr;
	int penangkal = 0;
	
	cout << "Masukan nilai xi: ";
	cin >> xi;
	cout << "Masukan nilai xu: ";
	cin >> xu;
	
	while (error > 5){
		penangkal = penangkal + 1;
		e = 2.71828;
		
		fxu = xu * (pow(e, xu)) - 3 * xu;
		fxi = xi * (pow(e, xi)) - 3 * xi;
		
		xr = xu - ((fxu * (xi - xu) / (fxi - fxu)));
		fxr = xr * (pow(e, xr)) - 3 * xr;
		error = ((xr - xi) / xr) * 100;
		
		cout << "\nIterasi ke-" << penangkal << ":" << "\nAkar = " << xr << "\nError = " << error << "%\n";
		
		if (fxi * fxr < 0){
			xu = xr;
		}
		else {
			xi = xr;
		}
		
		
	}
	
}
