#pragma once
#include<string>
#include <iostream>
#include<sstream>
using namespace std;

class Employee {
protected:
	string _fullname;
	string _hiredate;
	string _address;
	int _id;
	inline static int count = 0;
public:
	
	string getName()const { return this->_fullname; }
	string getAddress()const { return this->_address; }
	string getHireDay()const { return this->_hiredate; }
	int getID()const { return this->_id; }

	void setName(string value) { this->_fullname = value; }
	void setAddress(string value) { this->_address = value; }
	void setHire(string value) { this->_hiredate = value; }

	Employee();
	Employee(string, string);
	Employee(string, string, string);
	Employee(string);
	Employee(const Employee&);

	void input();
	virtual void output();
	virtual int salary() = 0;
};

