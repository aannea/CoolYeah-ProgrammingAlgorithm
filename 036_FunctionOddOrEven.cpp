#include <iostream>

using namespace std;
int a;
char b;
string c;
string cari(int a){
//fungsi dengan parameter a
    if (a%2==1){
    //jika a di modulus dan bersisa 1 berarti ganjil
        c="Ganjil";
        //tampilan
    }
    else{
    //jika tidak termasuk di persyaratan sebelumnya
    //maka else berjalan
        c="Genap";
        //tampilan
    }
    return c;
}

int main()
{
    lagi:
    //titik goto
    cout << "Mencari bilangan ganjil dan genap" << endl;
    cout << "===========<<<<<=>>>>>===========" << endl << endl;
    //tampilan
    cout << "Masukkan bilangan : ";
    cin >> a;
    //inputan untuk bilangan
    cari(a);
    //memanggil fungsi
    cout << "Bilangan yang anda masukkan adalah : " << c;
    //tampilan hasil

    cout << "\n\nLagi (y/t) :";
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
