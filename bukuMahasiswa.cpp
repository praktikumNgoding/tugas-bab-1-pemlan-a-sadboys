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
	int lembar = 50; // 1 buku = 50 lembar
	double lembarPerhari = 0.25; // 1 lembar = 2 halaman (halaman_depan, halaman_belakang), 1 hari butuh 1/2 halaman = 1/4 lembar
	int kataPerhari = 100; // 1 hari menghabiskan 100 kata (1/2 halaman)
	Buku *Mahasiswa = new Buku();
	cout << "Mahasiswa memiliki " << lembar <<" lembar pada Buku"<< endl;
	Mahasiswa->hitungHari(lembarPerhari, lembar);
	Mahasiswa->hitungKata(kataPerhari, lembar*4); // 1 hari = 1/2 halaman, jadi 1 lembar = 4 hari, maka 50 lembar * 4 hari =200 hari, jadi 100 kata * 200 hari = 20.000 kata
	Mahasiswa->displayMessage();
	return 0;
}
