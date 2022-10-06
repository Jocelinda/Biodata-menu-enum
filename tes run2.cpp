#include <iostream>
#include <conio.h>
using namespace std;
enum Anak_ke {
	Venecia= 1,
	Jocelinda,
	Vincent,
} anak;
		

int main (){
	int checker = 1; 
	int karakter;
	string Nama;
	string TanggalLahir; 
	string Alamat ;
	string Kampus;
	string NomorHp;
	string anak;
do{

	system ("cls");
	cout <<"Pilih yang Anda inginkan:\n\n";
	cout << "1. Input Data Mandiri\n\n";
	cout << "2. Output Data yang dimasukkan\n\n";
	cout << "3. Program selesai\n\n";
	karakter = getch();
	
	

	if ( karakter =='3'){
		checker = 0;
	} else if (karakter =='1'){
	
		system ("cls");
		cout<<"Nama:";
		getline (cin,Nama);
		cout<<"Tanggal Lahir:";
		getline	(cin,TanggalLahir);
		cout<<"Alamat:";
		getline(cin,Alamat);
		cout<<"Kampus:";
		getline (cin,Kampus);
		cout<<"Nomor Hp:";
		getline (cin,NomorHp);
		Anak_ke anak;
	    anak=Jocelinda;
        cout<< "Anak_ke: " << anak<<endl;
		
		cout<<"\n Jika input data sudah selesai maka tekan S"<< endl;
	
		karakter = getch();
			
	} else if ( karakter =='2'){
	
		system ("cls");
		cout << "=====BIODATA MAHASISWA=====\n\n";
		cout << "Nama: "<< Nama <<endl; 
		cout << "Tanggal Lahir"<< TanggalLahir<<endl; 
		cout << "Alamat:"<< Alamat<<endl; 
		cout << "Kampus:"<< Kampus<<endl;;
		cout << "Nomor Hp:"<< NomorHp<<endl;
		Anak_ke anak;
		anak=Jocelinda;
		cout<< "Anak_ke: " << anak;
		cout<<"\n DATA DIRI BERHASIL DITAMPILKAN"<<endl;
	
	}; 
	
		cout << "\n Silakan tekan tombol apa saja untuk keluar";
		karakter = getch (); 
		
	} while (checker!=0); //
 	return 0;
 }
	
	
	
	
	
	
