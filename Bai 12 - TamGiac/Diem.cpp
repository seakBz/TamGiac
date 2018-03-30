#include "Diem.h"

ostream& operator<<(ostream &os, Diem d)
{
	os << d.x << ";" << d.y << endl;
	return os;
}
istream& operator >> (istream &is, Diem &d)
{
	cout << "nhap hoanh do: ";
	is >> d.x;
	cout << "nhap tung do: ";
	is >> d.y;
	return is;
}
double Diem::DoDai(Diem d)
{
	double a = (d.x - x)*(d.x - x);
	double b = (d.y - y)*(d.y - y);
	return(sqrt(a + b));
}
Diem::Diem(int _a, int _b)
{
	x = _a;
	y = _b;
}
Diem::Diem()
{
	x = 0;
	y = 0;
}

Diem::~Diem()
{
}