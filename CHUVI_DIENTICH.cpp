#include <iostream>
using namespace std;
/*Tao ham tinh chu vi hinh tron*/
const double PI = 3.14;
void ChuViTron(int r){
  //khai báo bien P là chu vi
  double P;
  //tính chu vi
  P = PI * r * 2;
  cout<<"\nChu vi hinh tron la: "<<P;
}
/*Tao ham tinh dien tich*/
void DienTichTron(int r){
  //khai báo bien S
  double S;
  S = PI * r * r;
  cout<<"\nDien tich hinh tron la: "<<S;
}
 
int main(){
  //khai báo bien r la ban kinh hinh tron 
  int r;
  cout<<"Nhap ban kinh r: ";
  cin>>r;
  ChuViTron(r);
  DienTichTron(r);
  return 0;
}
