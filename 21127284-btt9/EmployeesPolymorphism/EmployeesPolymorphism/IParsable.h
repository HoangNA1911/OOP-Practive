#pragma once
#include"Object.h"
#include"Manger.h"
#include"DailyEmployee.h"
#include"ProductEmployee.h"

class IParsable : public Object {
public:
	virtual Employee* parse(string) = 0;
	virtual string parsedObjectName() = 0;
	string toString() { return "IParsable"; }
};