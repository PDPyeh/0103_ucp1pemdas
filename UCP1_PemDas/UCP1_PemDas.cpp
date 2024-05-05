
#include <iostream>
using namespace std;


string kota1, kota2, status;

void input() {
	cout << "Masukan Nama Kota Pertama : ";
	cin >> kota1;
	cout << "Masukan Nama Kota Kedua : ";
	cin >> kota2;
}

void Kualitasudara() {
	
	
	int x1, x2;

	cout << "kualitas udara 1: " << endl;
	cin >> x1;
	cout << "Kualitas udara 2: " << endl;
	cin >> x2;
		//x1 = rand() % 100;
		//x2 = rand() % 100;

	if (x1 >= 75) {
		status = "Sehat";
	}
	else if (x2 >= 75) {
		status = "Sehat";
	}
	else {
		status = "Tidak Sehat";
	}

}

void display() {
	cout << "Kota 1 : " << kota1 << endl;
	cout << "status : " << status << endl;
	cout << "kota 2 : " << kota2 << endl;
	cout << "status : " << status << endl;
}


int main() {
	
	char pilihan;
	do {
		input();
		Kualitasudara();
		display();

		cout << "Apakah ingin mengulanginya lagi(y/n)";
		cin >> pilihan;

		system("cls");

	}

	while (pilihan == 'y' || pilihan == 'Y');


}

// 1. contoh deklarasi variable : 
//	  int i; 
//	  float nPemdas, nMTK;
//	  string nama;
//
// 2. contoh implementasi prosedur dan fungsi
//    prosedur seperti void dan fungsi integer main
//	  
//
// 3. contoh implementasi dari looping
//    kita bisa menggunakan fungsi do while untuk me-looping code seperti
//	  do{
//		cout ingin mengulanginya lagi?(y/n)
//		cin pilihan
//	  }
//	  while (pilihan=='Y'||pilihan=='y')
// 
// 4. contoh implementasi conditional statement
//	  jika kita ingin membuat sebuah program membagi ganjil genap,
//	  kita bisa menggunakan fungsi if ganjil else genap  
// 
// 5. contoh implementasi struct
//	  jika kita ingin membuat data yang detail
//	  kita bisa menggunakan struct 


