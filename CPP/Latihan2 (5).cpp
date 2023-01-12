#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int M[10][10];
int i, j, x, y;
cout << "Masukan Dimensi Matriks : " << endl;;
cin >> x;
cin >> y;

cout << "Masukan nilai Matriks M: " << endl;
for (i = 1; i <= x; i++)
{
	for (j = 1; j <= y; j++)
	{
		cin >> M[i][j];
	}
cout << endl;
}

cout << "Matriks M: " << endl;
for (i = 1; i <= x; i++)
{
	for (j = 1; j <= y; j++)
	{
		cout << M[i][j] << " ";
	}
}

cout << "Hasil Tranpose dari Matriks M: " << endl;
for (i = 1; i <= x; i++)
{
	for (j = 1; j <= y; j++)
	{
		cout << M[j][i] << " ";
	}
cout << endl;
}
}

