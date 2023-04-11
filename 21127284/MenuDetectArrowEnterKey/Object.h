#pragma once
#include<iostream>
#include<string>
#include<sstream>
using std::string; using std::cout; using std::cin; using std::endl; 


class Object {
public:
	Object() {};
	virtual string toString() {
		return "Object";
	}
};