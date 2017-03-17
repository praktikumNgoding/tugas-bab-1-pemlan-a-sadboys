#include <iostream>

using namespace std;
class Mobil {
private:
	string noPlat;
	string warna;
	string manufaktur;
	double kecepatan;
	double jam; // Soal NO 4
	double detik; // Soal NO 5
public:
	void rubahSekon(double s){ // Soal NO 5
		detik = s * 3600;
	}
	void rubahKecepatan(double i){ // Soal NO 6
		kecepatan = (i*1000)/3600;
	}
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
		rubahKecepatan(kecepatan);
	}
	void setWaktu(double w) { // Soal NO 4
		jam = w;
		rubahSekon(jam); // Soal NO 5
	}
	double hitungJarak(){ // Soal NO 7
		return kecepatan * detik;
	}
	double hitungJarakKm(){ // Soal NO 7
		return hitungJarak() / 1000;
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
	double getKecepatan() {
		return kecepatan;
	}	
	void displayMessage(){
		cout << "--------------------------------------------------------------" << endl;
		cout << "Mobil anda bermerek \t : " << getManufaktur() << endl; // Soal No 2
		cout << "Nomor Plat\t\t : " << getNoPlat() << endl; // Soal No 2
		cout << "Warna\t\t\t : " << getWarna() << endl; // Soal No 2
		cout << "Kecepatan\t\t : " << getKecepatan() << " m/s" <<endl; // Soal NO 2 & 6
		cout << "Jarak yang ditempuh \t : " << hitungJarak() << " m" << endl; // Soal NO 7
		cout << "Jarak yang ditempuh \t : " << hitungJarakKm() << " Km" << // Soal NO 8
		endl;
}
};
int main() {
	//Inisialisasi Variable untuk Input User
	string noPlat;
	string warna;
	string manufaktur;
	int kecepatan;
	double waktu;
	cout << endl <<"\t\t\tTUGAS-BAB-1\tCLASS\t\t\t" << endl<< endl;
	//Input User Mobil Pertama
	cout<<"Masukkan Merek Mobil ke-1 \t\t: ";
	getline(cin, manufaktur);
	fflush(stdin);
	cout<<"Masukkan Warna Mobil ke-1 \t\t: ";
	getline(cin, warna);
	fflush(stdin);
	cout<<"Masukkan No. Plat Mobil ke-1 \t\t: ";
	getline(cin, noPlat);
	fflush(stdin);
	cout<<"Masukkan Kecepatan(km/h) Mobil ke-1 \t: ";
	cin>> kecepatan;
	fflush(stdin);
	cout<<"Masukkan Waktu (Jam) ke-1 \t\t: "; // Soal NO 4
	cin>> waktu;
	fflush(stdin);
	
	//Set Data Mobil Pertama	
	Mobil *m1 = new Mobil();
	m1->setKecepatan(kecepatan);
	m1->setManufaktur(manufaktur);
	m1->setNoPlat(noPlat);
	m1->setWarna(warna);
	m1->setWaktu(waktu); // Soal NO 4
	m1->displayMessage();
	cout << "--------------------------------------------------------------" << endl;
	
	//Input User Mobil Kedua
	cout<<"Masukkan Merek Mobil ke-2 \t\t: ";
	getline(cin, manufaktur);
	fflush(stdin);
	cout<<"Masukkan Warna Mobil ke-2 \t\t: ";
	getline(cin, warna);
	fflush(stdin);
	cout<<"Masukkan No. Plat Mobil ke-2 \t\t: ";
	getline(cin, noPlat);
	fflush(stdin);
	cout<<"Masukkan Kecepatan(km/h) Mobil ke-2 \t: ";
	cin>> kecepatan;
	fflush(stdin);
	cout<<"Masukkan Waktu (Jam) ke-2 \t\t: "; // Soal NO 4
	cin>> waktu;
	fflush(stdin);
	
	//Set Data Mobil Kedua	
	Mobil *m2 = new Mobil();
	m2->setKecepatan(kecepatan);
	m2->setManufaktur(manufaktur);
	m2->setNoPlat(noPlat);
	m2->setWarna(warna);
	m2->setWaktu(waktu); // Soal NO 4
	m2->displayMessage();
	cout << "--------------------------------------------------------------" << endl;
	
	//Merubah warna Mobil Pertama menjadi Hijau
	cout << "Mobil Pertama dirubah menjadi warna Hijau"
	<< endl;
	m1->setWarna("Hijau");
	m1->displayMessage();
	return 0;
}
