#pragma once
#include"IParsable.h"
class DailyEmployeeParser : public IParsable {
public:
	Employee* parse(string str) {
		vector<string> kindData = Utils::String::split(str, ", ");
		vector<string> token1 = Utils::String::split(kindData[0], "=");
		vector<string> token2 = Utils::String::split(kindData[1], "=");
		return new DailyEmployee(stoi(token1[1]), stoi(token2[1]));
	}
	string parsedObjectName() {
		return "Daily Employee";
	}
};