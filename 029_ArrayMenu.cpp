#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, d[10];
    float e;
    //variable
    a=0;
    //menetapkan nilai dari variable a
awal:
//titik ketika awal inputan tidak sama dengan 1
        cout << "<<<<<<<< Menu >>>>>>>>>\n\n";
        cout << "1. Input Array\n";
        cout << "2. Tampil Array\n";
        cout << "3. Cari Nilai Minimum\n";
        cout << "4. Cari Nilai Maksimum\n";
        cout << "5. Hitung Rata-rata\n\n";
        //tampilan menu
        cout << "Masukkan Pilihan : ";
        cin >> a;
        //penginputan nilai a
        if (a==1){
        //percabangan untuk memastikan nilainya 1
            udah:
            //titik ketika ingin memilih lagi
            switch(a){
            //switch untuk memilih menu
                case 1:
                //kasus pertama/menu pertama
                    b=c=0;
                    //menetapkan nilai b dan c =0
                    while (b<10){
                    //perulangan untuk menginput nilai array
                        cout<<"Masukkan bilangan "<< b+1 <<" : "; cin >> d[b];
                        //menampilkan sekaligus menginput nilai dari array
                        b++;
                        //menambah nilai b untuk perulangan inputan array
                    }
                    cout << "\nBilangan berhasil diinputkan\n" << endl;
                    //tampilan bahwa bilangan yang di inputkan
                    //pada array sudah tersimpan
                    system("pause");
                    //untuk menghentikan jalannya program
                    system("cls");
                    //untuk membersihkan seluruh tampilan
                    break;
                    //untuk membatasi bahwa case 1 hanya sampai disini
                case 2:
                //kasus 2 atau menu 2
                    b=0;
                    //menetapkan nilai b =0
                    cout << "\n";
                    //memberikan jarak
                    while (b<10){
                    //perulangan untuk menampilkan array
                        cout << d[b] << " ";
                        //menampilkan array
                        b++;
                        //menambah nilai b untuk perulangan
                    }
                    cout << "\n\n";
                    //untuk memberi jarak
                    system("pause");
                    //untuk menghentikan jalannya program
                    system("cls");
                    //untuk membersihkan seluruh tampilan
                    break;
                    //untuk membatasi bahwa case 2 hanya sampai disini
                case 3:
                //kasus 3 atau menu 3
                    b=c=0;
                    //menetapkan nilai b dan c =0
                    cout << "\n";
                    //untuk memberi jarak
                    c=d[0];
                    //untuk menetapkannilai awal dari c
                    //karena c digunakan untuk mengambil nilai
                    //terkecil
                    while (b<10){
                    //perulangan untuk mencari nilai terkecil
                        if (c>d[b]){
                        //mengidentifikasi apakah nilai dalam array
                        //adalah nilai yang leibh kecil dari c
                            c=d[b];
                            //jika nilai array yang disebut lebih kecil
                            //maka nilai c akan berubah menjadi nilai
                            //yang baru saja di identifikasi
                        }
                        b++;
                        //menambahkan nilia b untuk perulangan
                    }
                    cout << "Nilai Minimum : " << c <<"\n\n";
                    //menampilkan nilai akhir dari pencarian
                    system("pause");
                    //untuk menghentikan jalannya program
                    system("cls");
                    //untuk membersihkan seluruh tampilan
                    break;
                    //untuk membatasi bahwa case 3 hanya sampai disini
                case 4:
                //kasus 4 atau menu 4
                    b=c=0;
                    //menetapkan nilai b dan c =0
                    cout << "\n";
                    //memberikan jarak
                    while (b<10){
                    //perulangan untuk mencari nilai terbesar
                        if (c<d[b]){
                        //mencarinilai terbesar
                            c=d[b];
                            //jika nilai yang lebih besar didapatkan
                            //maka nilai c akan menjadi nilai terbesar
                        }
                        b++;
                        //menambahkan nilai b untuk perulangan
                    }
                    cout << "Nilai Maksimum : " << c <<"\n\n";
                    //menampilkan nilai akhir dari pencarian
                    system("pause");
                    //untuk menghentikan jalannya program
                    system("cls");
                    //untuk membersihkan seluruh tampilan
                    break;
                    //untuk membatasi bahwa case 4 hanya sampai disini
                case 5:
                //kasus 5 atau menu 5
                    b=e=0;
                    //menetapkan nilai b dan e = 0
                    cout << "\n";
                    //memberi jarak
                    while (b<10){
                    //perulangan untuk menambahkan setiap nilai array
                        e=e+d[b];
                        //menambahkan nilai array dan dimasukkan ke
                        //variable e
                        b++;
                        //penambahan nilai b untuk perulangan
                    }
                    e=e/10;
                    //membagi nilai e, karena rumus rata rata
                    cout << setiosflags(ios::fixed);
                    //manipulator untuk mengatur jumlah digit desimal
                    cout<<"Nilai Rata-rata : "<<setprecision(2) << e <<"\n\n";
                    //menampilkan nilai rata-rata dengan 2angka dibelakang
                    //koma
                    system("pause");
                    //untuk menghentikan jalannya program
                    system("cls");
                    //untuk membersihkan seluruh tampilan
                    break;
                    //untuk membatasi bahwa case 5 hanya sampai disini
                default:
                //kasus jika tidak terdaftar dalam menu
                    cout << "Tidak valid";
                    //menampilkan tidak valid karena tidak terdapat dalam menu
                    return 0;
                    //keluar dari program
                    break;
                    //untuk membatasi bahwa default/menu tak terdaftar
                    //hanya sampai di sini
                }
            cout << "<<<<<<<< Menu >>>>>>>>>\n\n";
            cout << "1. Input Array\n";
            cout << "2. Tampil Array\n";
            cout << "3. Cari Nilai Minimum\n";
            cout << "4. Cari Nilai Maksimum\n";
            cout << "5. Hitung Rata-rata\n\n";
            //tampilan, ini ditampilkan kembali karena di setiap
            //case atau menu menghapus semua tampilan
            cout << "Masukkan Pilihan : ";
            cin >> a;
            //penginputan pilihan untuk menjalankan
            //switch case selanjutnya
            goto udah;
            //untuk memilih lagi
            }
        else{
        //apabila input yang diberikan bukan 1 pada awal program
        //maka akan diberikan pesan untuk memasukkan bilangan
        //terlebih dahulu
            cout << "\nMasukkan bilangan terlebih dahulu\n" << endl;
            //tampilan
            system("pause");
            //untuk menghentikan jalannya program
            system("cls");
            //untuk membersihkan seluruh tampilan
            goto awal;
            //untuk memilih lagi
        }

    return 0;
}
