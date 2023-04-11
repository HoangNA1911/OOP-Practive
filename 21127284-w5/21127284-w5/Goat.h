#pragma once

#include "Animal.h"

class Goat :public Animal {
private:
	inline static int count = 0;

public:
	Goat();
	Goat(double, double);
	Goat(const Goat&);
	~Goat() {
	}
	string ToString();
};