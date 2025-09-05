#include <iostream>
using namespace std;

int main() {
    string db = "richie";
    string user = ""; // nilai default string adalah ""
    cout << "masukkan username: " << endl;
    cin >> user; // input username

    if (user == db) {
        cout << "login berhasil" << endl;
    } else {
        cout << "login gagal" << endl;
    }
    cout << "akhir dari program" << endl;
}