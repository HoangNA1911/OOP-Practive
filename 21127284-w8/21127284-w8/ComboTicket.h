#pragma once
#pragma once
#include"Ticket.h"

class ComboTicket :public Ticket {
private:
	const double _ticketfactor = 1.5;
public:
	double getTicketFactor()const { return this->_ticketfactor; }

	ComboTicket();
	ComboTicket(string, string, int, double);
	ComboTicket(const ComboTicket&);

	double price();
	void input();
	void output();
	string toString();
};