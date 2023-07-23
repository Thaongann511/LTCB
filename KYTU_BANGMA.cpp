#include <iostream>
 
using namespace std;
 
int main() {
     
    char KyTu;
    cout << "Chuong trinh lay gia tri ascii cua ky tu nhap tu ban phim." << endl;
    cout << "Nhan phim ESC de thoat chuong trinh" << endl;
    cout << "-----------------------------------------" << endl;
     
    do {
        cout << "Nhap ky tu: "; 
        cin >> KyTu;
        if (int(KyTu) != 27) {
            cout << "    Ma ASCII cua ky tu " << KyTu << " la " << int(KyTu) << endl;
        } else {
            break;
        }
    } while (KyTu != 27);
 
    return 0;
}
