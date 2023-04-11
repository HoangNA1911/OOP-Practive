#pragma once
#include"IRule.h"

class RemoveSpecialChars : public IRule {
private:
	vector<char> specialChars;
public:
	RemoveSpecialChars(vector<char> vt){
		this->specialChars = vt;
	}
	string rename(string str) {
		string result;
		for (int i = 0; i < this->specialChars.size();i++) {
			str.erase(remove(str.begin(), str.end(), this->specialChars[i]),str.end());
		}
		return str;
	}
};