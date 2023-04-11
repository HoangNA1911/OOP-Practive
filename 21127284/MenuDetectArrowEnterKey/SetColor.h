#pragma once
#include"Object.h"
#include<Windows.h>
#include"enumColor.h"
class SetColor: public Object {
public:
	virtual void printStringColor(Object* )=0;
	string toString() { return "Set Color"; }
};