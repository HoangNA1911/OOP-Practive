#pragma once
#include"IParsable.h"
class AddPrefixParser :public IParsable {
public:
	AddPrefixParser() {}
	IRule* parse(string str) {
		return new AddPrefix(str);
	}
	string parsedObjectName() { return "AddPrefix"; }
};