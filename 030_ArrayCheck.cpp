#include <iostream>

using namespace std;

int main()
{
    int daftar[5]={1,2,3,4,5}, a, b=0, c=0;
    //variable untuk array dan perulangan
    cout << "Data yang tersedia : ";
    while (b<5){
        cout << daftar[b] << " ";
        b++;
    }
    cout << "\n\n";
    b=0;
    cout << "Masukkan bilangan : "; cin >> a;
    //tampilan dan inputan untuk nilai bilangan
    cout << "\n\n";
    //untuk memberi jarak
    while (b<5){
    //perulangan unuk mencari nilai berada pada array ke berapa
        if (daftar[b]==a){
        //identifikasi dimanakah array yang di maksud berada
            cout << "Bilangan anda tersimpan di urutan array ke " << b+1;
            //tampilan jika bilangan yang di maksud terdapat dalam array
            c++;
            //penambahan nilai variable c
        }
        b++;
        //penambahan nilai untuk perulangan
    }
    if (c==0){
    //percabangan yang digunakan untuk mengidentifikasi apakah
    //bilangan yang di maksud tidak ada dalam array
        cout << "bilangan yang di maksud tidak ada dalam array !";
        //tampilan untuk bilangan yang tidak terdapat dalam array
    }
    cout << "\n\n";
    //untuk memberi jarak
    return 0;
}
