#pragma once
#include"Employee.h"

class DailyEmployee : public Employee {
private:
	int _dayCount;
	int _paymentPerDay;
public:
	DailyEmployee(int count, int pay) {
		this->_paymentPerDay = pay;
		this->_dayCount = count;
	}
	int salary() {
		int result;
		result = this->_paymentPerDay * this->_dayCount;
		return result;
	}
	string toString() {
		return "DailyEmployee";
	}
};