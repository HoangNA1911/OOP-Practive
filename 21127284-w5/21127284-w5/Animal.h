#pragma once
#pragma once
#include <iostream>
#include<sstream>
using namespace std;


class Animal {
protected:
	const int _identifier;
	double _weight;
	double _age;
	inline static int count;
public:
	int getIdentifier()const { return this->_identifier; }
	double getWeight()const { return this->_weight; }
	double getAge()const { return this->_age; }

	void setWeight(double weight) { this->_weight = weight; }
	void setAge(double age) { this->_age = age; }

	Animal();
	Animal(double weight, double age);
	Animal(const Animal&);
	Animal& operator=(const Animal&);

	string ToString();

	bool checkCorrectWeightAge();//1.1 age 49
	~Animal() {
	}
};
