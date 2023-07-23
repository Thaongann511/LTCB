#include<iostream>
using namespace std;
 
int main ()
{
    int ngay, gio, phut, giay;
    int ss;
    cout << "Nhap so giay can doi: ";
    cin>>ss;
    ngay = ss / 86400;
    gio = ss % 86400 / 3600;
    phut = ss % 86400 % 3600 / 60;
    giay = ss % 86400 % 3600 % 60;
    cout<< ngay <<":" <<"ngay \t";
    cout<<gio <<":"<< "gio \t";
    cout<< phut <<":"<<"phut\t";
    cout<< giay<<":"<<"giay\t";
    return 0;
}
