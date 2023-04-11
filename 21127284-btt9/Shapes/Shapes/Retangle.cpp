#include"Retangle.h"

Retangle::Retangle(double width, double lenght) {
	this->_length = lenght;
	this->_width = width;
}
double Retangle::area() {
	return _width * _length;
}
double Retangle::perimeter() {
	return 2 * (_width + _length);
}