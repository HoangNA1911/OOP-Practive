#pragma once
#include <iostream>
using namespace std;

class IntArray {
private:
	int* _a;
	int _n;

public:
	IntArray();
	IntArray(int n);
	IntArray(int* a, int n);
	IntArray(const IntArray&);
	IntArray operator=(const IntArray&);

	friend ostream& operator<<(ostream& out, const IntArray&);
	friend istream& operator>>(istream& in, IntArray&);

	int& operator[](int index);
	operator int()const;

	~IntArray() { delete[] this->_a; }
};