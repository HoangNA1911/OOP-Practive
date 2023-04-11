#pragma once
#include"IParsable.h"

class CircleParser: public IParsable {
public:
	IShape* parse(string str) {
		string temp = Utils::String::split(str, "=")[1];
		IShape* result = new Circle(stod(temp));
		return result;
	}
};