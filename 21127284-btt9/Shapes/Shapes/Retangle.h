#pragma once
#include"IShape.h"

class Retangle :public IShape {
private:
	double _width;
	double _length;
public:
	Retangle(double, double);
	Retangle(const Retangle& other) {
		this->_length = other._length;
		this->_width = other._width;
	}
	double area();
	double perimeter();
	string toString() { return "retangle"; }
};