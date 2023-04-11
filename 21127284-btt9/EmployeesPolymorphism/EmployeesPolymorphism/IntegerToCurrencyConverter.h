#pragma once
#include"IValueConverter.h"
#include"Integer.h"
#include"NumberFormatInfo.h"
class IntegerToCurrencyConverter : public IValueConverter {
public:
	IntegerToCurrencyConverter() {}
	string convert(Object* object) {
		auto number = dynamic_cast<Integer*>(object);
		int value = number->value();

		stringstream builder;
		NumberFormatInfo info;
		int count = 0;

		while (value != 0) {
			int lastDigit = value % 10;
			builder << lastDigit;

			count++;

			if (count == 3) {
				builder << info.currencyDecimalSeparator();
				count = 0;
			}

			value /= 10;
		}

		string numberSeparated = builder.str(); // "000.000.1"
		reverse(numberSeparated.begin(), numberSeparated.end());

		string format = info.currencyPositiveFormat();// "n $" ==> "1.000.000 d"
			string symbol = info.currencySymbol(); // "d"

		string result = regex_replace(format, regex("n"), numberSeparated);
		result = regex_replace(result, regex("\\$"), symbol);

		return result;
	}
};