#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Nhap vao mot ky tu: ";
    cin >> ch;

    cout << "Ma ASCII cua ky tu " << ch << " la: " << int(ch) << endl;

    char nextChar = ch + 1;
    cout << "Ky tu ke tiep cua " << ch << " la: " << nextChar << endl;
    int num;

    cout << "Nhap vao mot so tu nhien tu 0 den 255: ";
    cin >> num;

    if (num >= 0 && num <= 255) {
        cout << "Ma ASCII cua so " << num << " la: " << char(num) << endl;

        char nextNum = num + 1;
        cout << "Ky tu ke tiep cua so " << num << " la: " << nextNum << endl;
    }
    else {
        cout << "So nhap vao khong hop le!" << endl;
    }

    return 0;
}
