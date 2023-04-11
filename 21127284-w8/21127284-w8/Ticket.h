#pragma once
#include<iostream>
#include<string>
#include<sstream>
#include<regex>
using namespace std;

class Ticket {
protected:
	string _filmtitle;
	string _starttime;
	int _roomname;
	double _pricefooddrink;
public:
	string getFilmTitle()const { return this->_filmtitle; }
	string getStartTime()const { return this->_starttime; }
	int getRoomName()const { return this->_roomname; }
	double getPriceFnD()const { return this->_pricefooddrink; }

	void setFilmTitle(string value) { this->_filmtitle = value; }
	void setStartTime(string value) { this->_starttime = value; }
	void setRoomName(int value) { this->_roomname = value; }
	void setPriceFnB(double value) { this->_pricefooddrink = value; }

	Ticket();
	Ticket(string, string, int, double);
	Ticket(const Ticket&);

	void input();
	virtual void output();
	virtual double price()=0;
	virtual string toString();
	bool checkCategories(string, int);
	int	hourOfTime();
};