#include <iostream>

using namespace std;

void bubble_sort(string a[], int b) {
//prosedur untuk mengurutkan
    bool c = true;
    int d=0;
    string e;
    //variable

    while (c){
    //perulangan untuk mengurutkan
        c = false;
        //menetapkan nilai c menjadi false
        d++;
        //menambahkan nilai d
        for (int f=0;f<b-d;f++){
        //perulangan untuk seleksi
            if (a[f] > a[f+1]){
            //seleksi
                e =a[f];
                //nilai array di simpan pada e
                a[f] = a[f+1];
                //menukar nilai
                a[f+1]=e;
                //memasukkan kembali nilai yang di simpan
                //pada array selanjutnya
                c = true;
                //menetapkan nilai c
            }//punya if
        }//punya perulangan seleksi
    }//pynya perulangan mengurutkan
}//punya prosedur

void print_array(string a[],int b) {
//prosedur untuk menampilkan array
    for (int c=0;c<b;c++) {
    //perulangan untuk menampilkan
        cout << a[c] << "\t";
        //menampilkan array
    }//punya perulangan
    cout<<endl;
    //memberikan jarak
}//punya prosedur

int main()
{
    int b=10;
    //variable
    string a[b]= {"siti","situ","sana","ana","ani","caca","cici","dida","dodo","dadi"};
    //array
    cout << "Data nama 10 warga sebelum sorting : " << endl;
    //tampilan
    print_array(a, b);
    //memanggil prosedur untuk tampilan

    bubble_sort(a, b);
    //memanggil prosedur untuk mengurutkan

    cout << "\nData nama 10 warga sesudah sorting : " << endl;
    //tampilan
    print_array(a, b);
    //memanggil prosedur untuk tampilan
    return 0;
}
