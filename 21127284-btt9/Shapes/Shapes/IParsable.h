#pragma once
#include"Object.h"
#include"ParserFactory.h"
#include"Circle.h"
#include"Square.h"
#include"Retangle.h"
class IParsable :public Object {
public:
	virtual	IShape* parse(string) =0;
	string toString() { return "IPasable";}
};