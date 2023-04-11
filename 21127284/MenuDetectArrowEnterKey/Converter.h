#pragma once
#include"Object.h"

class Converter:public Object {
public:
	virtual string convert(Object*) = 0;
};