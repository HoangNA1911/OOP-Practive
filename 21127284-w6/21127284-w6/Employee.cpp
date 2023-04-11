#include"Employee.h"

Employee::Employee():_id(++count)
{
	this->_fullname = "";
	this->_address = "";
	this->_hiredate = "01/01/2022";

}
Employee::Employee(string name) :_id(++count) {
	this->_fullname = name;
	this->_address = "";
	this->_hiredate = "01/01/2022";
}
Employee::Employee(string name,string address) :_id(++count) {
	this->_fullname = name;
	this->_address = address;
	this->_hiredate = "01/01/2022";
}
Employee::Employee(string name,string address, string date) :_id(++count) {
	this->_fullname = name;
	this->_address = address;
	this->_hiredate = date;
}
Employee::Employee(const Employee& other):_id(++count) {
	this->_fullname = other._fullname;
	this->_address = other._address;
	this->_hiredate = other._hiredate;
}
void Employee::input() {
	
	cout << "Input fullname: ";
	getline(cin, this->_fullname);
	cout << "Input address: ";
	getline(cin, this->_address);
	cout << "Input hire date: ";
	getline(cin, this->_hiredate);


}
void Employee::output() {
	cout <<this->_id<<" " << this->_fullname << " " << this->_address << " " << this->_hiredate ;
}
