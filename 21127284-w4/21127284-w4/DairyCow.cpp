#include"DairyCow.h"

  int DairyCow::count=0;
 DairyCow:: DairyCow():_identifier(++count) 
 {
	this->_weight = 0;
	this->_age = 0;
}
DairyCow::DairyCow( double weight, double age) :_identifier(++count) {
	
	this->_weight = weight;
	this->_age = age;
}
DairyCow::DairyCow(const DairyCow& other) :_identifier(++count)
{
	this->_weight = other._weight;
	this->_age = other._age;
}
DairyCow DairyCow::operator=(const DairyCow& other)
{
	DairyCow result;
	result._weight = other._weight;
	result._age = other._age;
	return result;
}
string DairyCow::ToString() {
	stringstream builder;
	builder << this->_identifier << ": " << this->_weight << "\t" << this->_age << endl;
	string result = builder.str();
	return result;
}
bool DairyCow::checkCorrectWeightAge() {
	if (this->_weight > 0 && this->_weight <= 1100) {
		if (this->_age > 0 && this->_age < 50) {
			return true;
		}
	}
	return false;
}