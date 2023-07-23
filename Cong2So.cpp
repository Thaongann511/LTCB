#include <bits/stdc++.h>
using namespace std;
int main() {
    int s, n, a, b;
    do {
        cout << "Nhap so nguyen duong n co 2 chu so: ";
        cin >> n;
    } while (n < 10); 
    a = n / 10; 
    b = n % 10; 
    s = a + b; 
    cout << "Tong 2 chu so la: " << s;
    return 0;
}
