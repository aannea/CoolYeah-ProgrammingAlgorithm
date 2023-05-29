#include <iostream>

using namespace std;

int main()
{
    int a[3][3]={{3,8,5},{4,3,8},{9,3,5}};
    int b[3][3]={{8,4,5},{9,3,7},{2,5,3}};
    int c[3][3]={{2,2,5},{2,3,2},{4,4,8}};
    int d[3][3]={{7,9,5},{9,7,3},{7,4,2}};
    int e[3][3],f[3][3], g, h, i;
    //menambahkan array dan variable

    cout << "=======Matrix=======" << endl;
    cout << "<<<<<<<<<<>>>>>>>>>>" << endl;
    cout << "1. Penjumlahan Matrix" << endl;
    cout << "2. Pengurangan Matrix" << endl;
    cout << endl;
    //tampilan menu

    cout << "Pilih menu : "; cin >> g;
    //inputan untuk memilih menu
    switch(g){
    //untuk mengidentifikasi menu yang di input
    case 1:
    //kasus 1 atau menu 1
        cout << "Matrix A" << endl;
        //tampilan matrix a
        h=0;
        //menetapkan nilai variable h untuk perulangan
        while (h<3){
        //perulangan untuk baris
            i=0;
            //menetapkan nilai i untuk kolom
            while (i<3){
            //perulangan untuk kolom
                cout << a[h][i] << " ";
                //menampilkan array
                i++;
                //menambah nilai i dalam perulangan baris
            }
            h++;
            //menambah nilai h untuk perulangan baris
            cout << endl;
            //untuk memindahkan baris
        }
        h=0;
        //menetapakan nilai matrix b
        cout << "Matrix B" << endl;
        //tampilan matrix b
        while (h<3){
        //perulangan untuk baris
            i=0;
            //menetapkan nilai i untuk perulangan kolom
            while (i<3){
            //perulangan untuk kolom
                cout << b[h][i] << " ";
                //tampilan array b
                i++;
                //menambahkan nilai i untuk perulangan kolom
            }
            h++;
            //menambah nilai h untuk perulangan baris
            cout << endl;
            //untuk memindahkan baris
        }
        h=0;
        //menetapkan nilai h untuk perulangan
        cout << "Matrix Pertambahan" << endl;
        //tampilan matrix pertambahan
        while (h<3){
        //perulangan untuk baris
            i=0;
            //menetapkan nilai i untuk perulangan kolom
            while (i<3){
            //perulangan untuk kolom
                e[h][i]=a[h][i]+b[h][i];
                //penambahan array a + b =c
                cout << e[h][i] << " ";
                //tampilan hasil dari penambahan
                i++;
                //penambahan nilai untuk perulangan kolom
            }
            h++;
            //penambahan nilai untuk perulangan baris
            cout << endl;
            //untuk memindahakn baris
        }
        break;
        //untuk menandai bahwa script case 1 hanya sampai di sini
    case 2:
    //case 2 atau menu 2
        cout << "Matrix C" << endl;
        //tampilan untuk matrix C
        h=0;
        //menetapkan nilai h untuk perulangan
        while (h<3){
        //perulangan untuk baris
            i=0;
            //menetapkan nilai i untuk perulangan kolom
            while (i<3){
            //perulangan untuk kolom
                cout << c[h][i] << " ";
                //tampilan array c
                i++;
                //menambahkan nilai i untuk perulangan kolom
            }
            h++;
            //menambahkan nilai h untuk perulangan baris
            cout << endl;
            //memindahkan baris
        }
        h=0;
        //menetapkan nilai h untuk perulangan baris
        cout << "Matrix D" << endl;
        //tampilan matrix d
        while (h<3){
        //perulangan untuk baris
            i=0;
            //menetapkan nilai i untuk perulangan kolom
            while (i<3){
            //perulangan untuk kolom
                cout << d[h][i] << " ";
                //tampilan array d
                i++;
                //menambahkan nilai i untuk perulangan kolom
            }
            h++;
            //menambahkan nilai h untuk perulangan baris
            cout << endl;
            //mindahin baris
        }
        h=0;
        //menetapkan nilai h untuk perulangan baris
        cout << "Matrix Pengurangan" << endl;
        //tampilan
        while (h<3){
        //perulangan untuk baris
            i=0;
            //menetapkan nilai untuk kolom
            while (i<3){
            //perulangan untuk kolom
                f[h][i]=c[h][i]-d[h][i];
                //pengunrangan untuk array f=c-d
                cout << f[h][i] << " ";
                //menampilkan hasil pengurangan
                i++;
                //menambahkan nilai i untuk perulangan kolom
            }
            h++;
            //menambahkan nilai h untuk perulangan baris
            cout << endl;
            //memindahkan baris
        }
        break;
        //untuk menandai case 2 atau menu 2 hanya sampai sini
    default:
    //jika memilih yang tidak ada dalam menu
        cout << "Tidak Valid!";
        //akan menampilkan tidak valid
        break;
    }
    return 0;
}
