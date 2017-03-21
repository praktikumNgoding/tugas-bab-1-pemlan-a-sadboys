#include <iostream>
#include <string>
#include <sstream>
//TUGAS OVERLOAD

using namespace std;

class classUbah{
public:
	int angka[1];
	string string1;
	string string2;
	
	//Konversi Angka ke String ke 1
	void convert(int angka){
		if(angka==9){
			string1="Sembilan";
		}else if(angka==8){
			string1="Delapan";
		}else if(angka==7){
			string1="Tujuh";
		}else if(angka==6){
			string1="Enam";
		}else if(angka==5){
			string1="Lima";
		}else if(angka==4){
			string1="Empat";
		}else if(angka==3){
			string1="Tiga";
		}else if(angka==2){
			string1="Dua";
		}else if(angka==1){
			string1="Satu";
		}else{
			string1="";
		}
	}
	
	//Konversi String ke Angka
	void convert(string s, int index){
		if(s=="Sembilan" || s=="sembilan"){
			angka[index]=9;
		}else if(s=="Delapan" || s=="delapan"){
			angka[index]=8;
		}else if(s=="Tujuh" || s=="tujuh"){
			angka[index]=7;
		}else if(s=="Enam" || s=="enam"){
			angka[index]=6;
		}else if(s=="Lima" || s=="lima"){
			angka[index]=5;
		}else if(s=="Empat" || s=="Empat"){
			angka[index]=4;
		}else if(s=="Tiga" || s=="tiga"){
			angka[index]=3;
		}else if(s=="Dua" || s=="dua"){
			angka[index]=2;
		}else if(s=="Satu" || s=="satu"){
			angka[index]=1;
		}else{
			angka[index]=0;
		}
	}
	
	//Konversi Angka ke String ke 2
	void convert2(int angka){
		if(angka==9){
			string2="Sembilan";
		}else if(angka==8){
			string2="Delapan";
		}else if(angka==7){
			string2="Tujuh";
		}else if(angka==6){
			string2="Enam";
		}else if(angka==5){
			string2="Lima";
		}else if(angka==4){
			string2="Empat";
		}else if(angka==3){
			string2="Tiga";
		}else if(angka==2){
			string2="Dua";
		}else if(angka==1){
			string2="Satu";
		}else{
			string2="";
		}
	}
	
	//Menampilkan Pesan untuk String
	void displayMessage(){
		if(string1==""){
			cout << "Hasil Konversi \t\t\t\t: " << string2;
		}else{
			cout << "Hasil Konversi \t\t\t\t\t: " << string1 << " " << string2;
		}
		
	}
	
	//Menampilkan Pesan untuk Angka
	void displayMessage2(){
		cout << "Hasil Konversi \t\t\t\t\t: " << angka[0] << angka[1];
	}
	
	//Mengubah Angka menjadi String
	void ubah(int i){
		angka[1] = i%10;
		i= i/10;
		angka[0] = i;	
		convert(angka[0]);
		convert2(angka[1]);
	}
	
	//Mengubah String menjadi Angka
	void ubah(string s){
		istringstream iss(s);
		string kata;
		int i=0;
		while (getline(iss, kata, ' '))
	    {
	        convert(kata, i);
	        i++;
	    }
	}
};
int main(){
	int angka;
	string kataAngka;
	
	classUbah *angka1 = new classUbah();
	cout<<"Masukkan Angka yang ingin diubah ke String \t: ";
	cin >>angka;
	fflush(stdin);
	angka1->ubah(angka);
	angka1->displayMessage();
	
	cout << "\n--------------------------------------------------------------" << endl;
	classUbah *string1 = new classUbah();
	cout<<"\nMasukkan String yang ingin diubah ke Angka \t: ";
	getline(cin, kataAngka);
	fflush(stdin);
	angka1->ubah(kataAngka);
	angka1->displayMessage2();
	
	return 0;
}
