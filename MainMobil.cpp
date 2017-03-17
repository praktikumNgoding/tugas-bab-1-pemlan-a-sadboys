#include <iostream>
using namespace std;
class Mobil {
private:
	string noPlat;
	string warna;
	string manufaktur;
	int kecepatan;
public:
	void setNoPlat(string s) {
		noPlat = s;
	}
	void setWarna(string s) {
		warna = s;
	}
	void setManufaktur(string s) {
		manufaktur = s;
	}
	void setKecepatan(int i) {
		kecepatan = i;
	}
	string getNoPlat() {
		return noPlat;
	}
	string getWarna() {
		return warna;
	}
	string getManufaktur() {
		return manufaktur;
	}
	int getKecepatan() {
		return kecepatan;
	}
	void displayMessage(){
		cout << "Mobil anda adalah bermerek " << manufaktur <<
		endl;
		cout << "Mempunyai nomor plat " << noPlat << endl;
		cout << "serta memiliki warna " << warna << endl;
		cout << "dan mampu menempuh kecepatan " << kecepatan <<
		endl;
}
};
int main() {

	Mobil *m1 = new Mobil();
	m1->setKecepatan(50);
	m1->setManufaktur("Toyota");
	m1->setNoPlat("AB 1231 UA");
	m1->setWarna("Merah");
	m1->displayMessage();
	cout << "--------------------" << endl;
	Mobil *m2 = new Mobil();
	m2->setKecepatan(100);
	m2->setManufaktur("Mitsubishi");
	m2->setNoPlat("N 1134 AG");
	m2->setWarna("Pink");
	m2->displayMessage();
	cout << "--------------------" << endl;
	cout << "mobil pada objek m1 di rubah menjadi warna hijau"
	<< endl;
	m1->setWarna("Hijau");
	m1->displayMessage();
	return 0;
}