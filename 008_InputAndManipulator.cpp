#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double bilangan; //variable untuk inputan

    cout << "Silahkan Input bilangan : ";
    cin >> bilangan;//proses penginputan

    cout << setiosflags(ios::fixed);
    cout << "Nilai yang di inputkan : " << setprecision(2) << bilangan << endl; //output yang menghasilkan 2 digit dibelakang koma
    return 0;
}
