#include <iostream>

using namespace std;

int main()
{
    int nohari;

    cout << "Masukkan nomor hari (1..7): ";
    cin >> nohari;
    //identifikasi variable nohari pada switch
    switch(nohari){
        case 1:
            cout << "Hari ke-" << nohari << " : adalah Minggu";
            break;
        case 2:
            cout << "Hari ke-" << nohari << " : adalah Senin";
            break;
        case 3:
            cout << "Hari ke-" << nohari << " : adalah Selasa";
            break;
        case 4:
            cout << "Hari ke-" << nohari << " : adalah Rabu";
            break;
        case 5:
            cout << "Hari ke-" << nohari << " : adalah Kamis";
            break;
        case 6:
            cout << "Hari ke-" << nohari << " : adalah Jum'at";
            break;
        case 7:
            cout << "Hari ke-" << nohari << " : adalah Sabtu";
            break;
        default:
            cout << "Tidak terdapat nama hari ke-" << nohari;
    }
    return 0;
}
