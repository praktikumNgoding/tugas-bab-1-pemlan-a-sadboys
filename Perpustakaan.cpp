#include <iostream>

using namespace std;
struct category{
	string teknologi 	= "Teknologi";
	string filsafat 	= "Filsafat";
	string sejarah 		= "Sejarah";
	string agama 		= "Agama";
	string psikologi 	= "Psikologi";
	string politik 		= "Politik";
	string fiksi 		= "Fiksi";
	string komik 		= "Komik";
	
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
	
	void setBuku(string nama, string pengarang, string penerbit, string tempat_terbit, int tahun_terbit, string kategori){
		this->nama_buku 	= nama;
		this->pengarang 	= pengarang;
		this->penerbit 		= penerbit;
		this->tempat_terbit	= tempat_terbit;
		this->tahun_terbit 	= tahun_terbit;
		this->kategori 		= kategori;
	}
	
	void displayMessage(){
		cout << "\nNama Buku\t : " << nama_buku << endl;
		cout << "Pengarang\t : " << pengarang << endl; 
		cout << "Penerbit\t : " << penerbit << endl; 
		cout << "Tempat Terbit\t : " << tempat_terbit << endl; 
		cout << "Tahun Terbit\t : " << tahun_terbit <<
		endl;
}
	
};
int main() {
	//Inisialisasi Variable untuk input User
	string nama_buku;
	string pengarang;
	string penerbit;
	string tempat_terbit;
	int tahun_terbit;
	//Inisialisasi Variable untuk pilihan dari user
	int pilihan_kategori;
	int pilihan;
	//Membuat class category setiap object dengan maks data = 5
	struct category cat;
	Buku teknologi[5];
	Buku filsafat[5];
	Buku sejarah[5];
	Buku agama[5];
	Buku psikologi[5];
	Buku politik[5];
	Buku fiksi[5];
	Buku komik[5];
	//Untuk menghitung jumlah setiap category mulai dari 0
	int n_tekno 		= 0;
	int n_sej		= 0; 
	int n_psik 		= 0;
	int n_fis 		= 0;	
	int n_fil 		= 0;
	int n_agama		= 0;
	int n_poli 		= 0;
	int n_kom 		= 0;
	
	do{
		//Menampilkan menu dengan perulangan selama pilihan tidak sama dengan 3
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
		if(pilihan==1){
			//Jika pilihan 1 maka akan melakukan Insert Buku dengan memilih kategori terlebih dahulu
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
				//Input Data Category Teknologi
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
				teknologi[n_tekno].setBuku(nama_buku, pengarang, penerbit, tempat_terbit, tahun_terbit, cat.teknologi);
				n_tekno++;
			}else if(pilihan_kategori == 2){
				//Input Data Category Filsafat
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
				filsafat[n_fil].setBuku(nama_buku, pengarang, penerbit, tempat_terbit, tahun_terbit, cat.filsafat);
				n_fil++;
			}else if(pilihan_kategori == 3){
				//Input Data Category Sejarah
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
				sejarah[n_sej].setBuku(nama_buku, pengarang, penerbit, tempat_terbit, tahun_terbit, cat.sejarah);
				n_sej++;
			}else if(pilihan_kategori == 4){
				//Input Data Category Agama
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
				agama[n_agama].setBuku(nama_buku, pengarang, penerbit, tempat_terbit, tahun_terbit, cat.agama);
				n_agama++;
			}else if(pilihan_kategori == 5){
				//Input Data Category Psikologi
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
				psikologi[n_psik].setBuku(nama_buku, pengarang, penerbit, tempat_terbit, tahun_terbit, cat.psikologi);
				n_psik++;
			}else if(pilihan_kategori == 6){
				//Input Data Category Politik
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
				politik[n_poli].setBuku(nama_buku, pengarang, penerbit, tempat_terbit, tahun_terbit, cat.politik);
				n_poli++;
			}else if(pilihan_kategori == 7){
				//Input Data Category Fiksi
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
				fiksi[n_fis].setBuku(nama_buku, pengarang, penerbit, tempat_terbit, tahun_terbit, cat.fiksi);
				n_fis++;
			}else if(pilihan_kategori == 8){
				//Input Data Catagory Komik
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
				komik[n_kom].setBuku(nama_buku, pengarang, penerbit, tempat_terbit, tahun_terbit, cat.komik);
				n_kom++;
			}else{
				system("cls");
				cout << "Masukkan pilihan antara 1 s/d 8 ! !\n\n";
				system("pause");
			}
		}
		else if(pilihan==2){
			//Jika pilihan 1 maka akan menampilkan Buku dengan memilih kategori terlebih dahulu
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
					cout << endl << "Buku ke-" << i + 1 << endl;
					teknologi[i].displayMessage();
				}
			}else if(pilihan_kategori == 2){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Filsafat\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_fil;i++){
					cout << endl << "Buku ke-" << i + 1 << endl;
					filsafat[i].displayMessage();
				}	
			}else if(pilihan_kategori == 3){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Sejarah\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_sej;i++){
					cout << endl << "Buku ke-" << i + 1 << endl;
					sejarah[i].displayMessage();
				}	
			}else if(pilihan_kategori == 4){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Agama\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_agama;i++){
					cout << endl << "Buku ke-" << i + 1 << endl;
					agama[i].displayMessage();
				}
			}else if(pilihan_kategori == 5){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Psikologi\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_psik;i++){
					cout << endl << "Buku ke-" << i + 1 << endl;
					psikologi[i].displayMessage();
				}
			}else if(pilihan_kategori == 6){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Politik\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_poli;i++){
					cout << endl << "Buku ke-" << i + 1 << endl;
					politik[i].displayMessage();
				}	
			}else if(pilihan_kategori == 7){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Fiksi\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_fis;i++){
					cout << endl << "Buku ke-" << i + 1 << endl;
					fiksi[i].displayMessage();
				}	
			}else if(pilihan_kategori == 8){
				system("cls");
				cout << "--------------------------------------------------------------" << endl;
				cout<<"\t\t\tBuku Kategori Komik\n";
				cout << "--------------------------------------------------------------" << endl;
				for(int i=0;i<n_kom;i++){
					komik[i].displayMessage();	
				}
			}else{
				system("cls");
				cout << "Masukkan pilihan antara 1 s/d 8 ! !\n\n";
				system("pause");
			}
			system("pause");
		}else{
			system("cls");
			cout << "Masukkan pilihan antara 1 s/d 3 ! !\n\n";
			system("pause");
		}
			
	}while(pilihan!=3);
	cout<<"Created by :             "<<endl;
	cout<<"      Muhammad Yaqub	"<<endl;
	cout<<"    Fatchullah Wahid A	"<<endl;
	cout<<"      Bimo Prasetyo 	"<<endl;
	return 0;
}
