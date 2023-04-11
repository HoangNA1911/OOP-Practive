#pragma once
#include"IShape.h"
#define Pi 3.14
class Circle :public IShape {
private:
	double _radius;
public:
	Circle(double);
	double area();
	double perimeter();
	string toString() { return "Circle"; }
};