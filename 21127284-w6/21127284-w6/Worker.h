#pragma once
#pragma once
#include"Employee.h"
class Worker :public Employee {
private:
	int _Item;
	int _payitem;
public:
	Worker();
	Worker(string, int);
	Worker(string, string, int);
	Worker(string, string, string, int);
	Worker(const Worker&);

public:
	int getItem()const { return this->_Item; }
	int getpayitem()const { return this->_payitem; }
	void setItem(int value) { this->_Item = value; }
	void setpayitem(int value) { this->_payitem = value; }
public:
	void input();
	void output();
	int salary();
};