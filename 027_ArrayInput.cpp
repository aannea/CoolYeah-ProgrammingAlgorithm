#include <iostream>

using namespace std;
string daftar_mahasiswa[39];
//menambahkan array
int jml_mahasiswa;
//menambahkan variable untuk inputan
int main()
{
    cout << "Masukkan jumlah nama mahasiswa yang akan disimpan : ";
    cin >>jml_mahasiswa;
    //inputan untuk perulangan/untuk mengulang berapa kali mengisi
    //array
    int i;
    //menambahkan variable i untuk perulangan
    string nama;
    //untuk input nama
    for (i=0; i<jml_mahasiswa; i++){
    //perulangan untuk penginputan sesuai jumlah
        cout << "Masukkan nama mahasiswa : ";
        cin >> nama;
        //inputan nama
        daftar_mahasiswa[i]=nama;
        //memasukkan niiai inputan kedalam array
    }
    //untuk mencetak nama
    cout << "Nama yang sudah anda simpan adalah : " << endl;
    for (i=0; i<jml_mahasiswa; i++){
    //perulangan untuk menampilkan isi dari array yang di inputkan
        cout << daftar_mahasiswa[i] << endl;
        //tampilan
    }
    return 0;
}
