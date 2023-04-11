#pragma once
#include"Employee.h"

class Manager : public Employee {
private:
	int _employeeCount;
	int _paymentPerEmployee;
	int _baseSalary;
public:
	Manager(int count, int pay, int base) {
		this->_baseSalary = base;
		this->_employeeCount = count;
		this->_paymentPerEmployee = pay;
	}
	int salary() {
		int result;
		result = _baseSalary + this->_employeeCount * this->_paymentPerEmployee;
		return result;
	}
	string toString() {
		return "Manager";
	}
};