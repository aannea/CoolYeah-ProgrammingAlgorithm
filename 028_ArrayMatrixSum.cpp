#include <iostream>

using namespace std;
int a[3][5]={{10,20,30,40,50},{1,2,3,4,5},{11,22,33,44,55}};
int b[3][5]={{10,20,30,40,50},{1,2,3,4,5},{11,22,33,44,55}};
//menambahkan array dan menetapkan nilainya
int c[3][5];
//menambahkan array
int x,y;
//menambahkan variable
//variable bersivat global
int main()
{
    cout << "Matriks A : " << endl;
    //tampilan untuk menandai matriks A
    for (x=0; x<=2; x++){
    //perulangan untuk baris
        for (y=0; y<=4; y++){
        //perulangan untuk kolom dan
        //menampilkan array
            cout << a[x][y] << " ";
            //menampilkan array
        }
        cout << endl;
        //untuk berpindah baris
    }
    cout << "Matriks B : " << endl;
    //tampilan untuk menandai matriks B
    for (x=0; x<=2; x++){
    //perulangan untuk baris
        for (y=0; y<=4; y++){
        //perulangan untuk kolom
            cout << b[x][y] << " ";
            //untuk menampilkan array
        }
        cout << endl;
        //untuk memindah baris
    }
    cout << endl << "Matriks Penjumlahan : " << endl;
    //tampilan untuk menandai penjumlahan
    for (x=0; x<=2; x++){
    //perulangan untuk baris
        for (y=0; y<=4; y++){
        //perulangan unuk kolom
            c[x][y]=a[x][y]+b[x][y];
            //menjumlahkan nilai array a dan b dan
            //dimasukkan dalam array c
            cout << a[x][y] << "+" << b[x][y] << "=" << c[x][y] << " ";
            //menampilkan array a + b dan hasilnya di array c
        }
        cout << endl;
        //untuk berpindah baris
    }
    return 0;
}
