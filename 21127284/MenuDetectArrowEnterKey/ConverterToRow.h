#pragma once
#include"Converter.h"
#include"Product.h"
#include<iomanip>
using std::stringstream;
using std::setw;
using std::setfill;
class ConverterToRow :public Converter {
public:
	string convert(Object*);
	string toString();
};