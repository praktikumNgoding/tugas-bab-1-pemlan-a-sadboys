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
		cout << "-------------------------------" << endl;
		cout << "Mobil anda bermerek \t : " << manufaktur <<
		endl;
		cout << "Nomor Plat\t\t : " << noPlat << endl;
		cout << "Warna\t\t\t : " << warna << endl;
		cout << "Kecepatan\t\t : " << kecepatan <<
		endl;
}
};
int main() {
	//Inisialisasi Variable untuk Input User
	string noPlat;
	string warna;
	string manufaktur;
	int kecepatan;
	
	//Input User Mobil Pertama
	cout<<"Masukkan Merek Mobil ke-1 \t: ";
	getline(cin, manufaktur);
	fflush(stdin);
	cout<<"Masukkan Warna Mobil ke-1 \t: ";
	getline(cin, warna);
	fflush(stdin);
	cout<<"Masukkan No. Plat Mobil ke-1 \t: ";
	getline(cin, noPlat);
	fflush(stdin);
	cout<<"Masukkan Kecepatan Mobil ke-1 \t: ";
	cin>> kecepatan;
	fflush(stdin);
	
	//Set Data Mobil Pertama	
	Mobil *m1 = new Mobil();
	m1->setKecepatan(kecepatan);
	m1->setManufaktur(manufaktur);
	m1->setNoPlat(noPlat);
	m1->setWarna(warna);
	m1->displayMessage();
	cout << "-------------------------------" << endl;
	
	//Input User Mobil Kedua
	cout<<"Masukkan Merek Mobil ke-2 \t: ";
	getline(cin, manufaktur);
	fflush(stdin);
	cout<<"Masukkan Warna Mobil ke-2 \t: ";
	getline(cin, warna);
	fflush(stdin);
	cout<<"Masukkan No. Plat Mobil ke-2 \t: ";
	getline(cin, noPlat);
	fflush(stdin);
	cout<<"Masukkan Kecepatan Mobil ke-2 \t: ";
	cin>> kecepatan;
	fflush(stdin);	
	
	//Set Data Mobil Kedua	
	Mobil *m2 = new Mobil();
	m2->setKecepatan(kecepatan);
	m2->setManufaktur(manufaktur);
	m2->setNoPlat(noPlat);
	m2->setWarna(warna);
	m2->displayMessage();
	cout << "-------------------------------" << endl;
	
	//Merubah warna Mobil Pertama menjadi Hijau
	cout << "Mobil Pertama dirubah menjadi warna Hijau"
	<< endl;
	m1->setWarna("Hijau");
	m1->displayMessage();
	return 0;
}
