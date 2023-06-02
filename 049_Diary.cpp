/*
 KELOMPOK 1
 IF 09 B

 AMALIA SUCIA             
 BINTANG RIZQI      
 FARHAN ARYO  
 MAHARDIKA BAYU 
 PUSPITA KARTIKA
*/

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
#include <iomanip>

using namespace std;

///////////////////////////////////////////////////////// DEKLARASI /////////////////////////////////////////////////////////////////


//struct merupakan fitur untuk mengelompokkan beberapa variabel yang ada di dalam bloknya
struct data{
    char judul[40];
    char tanggal[15];
    char catatan[200];
};
//array banyak menggunakan struct data
data banyak[200];
int jumlahdata,temp;
bool checkbaru = true;


/////////////  ///////////////////////////////// DEKLARASI PROSEDUR, FUNGSI /////////////////////////////////////////////////////////

void gotoxy();
void loadsc();
bool loginawal();
int menu();
int inputdata(int batas);
void input();
void lihatdata();
void loginpasstampil();
void cari();
bool keluar();
void error();


///////////////////////////////////////////////////////// FUNGSI //////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////// MAIN ///////////////////////////////////////////////////////////////////


int main()
{
    loadsc(); //pemanggilan prosedur loadsc
    system("cls");
    loginawal(); //pemanggilan prosedur loginawal

    awal: //target goto
    system("cls");
    int pilih=menu(); //return dari fungsi menu mengisi var pilih
    system("cls");

    //percabangan switch case
    switch(pilih){
    case 1:
        input();
        goto awal;
        break;
    case 2:
        loginpasstampil();
        goto awal;
        break;
    case 3:
        cari();
        goto awal;
        break;
    case 4:{
        int luar = keluar();
            if(luar){
            exit(0);
        }
        else{
            goto awal;
        }
    }
        break;
    default:
        error();
        goto awal;
        break;
    }
    return 0;
}

///////////////////////////////////////////////////////// KUMPULAN ///////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////// PROSEDUR, FUNGSI ////////////////////////////////////////////////////////////////////////////


