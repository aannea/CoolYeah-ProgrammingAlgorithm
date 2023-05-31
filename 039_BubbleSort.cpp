#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length) {
//prosedur bublesort
    bool not_sorted = true;
    int j=0;
    double tmp;
    //variable yang ada dalam prosedur

    while (not_sorted){
    //perulangan untuk menjalankan identifikasi
    //sekaligus penukaran nilai dari array sesuai
    //jumlah array
        not_sorted = false;
        //mengubah variable not sorted ke false
        //untuk menghentikan perulangan
        j++;
        //untuk menambah nilai j
        for (int i=0;i<length-j;i++){
        //perulangan untuk mengidentifikasi
        //setiap dua array
            if (arr[i] > arr[i+1]){
            //membandingkan eleman array yang
            //sekarang dengan yang berikutnya
                tmp =arr[i];
                //menyimpan nilai array yang sekarang
                //di dalam variable tmp
                arr[i] = arr[i+1];
                //mengubah nilai array yang sekarang dengan
                //array yang berikutnya
                arr[i+1]=tmp;
                //menetapkan nilai array yang berikutnya
                //dengan nilai yang ada dalam tmp
                not_sorted = true;
                //mengubah nilai not sorted menjadi true
                //agar perulangan berulang lagi
            }//punya if
        }//punya for
    }//punya while
}//punya prosedur

void print_array(double a[],int length) {
//prosedur untuk tampilan
    for (int i=0;i<length;i++) {
    //peruangan untuk menampilkan array
        cout << a[i] << "\t";
        //tampilan array
    }//punya for
    cout<<endl;
    //untuk memberi jarak
}//punya prosedur

int main()
{
    int length=5;
    //variable
    double a[length]= {22.1, 15.3, 8.2, 33.21, 99.99};
    //array
    cout << "Urutan bilangan sebelum sorting : " << endl;
    //tampilan
    print_array(a, length);
    //memanggil prosedur untuk menampilkan array

    bubble_sort(a, length);
    //memanggi prosedur untuk melakukan sort

    cout << "\nUrutan bilangan sesudah sorting : " << endl;
    //tampilan
    print_array(a, length);
    //memanggil prosedur untuk menampilkan array
    return 0;
}
