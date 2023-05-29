#include <iostream>

using namespace std;
string bulan[] = {"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
//menambahkan array dan menetapkan nilai dari array nya
int masukkan;
//menambahkan variable untuk input
int main()
{
    cout << "Masukan nomor bulan : ";
    //tampilan
    cin >> masukkan;
    //inputan
    cout << "Bulan yang anda masukkan adalah : " << bulan[masukkan-1];
    //tampilan, menampilkan hasil inputan dengan isi array
    return 0;
}
