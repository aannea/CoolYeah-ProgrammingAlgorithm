#include <iostream>

using namespace std;

int main() {
    int bilangan; //bilangan dimasukkan dalam variable integer
    char karakter; //karakter dimasukkan dalam variable character
    string kata; // kata dimasukkan dalam variable string

    cout << "Inputkan bilangan : ";
    cin >> bilangan; // penginputan nilai dari bilangan
    cout << "Inputkan karakter : ";
    cin >> karakter; // penginputan karakter
    cout << "Inputkan kata : ";
    cin >> kata; // penginputan kata

    cout << endl << "Data yang Anda inputkan adalah : " << endl; //akan menampilkan dari inputan yang tadi di isi
    cout << bilangan << endl; // menampilkan hasil inputan bilangan
    cout << karakter << endl; // menampilkan hasil inputan karakter
    cout << kata << endl; // menampilkan hasil inputan kata

    return 0;
}
