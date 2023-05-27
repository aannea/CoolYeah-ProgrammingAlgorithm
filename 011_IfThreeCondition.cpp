#include <iostream>

using namespace std;

int main()
{
    int bil;
    cout<<"Masukkan sebuah bilangan bulat yang akan diperiksa : ";
    cin>>bil;
    //identifikasi bilangan positif
    if(bil>0){
        cout<<bil<<" adalah bilangan POSITIF";
    }
    //identifikasi bilangan negatif
    else if(bil<0){
        cout<<bil<<" adalah bilangan NEGATIF";
    }
    //identifikasi 0
    else{
        cout<<"Anda memasukkan bilangan Nol";
    }
    return 0;
}
