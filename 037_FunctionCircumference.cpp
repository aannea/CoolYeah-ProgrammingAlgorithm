#include <iostream>
#include <iomanip>
//header

using namespace std;
float a;
char b;
//variable global
float hitung_keliling(float a){
//fungsi keliling dengan parameter a
    return (2*22*a)/7;
    //kalkulasi
}
float hitung_luas(float a){
//fungsi luas dengan parameter a
    return (22*a*a)/7;
    //kalkulasi
}
int main()
{
    lagi:
    //titik goto
    cout << "Program hitung keliling dan luas Lingkaran" << endl;
    cout<<"===========<<<<<<<<<<>>>>>>>>>>==========="<<endl<<endl;
    //tampilan judul
    cout << "Masukkan Jari-jari : ";
    cin >> a;
    //inpuan untuk jari jari
    cout << setiosflags(ios::fixed);
    //manipulator
    cout <<"Keliling :"<<setprecision(2)<<hitung_keliling(a)<<endl;
    //output keliling dengan 2 digit dibelakang koma
    cout << "Luas     :" << setprecision(2) <<hitung_luas(a)<<endl;
    //output luas dengan 2 digit di belakang koma

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
