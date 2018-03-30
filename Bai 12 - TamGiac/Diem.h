#pragma once
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
class Diem
{
private:
	int x;
	int y;
public:
	friend ostream& operator <<(ostream &os, Diem d);
	friend istream& operator >> (istream &is, Diem &d);
	double DoDai(Diem d);
	Diem(int _a, int _b);
	Diem();
	~Diem();
};
