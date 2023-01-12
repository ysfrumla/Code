#include <iostream>
#include <math.h>
using namespace std;

//function bangun datar
int diameter(int a, int b){
	int  d = (a * b);
	return(d);
}
int keliling(float c, int d){
	int k = (c * d);
	return(k);
}
double luas(float e, int f){
	double l = (e * f * f);
	return (l);
}



float besar(float j, int k, int o){
	float bs = (j * k * o);
	return(bs);
}
int putaran(int l, int m, int n){
	int pt = (l + m + n);
	return(pt);
}



float LUAS(int r, int s){
	float Luas = (r * s);
	return(Luas);
}
double KELILING(int t, int u, int v){
	double Keliling = (2 * (u + v));
	return(Keliling);
}
float DIAGONAL(int w, int x){
	float Diagonal = sqrt((float)(w^2) + (float)(x^2));
	return(Diagonal);
}


//function bangun ruang
int V_KUBUS(int a){
	int volume_kubus = (a^3);
	return(volume_kubus);
}
float L_KUBUS(float b){
	float luas_kubus = (6 * (b * b));
	return(luas_kubus);
}
int K_KUBUS(int c){
	int keliling_kubus = (12 * c);
	return(keliling_kubus);
}
float L2_KUBUS(float d){
	float luas_salah_satu_sisi = (d * d);
	return(luas_salah_satu_sisi);
}



int main(){
	
	float phi = 3.14;
	struct lingkaran{
		int r;
		int dt;
		float kl;
		double ls;
	};
	
	lingkaran ll;
	cout << "Masukan jari-jari lingkaran: ";
	cin >> ll.r;
	
	ll.dt = diameter(2, ll.r);
	cout << "Diameter lingkaran adalah: " << ll.dt << " cm." << endl;

	ll.kl = keliling(phi, ll.dt);
	cout << "Keliling lingkaran adalah: " << ll.kl << " cm." << endl;
	
	ll.ls = luas(phi, ll.r);
	cout << "Luas lingkaran adalah:	" << ll.ls << " cm." << endl;
	cout << endl;
	
	
	float stngh = 0.5;
	struct segitiga{
		int g;
		int h; 
		int i;
		int tg;
		float bsr;
		int ptrn;
	};
	
	segitiga ss;
	cout << "Masukan panjang sisi yang pertama: ";
	cin >> ss.g;
	cout << "Masukan panjang sisi yang kedua: ";
	cin >> ss.h;
	cout << "Masukan panjang sisi yang ketiga: ";
	cin >> ss.i;
	cout << "Masukan tinggi segitiga: ";
	cin >> ss.tg;
	
	ss.bsr = besar(stngh, ss.g, ss.tg);
	cout << "Luas segitiga adalah: " << ss.bsr << " cm." << endl;
	
	ss.ptrn = putaran(ss.g, ss.h, ss.i);
	cout << "Keliling segittiga adalah: " << ss.ptrn << " cm." << endl;
	cout << endl;
	
	
	int instr = 2;
	struct persegi_dan_persegipanjang{
		int p;
		int q;
		float LS;
		double KL;
		float DGL;
	};
	
	persegi_dan_persegipanjang pp;
	cout << "Masukan panjang sisi persegi: ";
	cin >> pp.p;
	cout << "Masukan lebar persegi: ";
	cin >> pp.q;
	
	pp.LS = LUAS(pp.p, pp.q);
	cout << "Luas persegi_dan_persegipanjang adalah: " << pp.LS << " cm." << endl;
	
	pp.KL = KELILING(instr, pp.p, pp.q);
	cout << "Keliling persegi_dan_persegipanjang adalah: " << pp.KL << " cm." << endl;
	
	pp.DGL = DIAGONAL(pp.p, pp.q);
	cout << "Diagonal persegi_dan_persegipanjang adalah: " << pp.DGL << " cm." << endl;
	cout << endl;
	
	//bangun ruang
	int sisi, sisi3;
	float sisi2, sisi4;
	int Volume_K, Luas_K, Keliling_K, Luas_Salah_Satu_Sisi_K;
	
	cout << "Masukan besar nilai sisi Kubus: ";
	cin >> sisi;
	cout << "(untuk menghitung volume)" << endl;
	Volume_K = V_KUBUS(sisi);
	
	cout << "Masukan besar nilai sisi Kubus: ";
	cin >> sisi2;
	cout << "(untuk menghitung luas)" << endl;
	Luas_K = L_KUBUS(sisi2);
	
	cout << "Masukan besar nilai sisi Kubus: ";
	cin >> sisi3;
	cout << "(untuk menghitung keliling)" << endl;
	Keliling_K = K_KUBUS(sisi3);
	
	cout << "Masukan besar nilai sisi Kubus: ";
	cin >> sisi4;
	cout << "(untuk menghitung luas salah satu sisi)" << endl;
	Luas_Salah_Satu_Sisi_K = L2_KUBUS(sisi4);
	
	cout << "Volume Kubus = " << Volume_K << " cm." << endl;
	cout << "Luas Permukaan Kubus = " << Luas_K << " cm." << endl;
	cout << "Keliling Kubus = " << Keliling_K << " cm." << endl;
	cout << "Luas salah satu sisi Kubus = " << Luas_Salah_Satu_Sisi_K << " cm." << endl;
	
	
}


