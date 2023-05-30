#include <iostream>
#include <iomanip>
#include <math.h>
//header

using namespace std;
int a;
char b;
float c,d;
//variable

void satu(){
    if (a<5){
    //identifikasi jika pilihan adalah
    //1-4 maka inputannya berjalan
        cout << "Bilangan Pertama  : ";
        cin >> c;
        cout << "Bilangan Kedua    : ";
        cin >> d;
    //inputan untuk menu 1-4
    }
    else if (a==5){
    //identifikasi jika pilihan adalah 5
        cout << "Bilangan : ";
        cin >> c;
        cout << "Pangkat  : ";
        cin >> d;
        //inputan untuk menu 5
    }
}

int main()
{
    lagi:
    //titik goto
    cout << "===Kalkulator===" << endl << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Perkalian" << endl;
    cout << "3. Pembagian" << endl;
    cout << "4. Pengurangan" << endl;
    cout << "5. Pangkat" << endl << endl;
    //tampilan menu
    cout << "Masukkan Pilihan : ";
    cin >> a;
    //inputan pilihan
    satu();
    //pemanggilan prosedur
    switch(a){
    //switch case untuk menu
    case 1:
    //case menu pertama
        cout << "Hasil Penjumlahan : " << c+d << endl;
        //tampilan dan kalkulasi
        break;
        //menghentikan jalannya case 1
    case 2:
    //case menu kedua
        cout << "Hasil Perkalian : " << c*d << endl;
        //tampilan dan kalkulasi
        break;
        //menghentikan jalannya case 2
    case 3:
    //case menu ketiga
        cout << setiosflags(ios::fixed);
        //menyalakan manipulator
        cout << "Hasil Pembagian : " << setprecision(2) << c/d << endl;
        //tampilan dan kalkulasi
        cout << resetiosflags(ios::fixed);
        //mematikan manipulator
        break;
        //menghentikan jalannya case 3
    case 4:
    //case menu keempat
        cout << "Hasil Pengurangan : "<< c-d << endl;
        //tampilan dan kalkulasi
        break;
        //menghentikan jalannya case 4
    case 5:
    //case menu kelima
        cout << "Hasil Perpangkatan : " << pow(c,d)<< endl;
        //tampilan dan kalkulasi dengan
        break;
        //menghentikan jalannya case 5
    default:
    //default untuk pemilihan tidak ada dalam menu
        cout << "Tidak terdapat dalam menu" << endl;
        //tampilan
        break;
        //untuk menghentikan jalannya default
    }
    cout << "\nLagi (y/t) :";
    cin >> b;
    //menanyakan apakah mau mengulang lagi
    if (b=='y'){
    //jika inputan b isinya y
        system("cls");
        //untuk menghapus seluruh tampilan
        goto lagi;
        //menuju ke titik yang di tentukan
    }
    return 0;
}
