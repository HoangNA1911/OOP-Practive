#pragma once
#include"IRule.h"
class Replace :public IRule {
private:
	string _pattern;
	string _to;
public:
	Replace(string pattern, string to) {
		this->_pattern = pattern;
		this->_to = to;
	}
	string rename(string str) {
		while (str.find(this->_pattern) != string::npos) {
			str.replace(str.find(this->_pattern), this->_pattern.size(), this->_to);
		}
		return str;
	}
};