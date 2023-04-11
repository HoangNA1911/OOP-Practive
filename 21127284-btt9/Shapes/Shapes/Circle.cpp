#include"Circle.h"

Circle::Circle(double radius) {
	this->_radius = radius;
}

double Circle::area() {
	return Pi * _radius * _radius;
}
double Circle::perimeter() {
	return 2 * Pi * _radius;
}