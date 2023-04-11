#pragma once
#include "Animal.h"

class DairyCow:public Animal {
public:
	inline static int count = 0;

	DairyCow();
	DairyCow(double, double);
	DairyCow(const DairyCow&);
	~DairyCow() {
	}

	string ToString();
};