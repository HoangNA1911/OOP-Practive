#include"RegularTicket.h"

RegularTicket::RegularTicket() :Ticket() {}
RegularTicket::RegularTicket(string title, string time, int room, double priceFnB) :Ticket(title, time, room, priceFnB) {}
RegularTicket::RegularTicket(const RegularTicket& other) :Ticket(other) {}

double RegularTicket::price() {
	double result;
	result = this->_ticketfactor * 80 + this->_pricefooddrink;
	return result;
}

void RegularTicket::input() {
	cout << "|INPUT REGULARTICKET|" << endl;
	Ticket::input();
}

string RegularTicket::toString() {
	stringstream builder;
	string result;
	builder << "RegularTicket " << this->_filmtitle << " " << this->_starttime << " " << this->_roomname << " " << this->_pricefooddrink << " " << this->price() << endl;
	result = builder.str();
	return result;
}
void RegularTicket::output() {
	cout << "______________________________"<<endl;
	cout << "|REGULAR TICKET|" << endl;
	Ticket::output();
	cout << "Ticket Factor: " << this->_ticketfactor << endl;
	cout << "Price: " << this->price()<<endl;
}