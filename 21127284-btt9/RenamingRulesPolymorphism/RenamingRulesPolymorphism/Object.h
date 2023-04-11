#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<regex>
#include<sstream>
#include"Utils.h"
#include"map"
using namespace std;

class Object {
public:
	virtual string toString() = 0;
};