#pragma once
#include"Object.h"

class Employee :public Object {
public:
	virtual int salary() = 0;
	string toString() { return "Employee"; }
};