////// PROSEDUR GOTO XY //////
//gotoxy digunakan untuk menentukan koordinat
void gotoxy(short int x, short int y) {
    COORD a = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

////// PROSEDUR TAMPILAN AWAL PROGRAM //////
void loadsc(){
    //tampilan awal program (selamat datang)
    gotoxy(42,13); cout << "----------------------------------";
    gotoxy(42,14); cout << "|";
    gotoxy(75,14); cout << "|";
    gotoxy(42,15); cout << "----------------------------------";
    gotoxy(43,14); cout << "Selamat Datang Di Aplikasi Diary"<< endl;
    //system("pause") : memberhentikan system program sementara
    gotoxy(43,28); system("pause");
}

////// FUNGSI LOGIN USERNAME & PASS //////
bool loginawal(){
    //deklarasi var lokal
    bool log;
    char pw;

	login: //target goto
	//deklarasi
	string user = "";
	string pass = "";

	gotoxy(39,12); cout << "Login untuk masuk ke dalam aplikasi DIARY";
	gotoxy(54,14); cout << "Username : "; cin >> user;
	gotoxy(54,15); cout << "Password : ";
	//getch : karakter yang dimasukan tidak ditampilkan ke layar
	pw = _getch();

        //untuk menampilkan tanda * jika input password
        while(pw != 13){
            //pushback : penambahan elemen ke posisi paling belakang dari vektor (push)
            pass.push_back(pw);
            cout << '*';
            //getch : karakter yang dimasukan tidak ditampilkan ke layar
            pw = _getch();
        }
    cout<<endl;

        //percabangan untuk mengidentifikasi username dan password yang diinput
        if(user == "aku" && pass == "111"){
            gotoxy(47,19); cout << "Yeyy! Kamu berhasil login!" << endl;
            gotoxy(43,28);system("pause");
            system("cls");
            log = true;
        } else{
            gotoxy(46,19); cout << "Maaf, Password kamu SALAH :(";
            gotoxy(33,20); cout << "Masukan lagi Username dan Password yang BENAR yaa! ^_^";
            gotoxy(43,28);system("pause");
            system("cls");
            goto login; //kembali ke login
        }

	return log; //fungsi ini mengembalikan nilai variable boolean log
}

////// FUNGSI MENAMPILKAN MENU //////
int menu(){
    int pilih, ulang=0; //deklarasi

        //perulangan
        while(ulang<8){
            gotoxy(49,ulang+9);cout << "|";
            gotoxy(70,ulang+9);cout << "|";
            ulang++;
        }

    gotoxy(49,8);  cout << "----------------------";
    gotoxy(49,10); cout << "----------------------";
    gotoxy(49,15); cout << "----------------------";
    gotoxy(49,17); cout << "----------------------";
    //tampilan untuk menu
    gotoxy(58,9);  cout << "Menu";
    gotoxy(50,11); cout << "1. Input Catatan";
    gotoxy(50,12); cout << "2. Tampilkan Catatan";
    gotoxy(50,13); cout << "3. Search Judul";
    gotoxy(50,14); cout << "4. Keluar";
    gotoxy(50,16); cout << "Masukkan Pilihan : ";cin >> pilih;

    return pilih; //fungsi ini mengembalikan nilai variabel pilih
}

////// FUNGSI INPUT DATA CATATAN //////
//menggunakan parameter integer batas
int inputdata(int batas){
    //deklarasi
    checkbaru = false;
    int ulang = temp;
    temp = batas;
    //cin ignore : untuk mengabaikan atau menghapus satu atau lebih karakter dari buffer input
    cin.ignore(1, '\n');

        //perulangan untuk menginputkan catatan
        while(ulang<temp){
            //system("cls") : membersihkan layar
            system("cls");
            gotoxy(40,10);cout << "|";
            cout << "Catatan ke-"<< ulang+1;
            cout << "\n\n";
            cout << "\tJudul (maks 40 karakter): ";
            //getline : membaca string dari input stream (include spasi)
            //menyimpan inputan ke array banyak[ulang] di blok judul sebanyak 40 karakter
            cin.getline(banyak[ulang].judul, 40);
            cout << "\tTanggal (dd/mm/yyyy)(maks 10 karakter): ";
            //menyimpan inputan ke array banyak[ulang] di blok catatan sebanyak 15 karakter
            cin.getline(banyak[ulang].tanggal, 15);
            cout << "\tCatatan (maks 200 karakter) : ";
            //menyimpan inputan ke array banyak[ulang] di blok catatan sebanyak 200 karakter
            cin.getline(banyak[ulang].catatan, 200);
            ulang++;
        }

    batas = temp; //pertukaran nilai
    return temp; //fungsi ini mengembalikan nilai temp
}

////// PROSEDUR UNTUK INPUT CATATAN //////
void input(){
    int nambahData; //deklarasi

        if (checkbaru){
            gotoxy(39,13);cout << "------------------------------------------";
            gotoxy(39,14);cout << "|";
            gotoxy(80,14);cout << "|";
            gotoxy(39,15);cout << "------------------------------------------";
            gotoxy(40,14);cout << "Jumlah Data yang ingin di input : ";
            cin >> jumlahdata;
            nambahData = jumlahdata;
            inputdata(nambahData); //memanggil fungsi inputdata dengan parameter nambahData
        } else {
            //tambah data
            gotoxy(40,13);cout << "--------------------------------------------";
            gotoxy(40,14);cout << "|";
            gotoxy(83,14);cout << "|";
            gotoxy(40,15);cout << "--------------------------------------------";
            gotoxy(41,14);cout << "Jumlah Tambah Data yang ingin di input : ";
            cin >> nambahData;
            //ditambah, supaya jika user input catatan lagi, maka catatan yang baru akan berada di bawah catatan yang lama
            nambahData += jumlahdata;
            inputdata(nambahData); //memanggil fungsi inputdata dengan parameter nambahData
        }

    char inputLagi;
    cout << "\n\n";
    //pemberian pilihan kepada user jika ingin menginput catatan lagi
    cout << "\tInput catatan lagi (y/n) : ";
    cin >> inputLagi;
        if(inputLagi == 'y'|| inputLagi == 'Y'){
            system("cls");
            input(); //memanggil prosedur input
        }

    //pertukaran data
    jumlahdata = temp;
    temp = jumlahdata;
}

////// PROSEDUR UNTUK MENAMPILKAN DATA CATATAN //////
void lihatdata(){
    lagi: //target goto
    //deklarasi
    int i=0,j=0;
    int  nomor;

    gotoxy(20,1); cout << "================================================================================";
    gotoxy(47,2); cout << "Berikut Data Catatan Kamu";
    gotoxy(20,3); cout << "================================================================================";
    cout << "\n\n";

    //setw : mengatur lebar dari suatu tampilan data
    //left : supaya di kiri
    //lebar : 4
    cout << left << setw(4) << "No";
    //lebar : 30
    cout << setw(30) << "Judul";
    //lebar : 20
    cout << setw(20) << "Tanggal";
    //lebar : 55
    cout << setw(55) << "Catatan";
    cout << endl << endl;
    //update data terbaru jika ada temp adalah jumlahdata terkini
    //tukar nilai
    temp = jumlahdata;
        //perulangan untuk menampilkan semua catatan yang sudah diinput
        for(i=0;i<temp;i++){
                j=j+1;
                //deklarasi
                string judull = banyak[i].judul;
                string ceritaa = banyak[i].catatan;
                //substr : memotong string
                //memotong string dari karakter 0-10
                string str = judull.substr(0, 10)+"...";
                //memotong string dari karakter 0-50
                string str2 = ceritaa.substr(0, 50)+"...";
                //lebar : 4
                cout << left << setw(4) << j;
                //lebar : 30
                cout << setw(30) << str;
                //lebar : 20
                cout << setw(20) << banyak[i].tanggal;
                //lebar : 55
                cout << setw(55) << str2;
                cout << endl;
        }

    cout << "\n\nMasukkan nomor untuk membuka catatan : ";
    cin >> nomor;
    cout << "\n\n";
    nomor--;

        //percabangan jika inputan < jumlah catatan
        if (nomor < temp){
            //perulangan menampilkan catatan
            for (nomor; nomor< temp; nomor++){
                //ketika di enter
                if (cin.get() == '\n') {
                    //per line nya dipisah dengan satu enter atau satu line
                    cout << "Catatan ke-" << nomor+1 << endl;
                    cout << "Judul : ";
                    cout << banyak[nomor].judul << "\n";
                    cout << "Tanggal : ";
                    cout << banyak[nomor].tanggal << "\n";
                    cout << "Isi Cerita : ";
                    cout << banyak[nomor].catatan << "\n";
                }
            }
        } else {
            cout << "Maaf :(, belum ada catatan ke-" << nomor+1 << ", kamu bisa input kembali";
            gotoxy(43,28);system("pause");
            system("cls");
            goto lagi;
        }

    jumlahdata = temp; //pertukaran data
    getch();
    system("cls");
}

////// PROSEDUR MENAMPILKAN CATATAN DENGAN PASSWORD //////
void loginpasstampil(){
    char pw; //deklarasi
    inputpass: //target goto
    string password = ""; //deklarasi

    gotoxy(30,13); cout << "------------------------------------------------------------";
    gotoxy(30,14); cout << "|";
    gotoxy(89,14); cout << "|";
    gotoxy(30,15); cout << "------------------------------------------------------------";

    //memasukan password untuk bisa melihat catatan
    gotoxy(31,14); cout << " Masukkan password untuk melihat catatan : ";
    pw = _getch();

        //mengganti tampilan inputan password dengan tanda *
        while (pw != 13){
            password.push_back(pw);
            cout << '*';
            pw = _getch();
        }
    cout<<endl;

        //idektifikasi password yang diinput
        if( password == "111"){
            gotoxy(43,16); cout << "Password yang kamu masukan benar!";
            gotoxy(41,17); cout << "Kamu bisa melihat catatanmu sekarang!";
            gotoxy(43,28);system("pause");
            system("cls");
            lihatdata(); //memanggil prosedur lihatdata
        } else{
            gotoxy(33,16); cout << "Password yang kamu masukan salah, coba ulangi lagi ^_^";
            gotoxy(43,28);system("pause");
            system("cls");
            goto inputpass; //ulang ke inputpass
        }
}

////// PROSEDUR MENCARI JUDUL CATATAN //////
void cari(){
    //deklarasi
    string judul, cari;
    int dapet=0;
    int  nomor;
    int j=0, i=0;

    judul: //target goto
    gotoxy(30,4);cout << "-------------------------------------------------------------";
    gotoxy(30,5);cout << "|";
    gotoxy(90,5);cout << "|";
    gotoxy(30,6);cout << "-------------------------------------------------------------";
    gotoxy(31,5);cout << "Masukkan judul : "; cin >> judul;
    cout << "\n\n";
        lagi: //target goto

        //searching
        while(i<temp){
            string juduldua = banyak[i].judul;
            //jika judul catatan sama dengan judul yang dicari, tampilkan catatannya
            if(juduldua.find(judul)!=string::npos){
                dapet++;
                j=j+1;
                string judull = banyak[i].judul;
                string ceritaa = banyak[i].catatan;
                //substr : memotong string
                //memotong string dari karakter 0-10
                string str = judull.substr(0, 10)+"...";
                //memotong string dari karakter 0-50
                string str2 = ceritaa.substr(0, 50)+"...";
                cout << left << setw(4) << j; //lebar 4
                cout << setw(30) << str; //lebar 30
                cout << setw(20) << banyak[i].tanggal; //lebar 20
                cout << setw(55) << str2; //lebar 55
                cout << endl;
            }
            i++;
        }

    if(dapet>0){
        cout << "\n\nMasukkan nomor untuk membuka catatan : ";
        cin >> nomor;
        cout << "\n\n";
        nomor --;

            //percabangan jika input < jumlah catatan
            if (nomor < temp){
                //perulangan membuka catatan
                for (nomor; nomor< jumlahdata; nomor++){
                    string juduldua = banyak[nomor].judul;
                    //catatan ditampilkan jika judul sama dengan keyword yg dicari
                    if(juduldua.find(judul)!=string::npos){
                        if (cin.get() == '\n') {
                            cout << "Catatan ke-" << nomor+1 << endl;
                            cout << "Judul : ";
                            cout << banyak[nomor].judul << "\n";
                            cout << "Tanggal : ";
                            cout << banyak[nomor].tanggal << "\n";
                            cout << "Isi Cerita : ";
                            cout << banyak[nomor].catatan << "\n";
                        }
                    }
                }
            } else {
                cout << "Maaf :(, belum ada catatan ke-" << nomor+1 << ", kamu bisa input kembali";
                gotoxy(43,28);system("pause");
                system("cls");
                goto lagi;
            }
        getch();
        system("cls");
    } else {
        gotoxy(31,9);cout << "Maaf judul yang kamu cari tidak tersedia dalam daftar catatanmu\n";
        system("pause");
    }
}

////// FUNGSI KELUAR DARI PROGRAM //////
bool keluar(){
    //deklarasi
    bool yes = true;
    int ulang=0;
    char pilih;

    gotoxy(34,11);cout << "---------------------------------------------------";

        while(ulang<4){
            gotoxy(34,ulang+12);cout << "|";
            gotoxy(84,ulang+12);cout << "|";
            ulang++;
        }

    gotoxy(34,14);cout << "---------------------------------------------------";
    gotoxy(34,16);cout << "---------------------------------------------------";
    //tampilan pemilihan keluar atau tidak
    gotoxy(35,12);cout << "KAMU YAKIN MAU KELUAR DARI PROGRAM DIARY INI?? :(";
    gotoxy(51,13);cout << "Yes[Y]";
    gotoxy(63,13);cout << "No[N]";
    gotoxy(52,15);cout << "Jawaban kamu : ";cin>>pilih;

        if(pilih == 'y'||pilih == 'Y'){
            system("cls");
            gotoxy(33,11);cout << "-------------------- TERIMA KASIH --------------------";
            gotoxy(42,13);cout << "Telah Menggunakan Aplikasi Diary Ini";
            gotoxy(45,14);cout << "Semoga Harimu Menyenangkan!!";
            gotoxy(55,16);cout << "CHEERSSS!!";
            gotoxy(58,17);cout << "^_^";
            yes = true;
            gotoxy(43,28);
        }

        if(pilih == 'n'||pilih == 'N'){
            yes = false;
        }

    return yes; //mengembalikan nilai yes
}

////// PROSEDUR UNTUK MENANGKAP ERROR //////
void error(){
        //metode Exception Handling
        try
            {
                throw("Maaf terjadi kesalahan");
            }
        //exception handling bertipe integer
        catch(int e) //handler
            {
                cout<<e<<endl;
            }
        //exception handling bertipe character
        catch(char* e) //handler
            {
                cout<<e<<endl;
            }
        catch(...) //default handler
            {
                gotoxy(49,13);cout << "Maaf terjadi kesalahan" << endl;
                gotoxy(43,28);system("pause");
                system("cls");
                menu();
            }
            _getche();

    gotoxy(43,28);system("pause");
}
