#include<iostream>
#include<math.h>
using namespace std; 
int main()
{
    int number;
    int s1chuso;
    do
	{
	cout<<"\nHay nhap bien so xe:"; 
	cin>>number;
	s1chuso = log10(double(number)) +1;
	 if (s1chuso != 4) 
	 {
	 	cout<<"\n Khong hip le, xin vui long nhap lai!";
	 }
}
	 while (s1chuso != 4);
	 int sonut = 0;
	 int tongsonut = 0;
	 for(int i =1; i<=4; i++)
	 {int conso = number %10;
	 number/=10;
	 tongsonut += conso;
	 }
	 sonut = tongsonut %10;
	 cout<<"\nSo nut cua xe la:" <<sonut;
	 system("pause");
	 return 0;
}
