#include"Goat.h"

int Goat::count = 0;
Goat::Goat() :_identifier(++count)
{
	this->_weight = 0;
	this->_age = 0;
}
Goat::Goat(double weight, double age) :_identifier(++count) {

	this->_weight = weight;
	this->_age = age;
}
Goat::Goat(const Goat& other) :_identifier(++count)
{
	this->_weight = other._weight;
	this->_age = other._age;
}
Goat Goat::operator=(const Goat& other)
{
	Goat result;
	result._weight = other._weight;
	result._age = other._age;
	return result;
}
string Goat::ToString() {
	stringstream builder;
	builder << this->_identifier << ": " << this->_weight << "\t" << this->_age << endl;
	string result = builder.str();
	return result;
}
bool Goat::checkCorrectWeightAge() {
	if (this->_weight > 0 && this->_weight <= 200) {
		if (this->_age > 0 && this->_age < 20) {
			return true;
		}
	}
	return false;
}