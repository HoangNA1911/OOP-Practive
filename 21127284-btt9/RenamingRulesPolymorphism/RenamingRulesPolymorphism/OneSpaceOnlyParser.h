#pragma once
#include"IParsable.h"

class OneSpaceOnlyParser :public IParsable {
public:
	OneSpaceOnlyParser() {}
	IRule* parse(string str) {
		return new OneSpaceOnly;
	}
	string parsedObjectName() { return "OneSpaceOnly"; }
};