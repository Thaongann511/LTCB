#include<iostream>
#include<math.h>
using namespace std;

int giaiPT(float a, float b, float c,float &x1, float &x2){
	float delta = b*b - 4*a*c;
	if(delta<0){
		x1=x2=0.0;
		return 0;
	}
	else if(delta==0){
		x1 = x2 = -b/(2*a);
		return 1;
	}
	else{
		delta = sqrt(delta);
		x1 = (-b + delta) / (2*a);
		x2 = (-b - delta) / (2*a);
		return 2;
	}
}
int main(){
	float a,b,c;
	float x1,x2;
	do{
		cout<<"Nhap a (a!=0): ";
		cin>>a;
		cout<<"Nhap b: ";
		cin>>b;
		cout<<"Nhap c: ";
		cin>>c;
	}
	while(!a);
        int numNo = giaiPT(a,b,c,x1,x2);
	if(numNo ==0 ) {
		cout<<"Phuong trinh da cho vo nghiem";
	}
	else if(numNo==1){
		cout<<"Phuong trinh da cho co nghiem kep x=%.4f" << x1;
	}
	else{
		cout<<"Phuong trinh da cho co hai nghiem phan biet"<<endl;
		cout<< "x1=" << x1<<endl;
		cout<< "x2=" << x2<<endl;
	}
}
