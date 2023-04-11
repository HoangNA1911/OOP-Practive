#include"DairyCow.h"

DairyCow::DairyCow() :Animal() {}
DairyCow::DairyCow(double weight, double age):Animal(weight, age) {}
DairyCow::DairyCow(const DairyCow& other):Animal(other) {}

string DairyCow::ToString() {
	stringstream builder;
	builder << this->_identifier << ": " << this->_weight << "\t" << this->_age << endl;
	string result = builder.str();
	return result;
}