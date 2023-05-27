#include <iostream>

using namespace std;

int main()
{
    int nilai;

    //memberikan informasi agar user memasukkan
    //sebuah bilangan bulat
    cout << "Masukkan sebuah bilangan bulat : ";

    //membaca nilai yang dimasukkan dari keyboard
    //dan disimpan ke variabel nilai
    cin>>nilai;

    //menampilkan sebuah teks
    //jika nilai yang tersimpan
    //lebih besar dari nol
    if(nilai>0)
        cout<<"Nilai yang anda masukkan adalah bilangan positif";
    return 0;
}
