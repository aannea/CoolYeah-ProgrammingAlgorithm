#include <iostream>

using namespace std;

int main() {
    int angka; //angka dimasukkan dalam variable integer
    char karakter; //karakter dimasukkan dalam variable character
    string kata; // kata dimasukkan dalam variable string

    cout << "Inputkan angka : ";
    cin >> angka; // penginputan nilai dari angka
    cout << "Inputkan karakter : ";
    cin >> karakter; // penginputan karakter
    cout << "Inputkan kata : ";
    cin >> kata; // penginputan kata

    cout << endl << "Hasil inputan adalah : " << endl; //akan menampilkan dari inputan yang tadi di isi
    cout << hex << angka << endl; // menampilkan hasil inputan angka
    cout << karakter << endl; // menampilkan hasil inputan karakter
    cout << kata << endl; // menampilkan hasil inputan kata

    return 0;
}
