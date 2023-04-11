#pragma once
#include"IRule.h"

class AddPrefix :public IRule {
private:
	string _prefix;
public:
	AddPrefix(string str) {
		this->_prefix = str;
	}
	string rename(string str) {
		stringstream builder;
		builder << this->_prefix << " " << str;
		return builder.str();
	}
};