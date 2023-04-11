#include"Date.h"


bool laNamNhuan(int nYear)
{
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0)
	{
		return true;
	}
	return false;

}
int tinhSoNgayTrongThang(int nMonth, int nYear)
{
	int nNumOfDays;

	switch (nMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nNumOfDays = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		nNumOfDays = 30;
		break;
	case 2:
		if (laNamNhuan(nYear))
		{
			nNumOfDays = 29;
		}
		else
		{
			nNumOfDays = 28;
		}
		break;
	default:
		cout << "thang khong hop le!" << endl;
		break;
	}
	

	return nNumOfDays;
}
bool laNgayHopLe(int nDay, int nMonth, int nYear)
{
	// Kiểm tra năm
	if (nYear < 0)
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	// Kiểm tra tháng
	if (nMonth < 1 || nMonth > 12)
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	// Kiểm tra ngày
	if (nDay < 1 || nDay > tinhSoNgayTrongThang(nMonth, nYear))
	{
		return false; // Ngày không còn hợp lệ nữa!
	}

	return true; // Trả về trạng thái cuối cùng...
}
Date::Date() {
	this->_day = 2;
	this->_month = 11;
	this->_year = 2012;
}
Date::Date(int year) {
	if (year > 0) {
		this->_day = 1;
		this->_month = 1;
		this->_year = year;
	}
}
Date::Date(int year, int month) {
	if (month > 0 && month <= 12 && year > 0) {
		this->_day = 1;
		this->_month = month;
		this->_year = year;
	}
}
Date::Date(int year, int month, int day) {
	if (laNgayHopLe(day, month, year)) {
		this->_day = day;
		this->_month = month;
		this->_year = year;
	}
}
Date::Date(const Date& other) {
	this->_day = other._day;
	this->_month = other._month;
	this->_year = other._year;
}
Date Date::operator=(const Date& other) {
	this->_day = other._day;
	this->_month = other._month;
	this->_year = other._year;
	return *this;
}
Date Date::Tomorrow() {
	Date result;
	result._day = this->_day + 1;
	result._month = this->_month;
	result._year = this->_year;
	if(!laNgayHopLe(this->_day+1, this->_month,this->_year)){
		result._day = 1;
		result._month = this->_month+1;
		result._year = this->_year;
		if (!laNgayHopLe(1, this->_month+1, this->_year)) {
			result._day = 1;
			result._month = 1;
			result._year = this->_year++;
		}
	}
	return result;
}
Date Date::Yesterday() {
	Date result;
	result._day = this->_day - 1;
	result._month = this->_month;
	result._year = this->_year;
	if (!laNgayHopLe(this->_day - 1, this->_month, this->_year)) {
		if (this->_month - 1 == 0) {
			result._day = 31;
			result._month = 12;
			result._year=this->_year-1;
		}
		else {
			result._day = tinhSoNgayTrongThang(this->_month - 1, this->_year);
			result._month = this->_month-1;
			result._year = this->_year;
		}
	}
	return result;
}
bool Date::operator==(const Date& other) {
	if (this->_day == other._day && this->_month == other._month && this->_year == other._year) {
		return true;
	}
	return false;
}
bool Date::operator!=(const Date& other) {
	if (this->_day != other._day || this->_month != other._month || this->_year != other._year) {
		return true;
	}
	return false;
}
bool Date::operator<(const Date& other) {
	if (this->_year < other._year) {
		return true;
	}
	else if (this->_year > other._year) {
		return false;
	}
	else {
		if (this->_month < other._month) {
			return true;
		}
		else if (this->_month > other._month) {
			return false;
		}
		else {
			if (this->_day < other._day) {
				return true;
			}
			else  {
				return false;
			}
		}
	}
}
bool Date::operator>(const Date& other) {
	if (this->_year > other._year) {
		return true;
	}
	else if (this->_year < other._year) {
		return false;
	}
	else {
		if (this->_month > other._month) {
			return true;
		}
		else if (this->_month < other._month) {
			return false;
		}
		else {
			if (this->_day > other._day) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}
bool Date::operator<=(const Date& other) {
	if (this->_year < other._year) {
		return true;
	}
	else if (this->_year > other._year) {
		return false;
	}
	else {
		if (this->_month < other._month) {
			return true;
		}
		else if (this->_month > other._month) {
			return false;
		}
		else {
			if (this->_day < other._day) {
				return true;
			}
			else if(this->_day>other._day) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}
bool Date::operator>=(const Date& other) {
	if (this->_year > other._year) {
		return true;
	}
	else if (this->_year < other._year) {
		return false;
	}
	else {
		if (this->_month > other._month) {
			return true;
		}
		else if (this->_month < other._month) {
			return false;
		}
		else {
			if (this->_day > other._day) {
				return true;
			}
			else if (this->_day < other._day) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}

Date Date::operator+( int value) {
	Date result;
	result._day = this->_day + value;
	result._month = this->_month;
	result._year = this->_year;
	if (result._day > tinhSoNgayTrongThang(this->_month, this->_year)) {
		result._day = result._day - tinhSoNgayTrongThang(this->_month, this->_year);
		result._month = this->_month+1;
		if (result._month == 13) {
			result._month = 1;
			result._year = this->_year+1;
		}
	}
	return result;
}
Date Date::operator-(int value) {
	Date result;
	result._day = this->_day - value;
	result._month = this->_month;
	result._year = this->_year;
	if (result._day < 1) {
		if (this->_month-1 < 1) {
			result._day = 31 + result._day;
			result._month = 12;
			result._year = this->_year-1;
		}
		else {
			result._day = tinhSoNgayTrongThang(this->_month - 1, this->_year) + result._day;
			result._month = result._month - 1;
		}
	}
	return result;
}
Date Date::operator++(int) {
	Date result;
	result._day = this->_day + 1;
	result._month = this->_month;
	result._year = this->_year;
	if (!laNgayHopLe(this->_day + 1, this->_month, this->_year)) {
		result._day = 1;
		result._month = this->_month + 1;
		result._year = this->_year;
		if (!laNgayHopLe(1, this->_month + 1, this->_year)) {
			result._day = 1;
			result._month = 1;
			result._year = this->_year+1;
		}
	}
	return result;
}
Date Date::operator++() {
	Date result=*this;
	this->_day = this->_day + 1;
	if (!laNgayHopLe(this->_day + 1, this->_month, this->_year)) {
		this->_day = 1;
		this->_month = this->_month + 1;
		
		if (!laNgayHopLe(1, this->_month + 1, this->_year)) {
			this->_month = 1;
			this->_year = this->_year+1;
		}
	}
	return result;
}
Date Date::operator--(int) {
	Date result;
	result._day = this->_day - 1;
	result._month = this->_month;
	result._year = this->_year;
	if (!laNgayHopLe(this->_day - 1, this->_month, this->_year)) {
		if (this->_month - 1 == 0) {
			result._day = 31;
			result._month = 12;
			result._year = this->_year-1;
		}
		else {
			result._day = tinhSoNgayTrongThang(this->_month - 1, this->_year);
			result._month = this->_month-1;
			result._year = this->_year;
		}
	}
	return result;
}
Date Date::operator--() {
	Date result=*this;
	this->_day = this->_day - 1;
	if (!laNgayHopLe(this->_day - 1, this->_month, this->_year)) {
		if (this->_month - 1 == 0) {
			this->_day = 31;
			this->_month = 12;
			this->_year = this->_year-1;
		}
		else {
			this->_day = tinhSoNgayTrongThang(this->_month - 1, this->_year);
			this->_month = this->_month-1;
			
		}
	}
	return result;
}
ostream& operator<<(ostream& out, const Date& other) {
	out << other._day << "/" << other._month << "/" << other._year << endl;
	return out;
}
istream& operator>>(istream& in, Date other) {
	cout << "nhap ngay: ";
	in >> other._day;
	cout << "nhap thang: ";
	in >> other._month;
	cout << "nhap nam: ";
	in >> other._year;
	return in;
}
Date::operator int()const {
	int sumDay=0;
	for (int i = 1; i < this->_month; i++) {
		sumDay =sumDay+ tinhSoNgayTrongThang(i, this->_year);
	}
	sumDay += this->_day;
	return sumDay;
}
Date::operator long()const {
	long sumDay = 0;
	for (int i = 1; i < this->_year; i++) {
		if (this->_year % 400 == 0) {
			sumDay += 366;
		}
		else {
			sumDay += 365;
		}
	}
	sumDay = sumDay + (int)this;
	return sumDay;
}

void Date::operator+=(int value) {
	this->_day = this->_day + value;
	if (this->_day > tinhSoNgayTrongThang(this->_month, this->_year)) {
		this->_day = this->_day - tinhSoNgayTrongThang(this->_month, this->_year);
		this->_month = this->_month++;
		if (this->_month == 13) {
			this->_month = 1;
			this->_year ++;
		}
	}
}
void Date::operator-=(int value) {
	
	this->_day = this->_day - value;
	if (this->_day < 1) {
		if (this->_month-1 < 1) {
			this->_day = 31 + this->_day;
			this->_month = 12;
			this->_year--;
		}
		else {
			this->_day = tinhSoNgayTrongThang(this->_month - 1, this->_year) + this->_day;
			this->_month--;
		}
	}
}