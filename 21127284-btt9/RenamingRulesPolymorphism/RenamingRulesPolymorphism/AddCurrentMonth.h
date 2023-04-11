#pragma once
#include"IRule.h"
#include<ctime>
class AddCurrenMonth :public IRule {
public:
	AddCurrenMonth() {}
	string rename(string str) {
		time_t temp = time(NULL);
		tm now;
		localtime_s(&now, &temp);
		int month = now.tm_mon+1;
		int a = now.tm_year + 1900;
		int year = a % 100;
		stringstream builder;
		builder <<month<<year<<" " << str;
		return builder.str();
	}
};