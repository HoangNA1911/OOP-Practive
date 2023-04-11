#include"Worker.h"

Worker::Worker() :Employee() {
	this->_Item = 0;
	this->_payitem = 0;
}
Worker::Worker(string name, int item) :Employee(name) {
	this->_Item = item;
	this->_payitem = 20000;
}
Worker::Worker(string name, string address, int item) :Employee(name, address) {
	this->_Item = item;
	this->_payitem = 20000;
}Worker::Worker(string name, string address, string date, int item) :Employee(name, address, date) {
	this->_Item = item;
	this->_payitem = 20000;
}
Worker::Worker(const Worker& other) :Employee(other) {
	this->_Item = other._Item;
	this->_payitem = other._payitem;
}

void Worker::input() {
	cout << "INPUT WORKER" << endl;
	Employee::input();
	cout << "Input number of item: ";
	cin >> this->_Item;
	cin.ignore();
	this->_payitem = 20000;
}
void Worker::output() {
	Employee::output();
	int salary = this->_Item * this->_payitem;

	cout << " " << salary;
}
int Worker::salary() {
	int result;
	result = this->_Item * this->_payitem;
	return result;
}