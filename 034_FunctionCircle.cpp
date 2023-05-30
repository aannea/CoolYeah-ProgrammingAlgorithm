#include <iostream>

using namespace std;
int s;
//variable global
void keliling_luas_lingkaran(int s){
//prosedur keliling luas lingkaran
    int luas = s*s;
    int keliling = 4*s;
    //kalkulasi
    cout << "keliling :" << keliling << endl;
    cout << "Luas     :" << luas << endl;
    //tampilan
}

int main()
{
    cout << "Masukkan Panjang Sisi :";
    cin >> s;
    //inputan
    keliling_luas_lingkaran(s);
    //pemanggilan prosedur
    return 0;
}
