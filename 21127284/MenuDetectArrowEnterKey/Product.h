#pragma once
#include"Object.h"
#include<fstream>

class Product:public Object {
private:
	int _ID;
	string _name;
	long long _price;
	inline static int count = 1;
public:
	Product();
	Product(string,long long);
	Product(const Product&);
public:
	int getID() { return this->_ID; }
	string getName() { return this->_name; }
	long long getPrice() { return this->_price; }

	void setName(string name) { this->_name = name; }
	void setPrice(long long value) { this->_price = value; }
public:
	string toString();



};