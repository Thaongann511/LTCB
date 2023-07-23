#include <iostream>
using namespace std;
float Mon1, Mon2, Mon3, Mon4, Mon5, DTB;
void nhap() {
	do { 
    cout<<"\nMon 1: ";
    cin>>Mon1;
    cout<<"\nMon 2: ";
    cin>>Mon2;
    cout<<"\nMon 3: ";
    cin>>Mon3;
    cout<<"\nMon 4: ";
    cin>>Mon4;
    cout<<"\nMon 5: ";
    cin>>Mon5;
  }
  while
  (Mon1 < 0 || Mon2 < 0 || Mon3 < 0 || Mon4 < 0 || Mon5 < 0 || Mon1 >10 || Mon2 > 10|| Mon3 > 10 || Mon4 > 10 || Mon5 > 10 );
}
void tinhTB()
{
  DTB = (Mon1 + Mon2 + Mon3 + Mon4 + Mon5) / 5;
}
/* hàm xu?t */
void xuat(){
  cout<<"\nDTB là: "<< DTB;
}
int main() {
  nhap();
  tinhTB();
  xuat();
}
