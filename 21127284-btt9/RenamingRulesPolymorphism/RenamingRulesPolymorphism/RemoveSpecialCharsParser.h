#pragma once
#include"IParsable.h"
class RemoveSpecialCharsParser :public IParsable {
public:
	IRule* parse(string data) {
		vector<char> specialChars;
		string chars;
		int index = data.find("blacklist");
		if (index == 0) {
			chars = data.substr(9);
		}
		for (int i = 0; i < chars.size(); i++) {
			specialChars.push_back(chars[i]);
		}
		return new RemoveSpecialChars(specialChars);
	}
	string parsedObjectName() { return "RemoveSpecialChars"; }
};