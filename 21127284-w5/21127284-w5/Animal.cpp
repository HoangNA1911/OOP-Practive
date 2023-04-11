#include"Animal.h"

Animal::Animal() :_identifier(++count)
{
	this->_weight = 0;
	this->_age = 0;
}
Animal::Animal(double weight, double age) :_identifier(++count) {
	this->_weight = weight;
	this->_age = age;
}
Animal::Animal(const Animal& other) :_identifier(++count)
{
	this->_weight = other._weight;
	this->_age = other._age;
}
Animal& Animal::operator=(const Animal& other)
{
	
	this->_weight = other._weight;
	this->_age = other._age;
	return *this;
}
string Animal::ToString() {
	stringstream builder;
	builder << this->_identifier << ": " << this->_weight << "\t" << this->_age << endl;
	string result = builder.str();
	return result;
}
bool Animal::checkCorrectWeightAge() {
	if (this->_weight > 0 && this->_weight <= 1100) {
		if (this->_age > 0 && this->_age < 50) {
			return true;
		}
	}
	return false;
}