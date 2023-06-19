#include <iostream>
#include <exception>
// untuk obyek exeption yang akan digunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; // penanda 1
	try {
		array<int, 3> data = { 1,2,3 };
		// pesan array dengan integer 3 element
		cout << data.at(4) << endl;
		// memanggil array elemen ke-4
	}
	catch (exception& e) {
		// penangkap menggunakan obyek exception
		cout << e.what() << endl;
		// akan dieksekusi karena array data hanya memiliki 3 element
	}
	return 0;
}
