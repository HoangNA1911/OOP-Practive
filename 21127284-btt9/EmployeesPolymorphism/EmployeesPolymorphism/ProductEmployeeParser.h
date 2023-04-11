#pragma once
#include"IParsable.h"
class ProductEmployeeParser : public IParsable {
public:
	Employee* parse(string str) {
		vector<string> kindData = Utils::String::split(str, ", ");
		vector<string> token1 = Utils::String::split(kindData[0], "=");
		vector<string> token2 = Utils::String::split(kindData[1], "=");
		return new ProductEmployee(stoi(token1[1]), stoi(token2[1]));
	}
	string parsedObjectName() {
		return "Product Employee";
	}
};