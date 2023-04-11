#pragma once
#include"IParsable.h"
class SquareParser : public IParsable {
public:
	IShape* parse(string str) {
		string temp = Utils::String::split(str, "=")[1];
		IShape* result = new Square(stod(temp));
		return result;
	}
};