#pragma once
#include"Employee.h"
class OfficeEmployee:public Employee {
private:
	int _hireday;
	int _payday;
public:
	OfficeEmployee();
	OfficeEmployee(string, int, int);
	OfficeEmployee(string, string, int ,int);
	OfficeEmployee(string, string,string,int ,int);
	OfficeEmployee(const OfficeEmployee&);

public:
	int getHireDay()const { return this->_hireday; }
	int getPayDay()const { return this->_payday; }
	void setHireDay(int value) { this->_hireday = value; }
	void setPayDay(int value) { this->_payday = value; }
public:
	void input();
	void output();
	int salary();
	
};