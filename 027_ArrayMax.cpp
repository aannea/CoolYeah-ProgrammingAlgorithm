#include <iostream>

using namespace std;
int daftar_bilangan[10]={5,6,9,10,44,77,90,3,35,12};
//menambahkan array dan menetapkan nilainya

int main()
{
    int indeks; //variable untuk indeks petunjuk array
    int maks=0; //variable untuk menyimpan nilai maksimum
    for (indeks=0; indeks<10;indeks++){
    //perulangan untuk mencari nilai maksimum
        if (daftar_bilangan[indeks]>maks){
        //mencari nilai yang lebih besar
            maks=daftar_bilangan[indeks];
            //jika terdapat nilai yang lebih besar maka
            //akan di masukkan kedalam variable maks
        }
    }
    cout << "Nilai Maksimum : " << maks;
    //menampilkan hasil dari pencarian nilai maksimum
    return 0;
}
