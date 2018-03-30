#pragma once
#include <iostream>
#include <math.h>
#include <conio.h>
#include <vector>
#include "TamGiac.h"
using namespace std;
class DayTamGiac
{
private:
	vector<TamGiac> lst;
public:
	double TongChuVi();
	double TongDienTich();
	void NhapDayTamGiac();
	DayTamGiac();
	~DayTamGiac();
};
