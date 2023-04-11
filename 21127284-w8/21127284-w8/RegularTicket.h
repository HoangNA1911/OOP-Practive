#pragma once
#include"Ticket.h"

class RegularTicket:public Ticket {
private:
	const double _ticketfactor=1.0;
public:
	double getTicketFactor()const { return this->_ticketfactor; }

	RegularTicket();
	RegularTicket(string, string, int, double);
	RegularTicket(const RegularTicket&);

	double price();
	void input();
	void output();
	string toString();
};