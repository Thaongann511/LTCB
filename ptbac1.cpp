#include <iostream>
 
using namespace std;
 
int main()
{
    int a;
    int b;
    double nghiem;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    if(a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        nghiem = (double)-b/a;
        cout << "Phuong trinh co nghiem la: " << nghiem << endl;
    }
    return 0;
}
