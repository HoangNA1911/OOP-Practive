#pragma once
#include"IParsable.h"
class AddCurrentMonthParser :public IParsable {
public:
	IRule* parse(string a) {
		return new AddCurrenMonth;
	}
	string parsedObjectName() { return "AddCurrentMonth"; }
};