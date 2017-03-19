#include <iostream>

using namespace std;

class Buku {
private:
	int totalHari;
	int totalKata;
public:
	void hitungHari(double a, int b){
		totalHari = b / a;
	}
	void hitungKata(int a, int b){
		totalKata = a * b;
	}
	int getTotalHari(){
		return totalHari;
	}
	int getTotalKata(){
		return totalKata;
	}
	void displayMessage(){
		cout << "Setiap hari mahasiswa menulis sebanyak 100 Kata perhari yang cukup untuk 1/2 halaman buku." << endl;
		cout << "\nMaka Mahasiswa selesai menghabiskan buku itu dalam waktu \t : " << getTotalHari() << " Hari"<< endl; 
		cout << "dan Mahasiswa menuliskan kata pada buku sebanyak \t\t : " << getTotalKata() << " Kata" <<
		endl;
	}
 
};
int main(){
	int lembar = 50;
	double lembarPerhari = 0.25; // 1 Hari menulis 1/2 halaman buku -> 1 lembar = 2 halaman
	int kataPerhari = 200; // 1 Hari menulis 100 kata pada 1/2 halaman buku -> 1 lembar = 2 halaman
	Buku *Mahasiswa = new Buku();
	cout << "Mahasiswa memiliki " << lembar <<" lembar pada Buku"<< endl;
	Mahasiswa->hitungHari(lembarPerhari, lembar);
	Mahasiswa->hitungKata(kataPerhari, lembar);
	Mahasiswa->displayMessage();
	return 0;
}
