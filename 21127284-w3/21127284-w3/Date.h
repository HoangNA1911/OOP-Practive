#pragma once
#include <iostream>
using namespace std;

class Date {
private:
	int _day;
	int _month;
	int _year;
public:
	int getDay()const { return this->_day; }
	int getMonth()const { return this->_month; }
	int getYear()const { return this->_year; }
	void setDay(int value) { this->_day = value; }
	void setMonth(int value) { this->_month = value; }
	void setYear(int value) { this->_year = value; }

	Date();
	Date(int year);
	Date(int year, int month);
	Date(int year, int month, int day);
	Date(const Date&);
	Date operator=(const Date&);
	Date Tomorrow();
	Date Yesterday();
	bool operator>(const Date&);
	bool operator<(const Date&);
	bool operator>=(const Date&);
	bool operator<=(const Date&);
	bool operator==(const Date&);
	bool operator!=(const Date&);

	Date operator+(int value);
	Date operator-(int value);

	Date operator++(int);
	Date operator++();

	Date operator--(int);
	Date operator--();

	friend istream& operator>>(istream& in, Date);
	friend ostream& operator<<(ostream& out, const Date&);

	operator int()const;
	operator long()const;


	void operator+=(int value);
	void operator-=(int value);

	/*~Date() {
		cout << "Date Deleted" << endl;
	}*/
};