#pragma once
#include <iostream>
#include <math.h>
#include <conio.h>
#include "Diem.h"
using namespace std;
class TamGiac
{
private:
	Diem d1, d2, d3;
public:
	double DienTich();
	double ChuVi();
	TamGiac(Diem _d1, Diem _d2, Diem _d3);
	TamGiac();
	~TamGiac();
};
