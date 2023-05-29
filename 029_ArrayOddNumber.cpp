#include <iostream>

using namespace std;

int main()
{
    int bil[5], a, b=0;
    // variable array, variable untuk perulangan
    //dan variable untuk mengidentifikasi apakah
    //ada nilai ganjil
    a=0;
    //menetapkan nilai variable a menjadi 0
    while (a<5){
    //perulangan untuk menginput
        cout << "Masukkan bilangan " << a+1 << " : ";
        cin >> bil[a];
        //memasukkan nilai dari setiap variable array
        a++;
        //menambahkan nilai untuk perulangan
    }
    cout << "Bilangan yang ganjil adalah" << endl;
    //menampilkan
    a=0;
    //menetapkan nilai variable a menjadi 0
    while (a<5){
    //perulangan untuk mengambil nilai dari array
    //yang bernilai ganjil
        if (bil[a]%2==1){
        //mencari nilai mana saja yang bernilai ganjil
            cout << bil[a] << endl;
            //jika nilainya ganjil maka akan langsung di tampilkan
            b=b+1;
        }
        a++;
        //menambahkan nilai untuk perulangan
    }
    if (b==0){
    //identifikasi apakah tidak terdapat bilangan ganjil
        cout << "Tidak ada nilai ganjil";
    }
    return 0;
}
