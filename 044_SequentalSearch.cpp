#include <iostream>

using namespace std;

int sequential_search(double data [], int n, double k) {
//fungsi untuk mencari
    int posisi, i, ketemu;
    //variable
    if (n <= 0)
    //identifikasi nilai dari n
        posisi = -1;
        //menetapkan nilai dari posisi
    else {
    //identifikasi identifikasi n
        ketemu = 0;
        //menetapkan nilai ketemu
        i = 1;
        //menetapkan nilai i
        while ((i < n -1) && ! ketemu) {
        //perulangan sekaligus identifiksi
        //nilai variable ketemu
            if (data [i] == k) {
            //identifikasi array dengan yang di cari
                posisi = i;
                //menetapkan variable posisi
                ketemu = 1;
                //menetapkan variable ketemu
            }//punya if
            else {
            //identifikasi array
                i++;
                //menambahkan untuk perulangan
            }
            if (!ketemu) {
            //identifikasi jika ketemu
                posisi = -1;
                //menetapkan variable posisi
            }//punya if
        }//punya while
    }//punya else
    return posisi;
    //mengembalikan nilai posisi
}//punya prosedur

int main()
{
    int n = 7;
    //variable
    double data[] = {1.3, 0.9, 3.2, 2.1, 5.8, 7.7, 9.2};
    //array
    double k = 0.9;
    //variable
    int posisi = sequential_search(data, n, k);
    //memanggil prosedur sekaligus menetapkan nilai posisi
    if(posisi != -1) {
    //identifikasi menampilkanjika ada nilai array yang dicari
        cout << "kunci " << k << " ditemukan pada posisi indeks ke-" << posisi << endl;
        //tampilan
    }//punya if
    else {
    //identifikasi jika tidak ada
        cout << "kunci " << k << " tidak ditemukan" << endl;
        //tampilan
    }//punya else
    return 0;
}
