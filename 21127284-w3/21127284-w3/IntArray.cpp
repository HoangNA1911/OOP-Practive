#include"IntArray.h"

IntArray::IntArray() {
	this->_a = new int[5];
	this->_n = 5;
	for (int i = 0; i < 5; i++) {
		this->_a[i] = i;
	}
}
IntArray::IntArray(int n) {
	if (n > 0) {
		this->_a = new int[n];
		for (int i = 0; i < n; i++) {
			this->_a[i] = 0;
		}
		this->_n = n;
	}
}
IntArray::IntArray(int* a, int n) {
	if (n > 0) {
		this->_a = new int[n];
		for (int i = 0; i < n; i++) {
			this->_a[i] = a[i];
		}
		this->_n = n;
	}
}
IntArray::IntArray(const IntArray& a) {
	this->_a = new int[a._n];
	
	for (int i = 0; i < a._n; i++) {
		this->_a[i] = a._a[i];
	}
	this->_n = a._n;
}
IntArray IntArray::operator=(const IntArray& other) {
	this->_a = new int[other._n];
	for (int i = 0; i < other._n; i++) {
		this->_a[i] = other._a[i];
	}
	this->_n = other._n;
	return *this;
}
ostream& operator<<(ostream& out, const IntArray& other) {
	for (int i = 0; i < other._n; i++) {
		out << other._a[i] << endl;
	}
	return out;
}
istream& operator>>(istream& in,  IntArray& other) {
	for (int i = 0; i < other._n; i++) {
		cout << "nhap gia tri cho phan tu thu " << i << " : ";
		in >> other._a[i];
	}
	return in;
}
int& IntArray::operator[](int index) {
	return this->_a[index];
}
IntArray::operator int()const {
	return this->_n;
}