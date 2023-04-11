#pragma once
#include"IParsable.h"

class RectangleParser : public IParsable {
public:
	IShape* parse(string str) {
		vector<string> token=Utils::String::split(str, ", ");
		string temp1 = Utils::String::split(token[0], "=")[1];
		string temp2 = Utils::String::split(token[1], "=")[1];
		IShape* result = new Retangle(stoi(temp1),stoi(temp2));
		return result;
	}
};