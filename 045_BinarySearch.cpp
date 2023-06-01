#include <iostream>

using namespace std;

int function_binary_search (char data [], int n, char k) {
//fungsi
    int atas, bawah, tengah, posisi;
    bool ada;
    //variable
    ada = false;
    bawah = 0;
    atas = n - 1;
    posisi = -1;
    //menetapkan nilai
    while (bawah <= atas) {
    //perulangan untuk mencari
        tengah = (atas + bawah)/2;
        //menetapkan nilai tengah
        if(k == data[tengah]) {
        //identifikasi yang dicari dengan array
            posisi = tengah;
            //menetapkan variable posisi
            break;
            //membatasi sc
        }
        else if(k < data[tengah]) atas = tengah - 1;
        else if(k > data[tengah]) bawah = tengah + 1;
        //identifikasi
    }//punya while
    return posisi;
    //mengembalikan nilai posisi
}//punya prosedur

int main()
{
    int n = 7;
    //variable
    char data[] = {'a', 'b', 'c', 'e', 'g', 'h', 'j'};
    //array
    char k = 'c';
    //variable
    int posisi = function_binary_search(data, n, k);
    //memanggil pencarian
    if(posisi != -1) {
    //identifikasi jika ada
        cout << "kunci " << k << " ditemukan pada posisi indeks ke-" << posisi << endl;
        //tampilan
    }//punya if
    else {
    //identifiksi jika tidak ada
        cout << "kunci " << k << " tidak ditemukan" << endl;
        //tampilan
    }//punya else
    return 0;
}
