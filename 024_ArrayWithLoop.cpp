#include <iostream>

using namespace std;

int main()
{
    int TabInt[10];
    //menambahkan array
    int i;
    //menambahkan variable untuk perulangan
    for (i=0; i<10; i++){
    //perulangan untuk menetapkan nilai dari
    //array
        TabInt[i]=i*10;
        //menetapkan nilai array
    }
    for (i=0;i<10;i++){
    //perulangan untuk menampilkan array
        cout << TabInt[i] << endl;
        //tampilan array
    }
    return 0;
}
