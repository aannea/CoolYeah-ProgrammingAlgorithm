#include <iostream>

using namespace std;
int s;
//variable global
int hitung_keliling(int s){
//fungsi keliling dengan parameter s
    return 4*s;
    //kalkulasi
}
int hitung_luas(int s){
//fungsi luas dengan parameter s
    return s*s;
    //kalkulasi
}
int main()
{
    cout << "Masukkan Panjang Sisi : ";
    cin >> s;
    //inputan
    cout << "Keliling :" << hitung_keliling(s) << endl;
    //pemanggilan fungsi keliling
    cout << "Luas     :" << hitung_luas(s) << endl;
    //pemanggilan fungsi luas
    return 0;
}
