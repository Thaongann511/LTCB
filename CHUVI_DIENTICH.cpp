#include <iostream>
using namespace std;
/*Tao ham tinh chu vi hinh tron*/
const double PI = 3.14;
void ChuViTron(int r){
  //khai b�o bien P l� chu vi
  double P;
  //t�nh chu vi
  P = PI * r * 2;
  cout<<"\nChu vi hinh tron la: "<<P;
}
/*Tao ham tinh dien tich*/
void DienTichTron(int r){
  //khai b�o bien S
  double S;
  S = PI * r * r;
  cout<<"\nDien tich hinh tron la: "<<S;
}
 
int main(){
  //khai b�o bien r la ban kinh hinh tron 
  int r;
  cout<<"Nhap ban kinh r: ";
  cin>>r;
  ChuViTron(r);
  DienTichTron(r);
  return 0;
}
