#include <iostream>
using namespace std;
int main() {
  int n;
  long s = 0;
  cout<<"Nhap vao so n: ";
  cin>> n;
  for(int i = 1; i <= n; i++){
    s += i;
  }
  cout<<"Tong 1 + 2 + 3 +... + "<<n<<" là: "<<s;
 
}
