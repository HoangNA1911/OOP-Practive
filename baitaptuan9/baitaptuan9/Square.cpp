#include"Square.h"

Square::Square(double a){
	this->_a = a;
}

double Square::area() {
	return _a * _a;
}
double Square::perimeter() {
	return 4 * _a;
} 