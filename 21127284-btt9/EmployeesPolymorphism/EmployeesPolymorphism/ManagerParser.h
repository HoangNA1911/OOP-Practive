#pragma once
#include"IParsable.h"
class ManagerParser : public IParsable {
public:
	Employee* parse(string str) {
		vector<string> kindData = Utils::String::split(str, ", ");
		vector<string> token1 = Utils::String::split(kindData[0], "=");
		vector<string> token2 = Utils::String::split(kindData[1], "=");
		vector<string> token3 = Utils::String::split(kindData[2], "=");

		return new Manager(stoi(token1[1]), stoi(token2[1]), stoi(token3[1]));
	}
	string parsedObjectName() {
		return "Manager";
	}
};