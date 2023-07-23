#include <iostream>

using namespace std;

int main() { 
    int gio, phut, giay;
    cout << "Nhap gio: ";
    cin >> gio;

    cout << "Nhap phut: ";
    cin >> phut;

    cout << "Nhap giay: ";
    cin >> giay;
    int tongGiay = gio * 3600 + phut * 60 + giay;
    cout << "Tong so giay: " << tongGiay << "s" << endl;

    return 0;
}
