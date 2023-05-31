#include <iostream>

using namespace std;

void input(int a, char b[]){
//prosedur untuk mengisi nilai array
    int c=0;
    //variable
    while (c<a){
    //perulangan untuk menginput nilai array
    //secara berurutan
        cout << "Karakter Ke-"<<c+1<<" : ";
        //tampilan
        cin >> b[c];
        //memasukkan kedalam array
        c++;
        //menambah nilai c untuk perulangan
    }//punya perulangan
}//punya prosedur

void sortinga(int a, char b[]){
//prosedur untuk melakukan pengurutan pertama
    int c, d;
    char e;
    //variable
    c=1;
    //menetapkan nilai c sama dengan 1
    while (c<a){
    //perulangan sebanyak jumlah array
        d=c;
        //menetapkan nilai d sama dengan c
        while (d>0 && b[d] < b[d-1]){
        //perulangan sekaligus seleksi
            e=b[d];
            //nilai dari variable sekarang
            //ditampung dalam vaiable e
            b[d]=b[d-1];
            //menukar nilai array
            b[d-1]=e;
            //memasukkan nilai array yang
            //ditampung ke dalam array sebelumnya
            d--;
            //mengurangi nilai dari d
        }//punya perulangan
        c++;
        //menambah nilai dari c
    }//punya perulangan banyak array
}//punya prosedur

void sortingb(int a, char b[]){
    //prosedur untuk melakukan pengurutan pertama
    int c, d;
    char e;
    //variable
    c=1;
    //menetapkan nilai c sama dengan 1
    while (c<a){
    //perulangan sebanyak jumlah array
        d=c;
        //menetapkan nilai d sama dengan c
        while (d>0 && b[d] > b[d-1]){
        //perulangan sekaligus seleksi
            e=b[d];
            //nilai dari variable sekarang
            //ditampung dalam vaiable e
            b[d]=b[d-1];
            //menukar nilai array
            b[d-1]=e;
            //memasukkan nilai array yang
            //ditampung ke dalam array sebelumnya
            d--;
            //mengurangi nilai dari d
        }//punya perulangan
        c++;
        //menambah nilai dari c
    }//punya perulangan banyak array
}//punya prosedur

void tampilan(int a, char b[]){
//prosedur untuk tampilan
    int c=0;
    //variable
    while (c<a){
    //perulangan untuk menampilkan array
        cout << b[c] << "\t";
        //menampilkan array
        c++;
        //menambahkan nilai c
    }//punya perulangan
    cout << "\n\n";
    //memberi jarak
}

int main()
{
    int a;
    //variable
    cout << "Input (n) = ";
    cin >> a;
    //meminta untuk jumlah array
    char b[a];
    //array
    input(a,b);
    //memanggil inputan array
    cout << "Urutan karakter sebelum sorting : " << endl;
    //tampilan
    tampilan(a,b);
    //memanggil prosedur tampilan array sebelum di urutkan

    sortinga(a,b);
    //memanggil prosedur untuk mengurutkan array yang pertama

    cout << "Urutan karakter setalah ascending sort : " << endl;
    //tampilan
    tampilan(a,b);
    //memanggil prosedur tampilan array sesudah di urutkan

    sortingb(a,b);
    //memanggil prosedur untuk mengurutkan array yang kedua
    cout << "Urutan karakter setelah descending sort : " << endl;
    //tampilan
    tampilan(a,b);
    //memanggil prosedur tampilan array sesudah di urutkan
    return 0;
}
