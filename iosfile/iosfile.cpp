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

	cout << "Menulis File, '\q' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "* ";
		// mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		// loop akan berhenti jika anda memasukkan karakter exit
		if (baris == "exit") break;
	}
}