#pragma once
#include"SetColor.h"
#include"ConverterToRow.h"
class SetColorProduct:public SetColor {
public:
	void printStringColor(Object*);
	string toString() { return "Print color product"; }
};