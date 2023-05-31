#include <iostream>
#include <iomanip>

using namespace std;

void selectSort(double b[], int a) {
//prosedur untuk mengurutkan
    int c,e,f;
    double d;
    //variable
    for (e=0; e < a-1; e++) {
    //perulangan untuk banyaknya array
    c = e;
    //menetapkan nilai c sama dengan e
    for (f=e+1; f < a; f++) {
    //perulangan untuk menseleksi
        if (b[f] > b[c])
        //if utuk seleksi
            c=f;
            //penetapan nilai c sama dengan f
        }//punya for seleksi
    if (c != e) {
    //jika c bukan sama dengan e
    //maka akan terjadi pertukaran nilai array
        d = b[e];
        //array di tampung
        b[e] = b[c];
        //array di tukar
        b[c] = d;
        //nilai yang di tampung di masukkan lagi
    }//punya if pertukaran
    }//punya for banyak array
}//punya prosedur

void print_array(double b[],int a) {
//prosedur untuk menampilkan array
    int c;
    //variable
    for (c=0;c<a;c++) {
    //perulangan untuk menampilkan array
        cout << setiosflags(ios::fixed);
        //mengaktifkan manipulator
        cout << setprecision(1) << b[c] << "\t";
        //tampilan array
        cout << resetiosflags(ios::fixed);
        //mematikan manipulator
    }//punya perulangan
    cout<<endl;
    //memberikan jarak
}//punya prosedur

int main() {
    int a = 5;
    //variable
    double b[a] = {3.8,2.9,3.3,4.0,2.4};
    //array
    cout << "Nilai Indeks Prestasi Mahasiswa sebelum sorting : " << endl;
    //tampilan
    print_array(b, a);
    //memanggil prosedur untuk menampilkan array

    selectSort(b, a);
    //memanggil prosedur untuk melakukan pengurutan

    cout << "\nNilai Indeks Prestasi Mahasiswa setelah sorting : " << endl;
    //tampilan
    print_array(b, a);
    //memanggil prosedur untuk menampilkan array
    return 0;
}
