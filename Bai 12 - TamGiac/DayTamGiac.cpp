#include "DayTamGiac.h"

double DayTamGiac::TongChuVi()
{
	double Chuvi = 0;
	for (int i = 0; i < lst.size(); i++)
	{
		TamGiac a = lst[i];
		Chuvi += a.ChuVi();
	}
	return Chuvi;
}

double DayTamGiac::TongDienTich()
{
	double DienTich = 0;
	for (int i = 0; i < lst.size(); i++)
	{
		TamGiac a = lst[i];
		DienTich += a.DienTich();
	}
	return DienTich;
}

void DayTamGiac::NhapDayTamGiac()
{
	int soLuong = 0;
	cout << "Nhap vao so luong: ";
	cin >> soLuong;
	for (int i = 0; i < soLuong; i++)
	{
		double a = 0, b = 0, c = 0;
		Diem d1, d2, d3;

		do {
			cout << "Nhap Vao diem 1 cua Tam giac: " << endl; cin >> d1;
			cout << "Nhap Vao diem 2 cua Tam giac: " << endl; cin >> d2;
			cout << "Nhap Vao diem 3 cua Tam giac: " << endl; cin >> d3;
			a = d1.DoDai(d2);
			b = d2.DoDai(d3);
			c = d3.DoDai(d1);
			if (!((a > 0) && (c > 0) && (b > 0) && (a + b > c) && (b + c > a) && (a + c > b)))cout << "Khong Phai Tam Giac \n";
		} while (!((a > 0) && (c > 0) && (b > 0) && (a + b > c) && (b + c > a) && (a + c > b)));
		TamGiac A(d1, d2, d3);
		lst.push_back(A);
	}
}

DayTamGiac::DayTamGiac()
{
}

DayTamGiac::~DayTamGiac()
{
}