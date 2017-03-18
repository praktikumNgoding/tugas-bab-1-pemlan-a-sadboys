#include <iostream>

using namespace std;
class Buku {
private:
	string pengarang;
	string penerbit;
	string tempat_terbit;
	int tahun_terbit;
public:
	
	void setPengarang(string s) {
		pengarang = s;
	}
	void setPenerbit(string s) {
		penerbit = s;
	}
	void setTahunTerbit(int i) {
		tahun_terbit = i;
	}
	void setTempatTerbit(string s) {
		tempat_terbit = s;
	}	
	string getPengarang() {
		return pengarang;
	}
	string getPenerbit() {
		return penerbit;
	}
	int getTahunTerbit() {
		return tahun_terbit;
	}	
	string getTempatTerbit(() {
		return tempat_terbit;
	}
			
	
	void displayMessage(){
		cout << "--------------------------------------------------------------" << endl;
		cout << "Pengarang\t\t : " << getPengarang() << endl;
		cout << "Penerbit\t\t\t : " << getPenerbit() << endl;
		cout << "Tahun Terbit\t : " << getTahunTerbit() << endl;
		cout << "Tempat Terbit\t : " << getTempatTerbit() <<endl;
		endl;
}
};
int main() {
	char pilihan;
	head.count=0;
	head.count=0;
	do{
		system("cls");
		garis();
		cout<<"Program Perpustakaan\n";
		garis();
		cout<<"\n";
		cout<<"1. Tambah data\n";	
		cout<<"2. Hapus data\n";	
		cout<<"3. Hapus semua data\n"; 	
		cout<<"4. Tampilkan\n";
		cout<<"5. Keluar program\n\n";
		cout<<"Masukkan pilihan : ";
		cin >> pilihan;
		cout<<"\n";
		if(pilihan=='1'){
		}
		else if(pilihan=='2'){
		}
		else if(pilihan=='3'){
		}
		else if(pilihan=='4'){
		}
	}while(pilihan!='5');	

	return 0;
}
