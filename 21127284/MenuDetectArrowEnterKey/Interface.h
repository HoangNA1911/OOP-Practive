#pragma once
#include"Table.h"

class Interface:public Table {
public:
	void displayTable(int ,int);
	void editProduct(int);
	string toString() { return "Interface"; }
	void deleteProduct(int);
};