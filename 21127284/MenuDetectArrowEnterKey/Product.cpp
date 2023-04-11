#include"Product.h"
#include<sstream>
using std::stringstream;
Product::Product():_ID(count++) {
	this->_name = "";
	this->_price = 0;
}
Product::Product(string name,long long price):_ID(count++) {
	this->_name = name;
	this->_price = price;
}
Product::Product(const Product& other):_ID(count++) {
	this->_name = other._name;
	this->_price = other._price;
}
string Product::toString() {
	stringstream builder;
	string result;
	builder << "ID=" << this->_ID << ", Name=" << this->_name << ", Price=" << this->_price;
	result = builder.str();
	return result;
}