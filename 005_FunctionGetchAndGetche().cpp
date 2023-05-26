#include <iostream> 
#include <conio.h>

using namespace std;

int main() {
    char karakter; //karakter dimasukkan sebagai variable character

    cout << "Masukkan sebuah karakter : ";
    karakter = getch(); //fungsinya agar tidak menampilkan karakter dari tombol yang ditekan
    cout << endl << "Hasil fungsi getch " << karakter << endl;

    cout << "Masukkan sebuah karakter : ";
    karakter = getche(); //fungsinya agar menampilkan karakrer dari tombol yang ditekan
    cout << endl << "Hasil fungsi getche " << karakter << endl;
    return 0;
}
