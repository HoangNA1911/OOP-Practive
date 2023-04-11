#pragma once
#include"CItem.h"

class CFile : public CItem {
private:
	int _size;

public:
	int getSize()const { return this->_size; }
	void setSize(int value) { this->_size = value; }

	void print(bool) { cout << "Print CFile" << endl; }
	void setHidden(bool, bool=true) { cout << "Set Hidden" << endl; }
	CFile(string , int);
	int size();
	string toString() { return "CFile"; }

};