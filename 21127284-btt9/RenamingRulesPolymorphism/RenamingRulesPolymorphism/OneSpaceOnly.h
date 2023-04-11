#pragma once
#include"IRule.h"

class OneSpaceOnly :public IRule {
public:
	string rename(string str) {
		regex reg(R"(\s+)");
		string result = regex_replace(str, reg, " ");
		stringstream builder;
		for (int i = 0; i < result.size(); i++) {
			if (isupper(result[i])) {
				if (i == 0) {
					builder << result[i];
				}
				else {
					builder << " " << result[i];
				}
			}
			else {
				builder << result[i];
			}
		}

	

		return builder.str();
	}
};