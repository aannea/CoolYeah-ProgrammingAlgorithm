#include <iostream>

using namespace std;
int jml_huruf;
//variable global
int main()
{
    int matriks[2][4]={{1,2,3,4,},{5,6,7,8}};
    //menambahkan array dan menetapkan nilainya
    int baris, kolom;
    //menambahkan variable baris dan kolom untuk
    //perulangan
    for (baris=0;baris<2;baris++){
    //perulangan untuk baris
        for (kolom=0;kolom<4;kolom++){
        //perulangan untuk menampilkan kolom
            cout << matriks[baris][kolom] << " ";
            //menampilkan array
        }
        cout << endl;
        //untuk memindahkan baris
    }
    return 0;
}
