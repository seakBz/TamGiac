#include "TamGiac.h"

double TamGiac::DienTich()
{
	Diem _d1 = d1;
	double a = _d1.DoDai(d2);
	Diem _d2 = d2;
	double b = _d2.DoDai(d3);
	Diem _d3 = d3;
	double c = _d3.DoDai(d1);
	if ((a > 0) && (c > 0) && (b > 0) && (a + b > c) && (b + c > a) && (a + c > b))
	{
		double p = (a + b + c) / 2;
		return (sqrt(p*(p - a)*(p - b)*(p - c)));
	}
	else
		return 0;
}
double TamGiac::ChuVi()
{
	Diem _d1 = d1;
	double a = _d1.DoDai(d2);
	Diem _d2 = d2;
	double b = _d2.DoDai(d3);
	Diem _d3 = d3;
	double c = _d3.DoDai(d1);
	if ((a > 0) && (c > 0) && (b > 0) && (a + b > c) && (b + c > a) && (a + c > b))
		return (a + b + c);
	else
		return 0;
}
TamGiac::TamGiac(Diem _d1, Diem _d2, Diem _d3)
{
	d1 = _d1;
	d2 = _d2;
	d3 = _d3;
}
TamGiac::TamGiac()
{
	d1 = Diem(1, 1);
	d2 = Diem(2, 2);
	d3 = Diem(3, 3);
}

TamGiac::~TamGiac()
{
}