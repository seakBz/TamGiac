#include "TamGiac.h"
#include "DayTamGiac.h"
void Bai2()
{
	double a = 0, b = 0, c = 0;
	Diem d1, d2, d3;
	do
	{
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
		cout << "Dien Tich Tam Giac: " << A.DienTich() << endl;
		cout << "Chu Vi Tam Giac: " << A.ChuVi() << endl;
		cout << endl;
		cout << "Nhap Tiep (enter) \n";
		cout << "Thoat (ESC) \n";
		int c = _getch();
		if (c == 27)
		{
			return;
		}
	} while (c != 27);
}
void Bai3()
{
	DayTamGiac lstTamGiac;
	lstTamGiac.NhapDayTamGiac();
	cout << "Tong Dien Tich Tam Giac: " << lstTamGiac.TongDienTich() << endl;
	cout << "Tong Chu Vi Tam Giac: " << lstTamGiac.TongChuVi() << endl;
}
void main()
{
	int LuaChon = 0;
	do
	{
		cout << "2. Bai 2" << endl;
		cout << "3. Bai 3" << endl;
		cout << "4. Thoat" << endl;
		cout << "Nhap Vao Lua Chon: ";
		cin >> LuaChon;
		switch (LuaChon)
		{
		case 2:
			Bai2();
			system("pause");
			system("cls");
			break;
		case 3:
			Bai3();
			system("pause");
			system("cls");
			break;
		case 4:
			return;
		}
	} while (LuaChon != 4);
}