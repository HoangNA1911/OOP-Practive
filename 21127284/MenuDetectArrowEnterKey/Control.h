#pragma once
#include"Interface.h"
#include"Menu.h"
using std::exit;
class Control:public Interface {
public:
	void controlTable();
	void controlMenu();
	string toString() { return "Cotrol"; }
};