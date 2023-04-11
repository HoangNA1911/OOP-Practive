#include"Goat.h"

Goat::Goat():Animal() {}
Goat::Goat(double weight, double age):Animal(weight, age) {}
Goat::Goat(const Goat& other):Animal(other) {}

string Goat::ToString() {
	stringstream builder;
	builder << this->_identifier << ": " << this->_weight << "\t" << this->_age << endl;
	string result = builder.str();
	return result;
}