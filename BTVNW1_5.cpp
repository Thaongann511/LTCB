#include <iostream>
using namespace std;
	class thoigian
{
	private:
	int Phut, Gio;
	public:
	void nhap();
	void xuat();
	thoigian cong(thoigian time1, thoigian time2);
};
void thoigian::nhap()
	{	
	int gio, phut;
	cout << "Nhap gio:";
	cin >> gio;
	cout << "Nhap phut:";
	cin >> phut;
	Gio = gio;
	Phut = phut;
}
	void thoigian::xuat()
{	
	cout << Gio << "h" << Phut << "phut" << endl;
}
	thoigian thoigian::cong(thoigian time1, thoigian time2)
{
	Phut = time1.Phut + time2.Phut;
	Gio = Phut / 60;
	Phut = Phut % 60;
	Gio += time1.Gio + time2.Gio;
	return *this;
}
	int main()
{
	thoigian T1,T2,T3;
	cout << "\nNhap thoi gian 1: \n";
	T1.nhap();
	cout << "\nNhap thoi gian 2: \n";
	T2.nhap();

	T3.cong(T1, T2);
	T3.xuat();
	system("pause");
} 
