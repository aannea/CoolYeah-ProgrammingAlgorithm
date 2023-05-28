#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;//memasukkan variable a, b, c,d kedaalam integer
    cout << "Masukkan bilangan pertama  : "; cin >> a;//tampilan dan inputan
    cout << "Masukkan bilangan kedua    : "; cin >> b;//tampilan dan inputan

    if (a < b){//percabangan
        c = a;//perubahan nilai c menjadi a
        a = b;//perubahan nilai a menjadi b
        b = c;//perubahan nilai b menjadi c
    }

    do{//perulangan menggunakan do
        d = a%b;//pengubahan nilai d menjadi a%b
        a = b;//perubahan nilai a menjadi b
        b = d;//perubahan nilai b menjadi d
    }while (d !=0);//indentifikasi nilai dalam perulangan

    cout <<"\nFaktor persekutuan terbesar = "<< a;//tampilan hasil
    return 0;
}
