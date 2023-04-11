#pragma once
#include"IParsable.h"
class ReplaceParser :public IParsable {
public:
	ReplaceParser() {}
	IRule* parse(string str) {
		string pattern;
		string to;
		vector<string> kindData = Utils::String::split(str, ", ");
		vector<string> token1 = Utils::String::split(kindData[0], "=");
		vector<string> token2 = Utils::String::split(kindData[1], "=");
		pattern = token1[1];
		to = token2[1];
		return new Replace(pattern, to);
	}
	string parsedObjectName() { return "Replace"; }
};