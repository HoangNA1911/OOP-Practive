#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class CItem {
protected:
	string _name;
	bool _hidden;
	bool _readOnly;
public:
	string getName()const { return this->_name; }
	bool getHidden() const { return this->_hidden; }
	bool getReadOnly()const { return this->_readOnly; }
	void setName(string value) { this->_name = value; }
	virtual int size() = 0;
	virtual void print(bool) { cout << "Print CItem" << endl; }
	virtual void setHidden(bool, bool) = 0;
	virtual string toString() {return "CItem";}
};