#include <iostream>

using namespace std;

string isi(){
//fungsi untuk isi
    string h;
    //variable
    cout << "Input Plat nomer yang di cari :";
    //tampilan
    getline (cin,h);
    //input
    return h;
    //mengembalikan nilai
}

int sequential_search(int a, string b[], string c){
//fungsi untuk mencari
    int d, e, f;
    //variable
    if (a <= 0)
    //identifikasi variable a
        d = -1;
        //menetapkan variable d
    else {
    //identifikasi variable a
        f = 0;
        e = 0;
        //menetapkan variable
        while ((e < a -1) && ! f) {
        //perulangan untuk mencari
            if (b [e] == c) {
            //identifikasi array dengan yang dicari
                d = e;
                f = 1;
                //menetapkan variable
            }//punya if
            else {
            //identifikasi array dengan yang dicari
                e++;
                //menambahkan nilai untuk perulangan
            }//punya else
            if (!f) {
            //identifikasi ketemu
                d = -1;
                //menetapkan variable
            }//punya if
        }//punya perulangan
    }//punya else
    return d;
    //mengembalikan nilai d
}

void tampil(string c, int d){
//prosedur untuk menampilkan
    if(d != -1) {
    //identifikasi jika terdapat
        cout << "Plat nomor " << c << " terdapat dalam database" << endl;
    }
    else {
    //identifikasi jika tidak ada
        cout << "Plat nomor " << c << " tidak terdapat dalam database" << endl;
    }
}

int main()
{
    i:
    //goto
    char j;
    int a = 10;
    //variable
    string b[] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP", "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
    //array
    string c = isi();
    //variable
    cout << endl;
    //jarak
    int d = sequential_search(a, b, c);
    //memanggil pencarian
    tampil(c, d);
    //memanggil untuk tampil

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
