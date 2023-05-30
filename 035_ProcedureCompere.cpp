#include <iostream>

using namespace std;

int bil1,bil2 ;
//variable global
void banding(int a, int b){
//prosedur
    if (a>b){
    //identifikasi jika bilangan 1 leibh besar
        cout << a;
        //tampilan
    }
    else if (a==b){
    //identifikasi jika bilangan sama
        cout << "Tidak ada";
        //tampilan
    }
    else {
    //identifikasi jika persyaratan sebelumnya tidak terpenuhi
        cout << b;
        //tampilan
    }
}

int main()
{
    cout << "Masukkan Bilangan 1 : ";
    cin >> bil1;
    cout << "Masukkan Bilangan 2 : ";
    cin >> bil2;
    //inputan
    cout << "Bilangan yang leibh besar adalah : ";
    //tampilan
    banding(bil1, bil2);
    //pemanggilan prosedur
    return 0;
}
