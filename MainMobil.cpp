#include <iostream>

using namespace std;
class Mobil {
private:
	string noPlat;
	string warna;
	string manufaktur;
	int kecepatan;
	double jam; // Soal NO 4
	double detik; // Soal NO 5
	double kecepatanMS; // Soal NO 6
	double jarakKm; // Soal NO 7
	double jarakM; // Soal NO 7
public:
	void rubahSekon(double s){ // Soal NO 5
		detik = s * 3600;
	}
	void rubahKecepatan(double i){ // Soal NO 6
		kecepatanMS = (i*1000)/3600;
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
	double hitungJarak(){
		return kecepatan * jam;
	}
	void displayMessage(){
		cout << "-------------------------------" << endl;
		cout << "Mobil anda bermerek \t : " << manufaktur <<
		endl;
		cout << "Nomor Plat\t\t : " << noPlat << endl;
		cout << "Warna\t\t\t : " << warna << endl;
		cout << "Kecepatan\t\t : " << kecepatan << " km/h" <<endl; // Soal NO 6
		cout << "Kecepatan\t\t : " << kecepatanMS << " m/s" <<endl; // Soal NO 6
		cout << "Jarak yang ditempuh \t : " << hitungJarak() << " Km" << // Soal NO 7
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
	cout<<"Masukkan Waktu (Jam) \t\t: "; // Soal NO 4
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
	cout<<"Masukkan Waktu (Jam) \t\t: "; // Soal NO 4
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
	cout << "-------------------------------" << endl;
	
	//Merubah warna Mobil Pertama menjadi Hijau
	cout << "Mobil Pertama dirubah menjadi warna Hijau"
	<< endl;
	m1->setWarna("Hijau");
	m1->displayMessage();
	return 0;
}
