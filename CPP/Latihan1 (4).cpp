#include <iostream>
using namespace std;
int main()
{
      int  n;
      
      cout << "Masukkan Nilai Miring Segitiga: ";
      cin >> n;
      for (int i=1; i<=n; i++){
      	for (int j=1; j<i; j++){
      		cout << " ";
		  }
		  for (int k=n; k>=i; k--){
		  	cout << "*";
		  }
		  cout << endl;
	  }
}


