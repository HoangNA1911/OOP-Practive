#pragma once
#include"IShape.h"

class Square :public IShape {
private:
	double _a;
public:
	Square(double);
	double area();
	double perimeter();
	string toString() { return "square"; }
};