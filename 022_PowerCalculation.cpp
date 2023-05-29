#include <iostream>

using namespace std;

int main()
{
     int a, b, c, d;//memberi variable dan memasukkan ke integer
    cout << "Masukkan bilangan \t: ";//tampilan untuk meminta inputan
    cin >> a;//inputan
    cout << "Masukkan pencacah \t: ";//tampilan untuk meminta inputan
    cin >> b;//inputan
    d=a;//memasukkan nilai d sama dengan a, karena digunakan untuk kalkulasi
    for (c=1; c<b; c++){//perulangan untuk kalkulasi
        d=d*a;//kalkulasi
    }
    cout << "Hasil pangkat \t\t: " << d;//menampilkan hasil
    return 0;
}
