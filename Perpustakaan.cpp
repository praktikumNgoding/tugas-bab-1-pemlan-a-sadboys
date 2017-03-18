#include <iostream>

using namespace std;
struct category{
	string teknologi = "Teknologi";
	string filsafat = "Filsafat";
	string sejarah = "Sejarah";
	string agama = "Agama";
	string psikologi = "Psikologi";
	string politik = "Politik";
	string fiksi = "Fiksi";
	string komik = "Komik";
	
};
class Buku {
private:
	string nama_buku;
	string pengarang;
	string penerbit;
	string tempat_terbit;
	int tahun_terbit;
	string kategori;
public:
	
	void setNamaBuku(string s) {
		nama_buku = s;
	}
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
	void setKategori(string s) {
		kategori = s;
	}
	
	string getNamaBuku() {
		return nama_buku;
	}
	string getPengarang() {
		return pengarang;
	}
	string getPenerbit() {
		return penerbit;
	}
	string getTempatTerbit() {
		return tempat_terbit;
	}
	int getTahunTerbit() {
		return tahun_terbit;
	}
	string getKategori(){
		return kategori;
	}	
	void displayMessage(){
		cout << endl << "Nama Buku\t : " << getNamaBuku() << endl;
		cout << "Pengarang\t : " << getPengarang() << endl; 
		cout << "Penerbit\t : " << getPenerbit() << endl; 
		cout << "Tempat Terbit\t : " << getTempatTerbit() << endl; 
		cout << "Tahun Terbit\t : " << getTahunTerbit() <<
		endl;
}
	
};
int main() {
	string nama_buku;
	string pengarang;
	string penerbit;
	string tempat_terbit;
	int tahun_terbit;
	int pilihan_kategori;
	struct category cat;
	Buku teknologi[5];
	Buku filsafat[5];
	Buku sejarah[5];
	Buku agama[5];
	Buku psikologi[5];
	Buku politik[5];
	Buku fiksi[5];
	Buku komik[5];
	int n_tekno = 0;
	int n_sej= 0; 
	int n_psik = 0;
	int n_fis = 0;	
	int n_fil = 0;
	int n_agama = 0;
	int n_poli = 0;
	int n_kom = 0;
	char pilihan;
	do{
		system("cls");
		cout << "--------------------------------------------------------------" << endl;
		cout<<"\t\t\tProgram Perpustakaan\n";
		cout << "--------------------------------------------------------------" << endl;
		cout<<"\n";
		cout<<"1. Tambah Buku\n";	
		cout<<"2. Tampilkan Buku\n";
		cout<<"3. Keluar program\n\n";
		cout<<"Masukkan pilihan : ";
		cin >> pilihan;
		fflush(stdin);
		cout<<"\n";
		if(pilihan=='1'){
			system("cls");
			cout<<"1. Teknologi\n";	
			cout<<"2. Filsafat\n";
			cout<<"3. Sejarah\n";
			cout<<"4. Agama\n";
			cout<<"5. Psikologi\n";
			cout<<"6. Politik\n";
			cout<<"7. Fiksi\n";
			cout<<"8. Komik\n\n";
			cout<<"Pilih kategori : ";
			cin >> pilihan_kategori;
			fflush(stdin);
			cout<<"\n";
			if(pilihan_kategori == 1){
				cout<<"Masukkan Nama Buku \t\t: ";
				getline(cin, nama_buku);
				fflush(stdin);
				cout<<"Masukkan Pengarang Buku \t: ";
				getline(cin, pengarang);
				fflush(stdin);
				cout<<"Masukkan Penerbit Buku \t\t: ";
				getline(cin, penerbit);
				fflush(stdin);
				cout<<"Masukkan Tempat Terbit Buku \t: ";
				getline(cin, tempat_terbit);
				fflush(stdin);
				cout<<"Masukkan Tahun Terbit Buku \t: ";
				cin>> tahun_terbit;
				fflush(stdin);
				teknologi[n_tekno].setNamaBuku(nama_buku);
				teknologi[n_tekno].setPengarang(pengarang);
				teknologi[n_tekno].setPenerbit(penerbit);
				teknologi[n_tekno].setTempatTerbit(tempat_terbit);
				teknologi[n_tekno].setTahunTerbit(tahun_terbit);
				teknologi[n_tekno].setKategori(cat.teknologi);
				n_tekno++;
			}else if(pilihan_kategori == 4){
				cout<<"Masukkan Nama Buku \t\t: ";
				getline(cin, nama_buku);
				fflush(stdin);
				cout<<"Masukkan Pengarang Buku \t: ";
				getline(cin, pengarang);
				fflush(stdin);
				cout<<"Masukkan Penerbit Buku \t\t: ";
				getline(cin, penerbit);
				fflush(stdin);
				cout<<"Masukkan Tempat Terbit Buku \t: ";
				getline(cin, tempat_terbit);
				fflush(stdin);
				cout<<"Masukkan Tahun Terbit Buku \t: ";
				cin>> tahun_terbit;
				fflush(stdin);
				agama[n_agama].setNamaBuku(nama_buku);
				agama[n_agama].setPengarang(pengarang);
				agama[n_agama].setPenerbit(penerbit);
				agama[n_agama].setTempatTerbit(tempat_terbit);
				agama[n_agama].setTahunTerbit(tahun_terbit);
				agama[n_agama].setKategori(cat.agama);
				n_agama++;
			}else if(pilihan_kategori == 7){
				cout<<"Masukkan Nama Buku \t\t: ";
				getline(cin, nama_buku);
				fflush(stdin);
				cout<<"Masukkan Pengarang Buku \t: ";
				getline(cin, pengarang);
				fflush(stdin);
				cout<<"Masukkan Penerbit Buku \t\t: ";
				getline(cin, penerbit);
				fflush(stdin);
				cout<<"Masukkan Tempat Terbit Buku \t: ";
				getline(cin, tempat_terbit);
				fflush(stdin);
				cout<<"Masukkan Tahun Terbit Buku \t: ";
				cin>> tahun_terbit;
				fflush(stdin);
				fiksi[n_fis].setNamaBuku(nama_buku);
				fiksi[n_fis].setPengarang(pengarang);
				fiksi[n_fis].setPenerbit(penerbit);
				fiksi[n_fis].setTempatTerbit(tempat_terbit);
				fiksi[n_fis].setTahunTerbit(tahun_terbit);
				fiksi[n_fis].setKategori(cat.fiksi);
				n_fis++;
			}else if(pilihan_kategori == 2){
				cout<<"Masukkan Nama Buku \t\t: ";
				getline(cin, nama_buku);
				fflush(stdin);
				cout<<"Masukkan Pengarang Buku \t: ";
				getline(cin, pengarang);
				fflush(stdin);
				cout<<"Masukkan Penerbit Buku \t\t: ";
				getline(cin, penerbit);
				fflush(stdin);
				cout<<"Masukkan Tempat Terbit Buku \t: ";
				getline(cin, tempat_terbit);
				fflush(stdin);
				cout<<"Masukkan Tahun Terbit Buku \t: ";
				cin>> tahun_terbit;
				fflush(stdin);
				filsafat[n_fil].setNamaBuku(nama_buku);
				filsafat[n_fil].setPengarang(pengarang);
				filsafat[n_fil].setPenerbit(penerbit);
				filsafat[n_fil].setTempatTerbit(tempat_terbit);
				filsafat[n_fil].setTahunTerbit(tahun_terbit);
				filsafat[n_fil].setKategori(cat.filsafat);
				n_fil++;
			}else if(pilihan_kategori == 6){
				cout<<"Masukkan Nama Buku \t\t: ";
				getline(cin, nama_buku);
				fflush(stdin);
				cout<<"Masukkan Pengarang Buku \t: ";
				getline(cin, pengarang);
				fflush(stdin);
				cout<<"Masukkan Penerbit Buku \t\t: ";
				getline(cin, penerbit);
				fflush(stdin);
				cout<<"Masukkan Tempat Terbit Buku \t: ";
				getline(cin, tempat_terbit);
				fflush(stdin);
				cout<<"Masukkan Tahun Terbit Buku \t: ";
				cin>> tahun_terbit;
				fflush(stdin);
				politik[n_poli].setNamaBuku(nama_buku);
				politik[n_poli].setPengarang(pengarang);
				politik[n_poli].setPenerbit(penerbit);
				politik[n_poli].setTempatTerbit(tempat_terbit);
				politik[n_poli].setTahunTerbit(tahun_terbit);
				politik[n_poli].setKategori(cat.politik);
				n_poli++;
			}else if(pilihan_kategori == 3){
				cout<<"Masukkan Nama Buku \t\t: ";
				getline(cin, nama_buku);
				fflush(stdin);
				cout<<"Masukkan Pengarang Buku \t: ";
				getline(cin, pengarang);
				fflush(stdin);
				cout<<"Masukkan Penerbit Buku \t\t: ";
				getline(cin, penerbit);
				fflush(stdin);
				cout<<"Masukkan Tempat Terbit Buku \t: ";
				getline(cin, tempat_terbit);
				fflush(stdin);
				cout<<"Masukkan Tahun Terbit Buku \t: ";
				cin>> tahun_terbit;
				fflush(stdin);
				sejarah[n_sej].setNamaBuku(nama_buku);
				sejarah[n_sej].setPengarang(pengarang);
				sejarah[n_sej].setPenerbit(penerbit);
				sejarah[n_sej].setTempatTerbit(tempat_terbit);
				sejarah[n_sej].setTahunTerbit(tahun_terbit);
				sejarah[n_sej].setKategori(cat.sejarah);
				n_sej++;
			}else if(pilihan_kategori == 5){
				cout<<"Masukkan Nama Buku \t\t: ";
				getline(cin, nama_buku);
				fflush(stdin);
				cout<<"Masukkan Pengarang Buku \t: ";
				getline(cin, pengarang);
				fflush(stdin);
				cout<<"Masukkan Penerbit Buku \t\t: ";
				getline(cin, penerbit);
				fflush(stdin);
				cout<<"Masukkan Tempat Terbit Buku \t: ";
				getline(cin, tempat_terbit);
				fflush(stdin);
				cout<<"Masukkan Tahun Terbit Buku \t: ";
				cin>> tahun_terbit;
				fflush(stdin);
				psikologi[n_psik].setNamaBuku(nama_buku);
				psikologi[n_psik].setPengarang(pengarang);
				psikologi[n_psik].setPenerbit(penerbit);
				psikologi[n_psik].setTempatTerbit(tempat_terbit);
				psikologi[n_psik].setTahunTerbit(tahun_terbit);
				psikologi[n_psik].setKategori(cat.psikologi);
				n_psik++;
			}else if(pilihan_kategori == 8){
				cout<<"Masukkan Nama Buku \t\t: ";
				getline(cin, nama_buku);
				fflush(stdin);
				cout<<"Masukkan Pengarang Buku \t: ";
				getline(cin, pengarang);
				fflush(stdin);
				cout<<"Masukkan Penerbit Buku \t\t: ";
				getline(cin, penerbit);
				fflush(stdin);
				cout<<"Masukkan Tempat Terbit Buku \t: ";
				getline(cin, tempat_terbit);
				fflush(stdin);
				cout<<"Masukkan Tahun Terbit Buku \t: ";
				cin>> tahun_terbit;
				fflush(stdin);
				komik[n_kom].setNamaBuku(nama_buku);
				komik[n_kom].setPengarang(pengarang);
				komik[n_kom].setPenerbit(penerbit);
				komik[n_kom].setTempatTerbit(tempat_terbit);
				komik[n_kom].setTahunTerbit(tahun_terbit);
				komik[n_kom].setKategori(cat.komik);
				n_kom++;
			}
		}
		else if(pilihan=='2'){
			system("cls");
			cout<<"1. Teknologi\n";	
			cout<<"2. Filsafat\n";
			cout<<"3. Sejarah\n";
			cout<<"4. Agama\n";
			cout<<"5. Psikologi\n";
			cout<<"6. Politik\n";
			cout<<"7. Fiksi\n";
			cout<<"8. Komik\n\n";
			cout<<"Pilih kategori : ";
			cin >> pilihan_kategori;
			cout<<"\n";	
			if(pilihan_kategori == 1){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Teknologi\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_tekno;i++){
					teknologi[i].displayMessage();
				}
			}else if(pilihan_kategori == 4){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Agama\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_agama;i++){
					agama[i].displayMessage();
				}
			}else if(pilihan_kategori == 7){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Fiksi\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_fis;i++){
					fiksi[i].displayMessage();
				}	
			}else if(pilihan_kategori == 2){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Filsafat\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_fil;i++){
					filsafat[i].displayMessage();
				}	
			}else if(pilihan_kategori == 6){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Politik\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_poli;i++){
					politik[i].displayMessage();
				}	
			}else if(pilihan_kategori == 3){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Sejarah\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_sej;i++){
					sejarah[i].displayMessage();
				}	
			}else if(pilihan_kategori == 5){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Psikologi\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_psik;i++){
					psikologi[i].displayMessage();
				}
			}else if(pilihan_kategori == 8){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Komik\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_kom;i++){
					komik[i].displayMessage();	
				}
			}
			system("pause");
		}
			
	}while(pilihan!='3');
	return 0;
}
