#include <iostream>

using namespace std;

void tampil(int a, int b[]){
//prosedur tampil
    int c=0;
    //variable
    while(c<a){
    //perulangan menampilkan
        cout << b[c] << "\t";
        c++;
    }
    cout << "\n\n";
}

void bubble_sort(int a, int b[]) {
//prosedur untuk mengurutkan
    bool c = true;
    int d=0;
    int e;
    //variable
    while (c){
    //perulangan untuk mengurutkan
        c = false;
        //menetapkan nilai c menjadi false
        d++;
        //menambahkan nilai d
        for (int f=0;f<a-d;f++){
        //perulangan untuk seleksi
            if (b[f] > b[f+1]){
            //seleksi
                e =b[f];
                //nilai array di simpan pada e
                b[f] = b[f+1];
                //menukar nilai
                b[f+1]=e;
                //memasukkan kembali nilai yang di simpan
                //pada array selanjutnya
                c = true;
                //menetapkan nilai c
            }//punya if
        }//punya perulangan seleksi
    }//pynya perulangan mengurutkan
}//punya prosedur

int isi(){
//fungsi untuk input
    int h;
    cout << "Masukkan Angka yang ingin di cari :";
    cin >> h;
    return h;
    //mengembalikan nilai inputan
}

int function_binary_search (int a, int b[], int c) {
//fungsi untuk search
    int d, e, f, g;
    bool h;
    //variable
    h = false;
    e = 0;
    f = a - 1;
    d = -1;
    //menetapkan variable
    while (e <= f) {
    //perulangan jika e kurang dari atau sama dengan f
        g = (f + e)/2;
        if (c == b[g]) {
        //identifikasi jika ada
            d = g;
            break;
        }
        else if(c < b[g]) f = g - 1;
        else if(c > b[g]) e = g + 1;
        //identifikasi
    }
    return d;
    //mengembali nilai d
}

void tampil(int c, int d){
//prosedur untuk menampilkan
    if(d != -1) {
    //identifikasi jika ada
        cout << "Angka " << c << " terdapat dalam daftar" << endl;
    }
    else {
    //identifikasi jika tidak ada
        cout << "Angka " << c << " tidak terdapat dalam daftar" << endl;
    }
}

int main(){
    i:
    //goto
    char j;
    int a = 10;
    //variable
    int b[] = {21, 61, 28, 72, 44, 68, 37, 52, 75, 75};
    //array
    cout << "Bilangan sebelum di urutkan :" << endl;
    tampil(a,b);
    //memanggil prosedur
    bubble_sort(a,b);
    //memanggil pengurutan
    cout << "Bilangan sesudah di urutkan :" << endl;
    tampil(a,b);
    //memanggil prosedur
    int c = isi();
    //memanggil inputan
    int d = function_binary_search(a,b,c);
    //memanggil pencarian
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
