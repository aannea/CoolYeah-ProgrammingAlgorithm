#include <iostream>

using namespace std;

int main()
{
    int a,b,c;//menambahkan variable
    cout << "Masukan Bilangan ke-1 \t: ";//tampilan
    cin >> a;//inputan
    cout << "Masukan Bilangan ke-2 \t: ";//tampilan
    cin >> b;//inputan
    c = a;//menetapkan nilai c sama dengan a
    do{//perulangan menggunakan do while
        c  = c + a;//kalkulasi
    }while (c % b !=0);//identifikasi perulangan
    cout << "KPK :  " << c << endl;//tampilan hasil
    return 0;
}
