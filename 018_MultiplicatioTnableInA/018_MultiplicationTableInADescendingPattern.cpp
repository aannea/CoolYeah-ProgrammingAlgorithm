#include <iostream>

using namespace std;

int main()
{
    int a, b;//memasukkan variable a dan b kedalam integer
    a=10; //menetapkan nilai dari a

    while (a>=1){//perulangan menggunakan while
        b=1;//menetapkan nilai b
        while (b<=a){//perulangan menggunakan while
            cout << b*a << " ";//tampilan dan kalkulasi
            b++;//penambahan nilai dari b
        }
        cout << endl;
        a--;//pengurangan nilai dari a
    }
    return 0;
}
