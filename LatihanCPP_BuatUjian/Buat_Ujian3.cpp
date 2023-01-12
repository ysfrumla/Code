#include <bits/stdc++.h>
using namespace std;

float e = 2.71828;

float persamaan(float x){
	return (e * pow(e, 1 + sqrt(x)) - (8 - x));
}

float persamaanTurunan(float x){
	return ((e, pow(e, sqrt(x) + 1) / (2, sqrt(x) + 1)));
}

void NewtonRaphson(float xi){
	float xi_plus_i;
	//nilai awal error dari 0,01 persen diubah menjadi 0.0001 
	float error = 0.0001;
	int penangkal = 1; // counter
	
	float fx = persamaan(xi);
	float fxi = persamaanTurunan(xi);
	xi_plus_i = xi - (fx / fxi);
	cout << endl;
	
	cout << "Newton Raphson:\n";
	cout << "Untuk iterasi ke-" << penangkal << "\nfxi + 1 = " << xi_plus_i << "\nError = " << abs(error) << endl;
	cout << "Nilai x1 = " << xi << "\nNilai fx = " << fx << "\nNilai fxi = " << fxi << endl;
	while (error >  4){
		penangkal++;
		
		xi = xi_plus_i;
		float fx = persamaan(xi);
		float fxi = persamaanTurunan(xi);
		
		xi_plus_i = xi - (fx / fxi);
		error = ((xi_plus_i - xi) / xi_plus_i)*100;
		cout << "Nilai x1 = " << xi << "\nNilai fx = " << fx << "\nNilai fxi = " << fxi << endl;
	}
}
	
int main(){
	NewtonRaphson(3);
}
