#include <iostream>

using namespace std;

int isi(){
//fungsi untuk input
    int h;
    cout << "Masukkan NIM yang ingin di cari :";
    cin >> h;
    return h;
    //mengembalikan nilai
}

int function_binary_search (int a, int b[], int c) {
//fungsi untuk mencari
    int d, e, f, g;
    bool h;
    //variable
    h = false;
    e = 0;
    f = a - 1;
    d = -1;
    //menetapkan variable
    while (e <= f) {
    //perulangan jika e kurang dari atau sama dengan  f
        g = (f + e)/2;
        if (c == b[g]) {
        //identifikasi jika ada
            d = g;
            break;
        }
        else if(c < b[g]) f = g - 1;
        else if(c > b[g]) e = g + 1;
        //identifiasi
    }
    return d;
    //mengembalikan nilai d
}

void tampil(int c, int d){
//prosedur untuk menampilkan
    if(d != -1) {
    //identifikasi jika ada
        cout << "NIM " << c << " terdapat dalam kelas" << endl;
    }
    else {
    //identifikasi jika tidak ada
        cout << "NIM " << c << " tidak terdapat dalam kelas" << endl;
    }
}
int main()
{
    i:
    //goto
    char j;
    int a = 13;
    //variable
    int b[] = {12102001, 12102002, 12102003, 12102004, 12102005, 12102006, 12102007, 12102008, 12102009, 12102010, 12102011, 12102012, 12102013};
    //array
    int c = isi();
    //memanggil fungsi untuk input
    int d = function_binary_search(a,b,c);
    //memanggil fungsi untuk mencari
    tampil(c, d);
    //memanggil prosedur

    cout << "\nLagi (y/t) :";
    cin >> j;
    //menanyakan apakah mau mengulang lagi
    if (j=='y'){
    //jika inputan b isinya y
    system("cls");
    //untuk menghapus seluruh tampilan
    goto i;
    //menuju ke titik yang di tentukan
    }
    return 0;
}
