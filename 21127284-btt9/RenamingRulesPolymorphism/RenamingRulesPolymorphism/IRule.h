#pragma once
#include"Object.h"

class IRule : public Object {
public:
	string toString() { return "IRule"; }
	virtual string rename(string) = 0;
};