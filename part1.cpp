//! STRUKTUR DASAR C++
//? g++ part1.cpp -o part1
//? ./part1
//todo | Link VIDEO https://www.youtube.com/watch?v=hun49uW2rjM
#include <iostream> 
// untuk memanggil std::cout, std::endl
using namespace std; 
// untuk mempersingkat kode 
// jadi di depan cout tidak perlu lg menambahkan std::

int main() {
    int a = 0; // tipe data integer (nilai default 0)
    int b = 0; // tipe data integer (nilai default 0)
    cout << "masukkan angka pertama: " << endl; // pertanyaan
    cin >> a; // input angka pertama
    cout << "masukkan angka kedua: " << endl; // pertanyaan
    cin >> b; // input angka kedua
    cout << a+b << endl; // expresi aritmatika
}
//! Notes:
//todo 1. Setiap code harus diakhiri dengan titik koma (;).
//todo 2. Komentar diawali dengan // untuk komentar satu baris atau diapit dengan /* dan */ untuk komentar multi-baris.
//todo Komentar adalah catatan/code yg tidak akan dieksekusi oleh compiler.
//todo 3. Fungsi utama program adalah main(), di mana eksekusi program dimulai.
//todo 4. Header <iostream> diperlukan untuk input dan output