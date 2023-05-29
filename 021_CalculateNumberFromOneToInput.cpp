#include <iostream>

using namespace std;

int main()
{
    int a, b, c=0, d;//memasukkan variable kedalam integer
    cout <<"Masukan bilangan : ";//tampilan untuk inputan
    cin >> a;//inputan

    for (b=1;b<=a;b++) {//perulangan untuk kalkulasi
        c=c+b;//kalkulasi
    }
    cout << "Total Nilai" <<" = ";//tampilan
    for (d=a;d>1;d--) {//perulangan untuk tampilan
        cout <<d<< " + ";//tampilan
    }
    cout << "1 = " <<c;//tampilan hasil
 return 0;
}
