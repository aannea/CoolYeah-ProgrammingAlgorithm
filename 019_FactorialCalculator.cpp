#include <iostream>

using namespace std;

int main()
{
    int bil;//memasukkan variable bil pada integer
    long faktorial = 1; //memasukkan variable faktorial kedalam long
                        //dan menetapkan nilainya

    cout << "Masukkan bilangan yang akan dihitung : ";//tampilan
    cin >> bil;//inputan

    cout << bil <<"! = ";//tampilan
    while (bil>=1){//perulangan menggunakan while
        faktorial *= bil;//kalkulasi
        if (bil!=1){//percabangan
            cout << bil <<" x ";//tampilan
        }
        else{//percabangan
            cout << bil <<" = ";//tampilan
        }
        bil--;//pengunrangan nilai bil
    }
    cout << faktorial;//menampilkan nilai faktorial
    return 0;
}
