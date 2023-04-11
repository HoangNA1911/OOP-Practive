#pragma once
#include <iostream>
#include<sstream>
using namespace std;

class Goat {
private:
	const int _identifier;
	double _weight;
	double _age;
	static int count;
public:
	int getIdentifier()const { return this->_identifier; }
	double getWeight()const { return this->_weight; }
	double getAge()const { return this->_age; }

	void setWeight(double weight) { this->_weight = weight; }
	void setAge(double age) { this->_age = age; }

	Goat();
	Goat(double weight, double age);
	Goat(const Goat&);
	Goat operator=(const Goat&);

	string ToString();

	bool checkCorrectWeightAge();//1.1 age 49
};
