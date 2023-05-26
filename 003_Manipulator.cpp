#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Baris ini tanpa endl."; //jika tanpa endl maka tampilan berikutnya masih di tampilkan di baris yang sama
    cout << "Manipulator endl" << endl; // jika menggunakan endl maka tampilan berikutnya berpindah ke bawah
    cout << dec << 10 << endl; // menampilkan nilai desimal dari 10
    cout << hex << 10 << endl; // menampilkan nilai hexadesimal dari 10
    cout << oct << 10 << endl; // menampilkan nilai oktal dari 10

    cout << setiosflags(ios::fixed); //fungsi manipulator yang digunakan untuk mengatur sejumlah format keluaran data. ios::fixed digunakan untuk mengatur keluaran alam bentuk notasi desimal
    cout << setprecision(4) << 123.4567891 << endl; //fungsi manipulator yang digunakan untuk mengatur jumlah digit desimal

    return 0;
}
