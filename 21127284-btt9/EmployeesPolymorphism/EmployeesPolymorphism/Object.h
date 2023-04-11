#pragma once
#include<iostream>
#include<map>
#include<string>
#include<sstream>
#include<regex>
using namespace std;
#include"Utils.h"
class Object {
public:
	virtual string toString() = 0;
};