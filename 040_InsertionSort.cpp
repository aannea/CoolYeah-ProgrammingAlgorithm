#include <iostream>

using namespace std;

void insertion_sort(char arr[], int length) {
//prosedur untuk mengurutkan
    int i,j;
    char tmp;
    //variable

    for (i = 1;i<length;i++) {
    //perulangan untuk pengecekan
        j=i;
        //menetapkan nilai j sama dengan j
        while (j>0 && arr[j-1]<arr[j]) {
            //perulangan sekaligus identifikasi
            tmp =arr[j];
            //nilai dari array sekarang di tampung
            //dalam variable tmp
            arr[j] =arr[j-1];
            //menetapkan nilai array sekarang
            //dengan nilai yang ada dalam array
            //sebelumnya
            arr[j-1]=tmp;
            //menetapkan nilai array sebelumnya
            //dengan nilai yang terdapat dakalm tmp
            j--;
            //pengurangan nilai variable j
            //untuk perulangan while
        }//punya while
    }//pynya for
}//punya prosedur

void print_array(char a[],int length) {
//prosedur untuk menampilkan array
    for (int i=0;i<length;i++) {
    //perulangan untuk menampilkan array
        cout << a[i] << "\t";
        //menampilkan
    }//punya for
    cout<<endl;
    //untuk emberikan jarak
}//punya prosedur

int main()
{
    int length=6;
    //variable untuk isi dari array
    char a[length]= {'c','f','a','z','d','p'};
    //array sekaligus menetapkan nilainya
    cout << "Urutan karakter sebelum sorting : "<< endl;
    print_array(a,length);
    //untuk menampilkan array sebelum di urutkan

    insertion_sort(a, length);
    //untuk memanggil prosedur mengurutkan

    cout << "\nUrutan karakter sesudah sorting : " << endl;
    print_array(a,length);
    //untuk meampilkan array setelah di urutkan
    return 0;
}
