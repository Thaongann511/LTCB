#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float banKinh, dienTich, theTich;

    cout << "Nhap vao ban kinh cua hinh cau: ";
    cin >> banKinh;

    dienTich = 4 * M_PI * pow(banKinh, 2); 
    theTich = (4.0 / 3.0) * M_PI * pow(banKinh, 3); 

    cout << "Dien tich cua hinh cau la: " << dienTich << endl;
    cout << "The tich cua hinh cau la: " << theTich << endl;

    return 0;
}
