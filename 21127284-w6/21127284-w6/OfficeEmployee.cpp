#include"OfficeEmployee.h"

OfficeEmployee::OfficeEmployee():Employee() {
	this->_hireday = 0;
	this->_payday = 0;
}
OfficeEmployee::OfficeEmployee(string name, int hire, int pay) :Employee(name) {
	this->_hireday = hire;
	this->_payday = pay;
}
OfficeEmployee::OfficeEmployee(string name,string address, int hire, int pay) :Employee(name, address) {
	this->_hireday = hire;
	this->_payday = pay;
}OfficeEmployee::OfficeEmployee(string name,string address, string date, int hire, int pay) :Employee(name,address, date) {
	this->_hireday = hire;
	this->_payday = pay;
}
OfficeEmployee::OfficeEmployee(const OfficeEmployee& other) :Employee(other) {
	this->_hireday = other._hireday;
	this->_payday = other._payday;
}

void OfficeEmployee::input() {

	cout << "INPUT OFFICE EMPLOYEE" << endl;
	Employee::input();
	cout << "Input the working day: ";
	cin >> this->_hireday;
	cin.ignore();
	this->_payday = 300000;
}
void OfficeEmployee::output() {
	Employee::output();
	int salary = this->_hireday * this->_payday;

	cout << " " << salary;
}

int OfficeEmployee::salary() {
	int result;
	result = this->_hireday * this->_payday;
	return result;
}
