#pragma once
#include"Employee.h"

class ProductEmployee : public Employee {
private:
	int _productCount;
	int _paymentPerProduct;
public:
	ProductEmployee(int count, int pay) {
		this->_paymentPerProduct = pay;
		this->_productCount = count;
	}
	int salary() {
		int result;
		result = this->_paymentPerProduct*this->_productCount;
		return result;
	}
	string toString() {
		return "ProductEmployee";
	}
};