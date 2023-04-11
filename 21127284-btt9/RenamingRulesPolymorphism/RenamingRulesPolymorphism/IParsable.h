#pragma once
#include"Object.h"
#include"Replace.h"
#include"AddCurrentMonth.h"
#include"AddPrefix.h"
#include"OneSpaceOnly.h"
#include"RemoveSpecialChars.h"
class IParsable :public Object {
public:
	virtual IRule* parse(string) = 0;
	virtual string parsedObjectName() = 0;
	string toString() { return"IParsable"; }
};
