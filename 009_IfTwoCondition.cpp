#include <iostream>

using namespace std;

int main()
{
    int bilangan;

    cout<<"Masukkan bilangan bulat yang akan diperiksa : ";
    cin >>bilangan;

    //melakukan pengecekan apakah bilangan yang dimasukkan
    //habis dibagi dua atau tidak
    if(bilangan%2==0){
        cout<<bilangan<<" adalah bilangan genap";
    }
    else{
        cout<<bilangan<<" adalah bilangan ganjil";
    }
    return 0;
}
