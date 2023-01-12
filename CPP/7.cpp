#include<iostream>
using namespace std;

int main()
{
	int count,baris,kolom,b[10][10];
	int a[10][10];
	//Tentukan nilai 100
	a[5][6]=100;
	//Tentukan nilai -1
	a[1][3]=-1;
	a[2][4]=-1;
	a[1][5]=-1;
	a[3][7]=-1;
	a[4][9]=-1;
	a[5][1]=-1;
	a[7][3]=-1;
	a[10][1]=-1;
	a[5][5]=-1;
	a[9][9]=-1;
	for(int i=1;i<=10;i++)
	{
		cout<<"Masukkan baris : ";
		cin>>baris;
		cout<<"Masukkan kolom : ";
		cin>>kolom;
		b[baris][kolom] = a[baris][kolom];
		
		if(b[baris][kolom] == a[5][6]){
			cout<<"SELAMAT TEBAKAN ANDA BENAR"<<endl;
			break;
		}
		else if(b[baris][kolom] == a[1][3] || b[baris][kolom] == a[2][4] || b[baris][kolom] == a[1][5] || b[baris][kolom] == a[3][7] || b[baris][kolom] == a[4][9] ||
		b[baris][kolom] == a[5][1] || b[baris][kolom] == a[7][3] || b[baris][kolom] == a[10][1] || b[baris][kolom] == a[5][5] || b[baris][kolom] == a[9][9]){
			cout<<"ANDA KALAH"<<endl;
			break;
		}
		else{
			if(i==10)
			{
				cout<<"";
			}
			else
			{
				cout<<"COBA POSISI YANG LAIN"<<endl;
			}	
		}
		if(i==10){
			cout<<"ANDA KALAH"<<endl;
			break;
		}
	}
}
