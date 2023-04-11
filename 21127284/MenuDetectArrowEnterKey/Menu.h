#pragma once
#include"Object.h"
#include"SetColorMenu.h"
class Menu {
private:
	string option[3];

public:
	Menu();
	void PrintMenu(int);
	string toString() { return "Menu"; }
};