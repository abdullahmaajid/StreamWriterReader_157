#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	// membuka file dalam mode menulis.
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	// cara menulis agar tidak salah
	cout << "Tulis Apa Saja, jika ingin keluar ketik 'exit'" << endl;

	// unlimited loop untuk menulis
	while (true) {
		cout << " ";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// loop akan berhenti jika anda memasukkan karakter exit
		if (baris == "exit") break;
		
		// menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}

	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	// membuka file dalam mode membaca
	ifstream infile;
	// menunjuk ke sebuah file yang akan dibaca
	infile.open("contohfile.txt");

	cout << endl << "*Membuka dan Membaca File*" << endl;

	//jika file ada maka
	if (infile.is_open())
	{
		bool isifile = true;
		// melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
				// dan tampilkan disini
				cout << baris << '\n';
				isifile = false;
		}

		// tutup file tersebut setelah selesai
		infile.close();

		if (isifile)
		{
			cout << "Tidak ada character yang ditulis" << endl;
		}
	}
	// jika tidak ditemukan file maka akan menampilkan ini
	else cout << "unable to opened file";
	return 0;
}

