#include"ComboTicket.h"

ComboTicket::ComboTicket() :Ticket() {}
ComboTicket::ComboTicket(string title, string time, int room, double priceFnB) :Ticket(title, time, room, priceFnB) {}
ComboTicket::ComboTicket(const ComboTicket& other) :Ticket(other) {}

double ComboTicket::price() {
	double result;
	result = this->_ticketfactor * 80 + this->_pricefooddrink*20/100;
	return result;
}

void ComboTicket::input() {
	cout << "|INPUT COMBO TiCKET|" << endl;
	Ticket::input();
}

string ComboTicket::toString() {
	stringstream builder;
	string result;
	builder << "Combo Ticket " << this->_filmtitle << " " << this->_starttime << " " << this->_roomname << " " << this->_pricefooddrink << " " << this->price() << endl;
	result = builder.str();
	return result;
}
void ComboTicket::output() {
	cout << "_________________________________" << endl;
	cout << "|COMBO TICKET|"<<endl;
	Ticket::output();
	cout << "Ticket Factor: " << this->_ticketfactor << endl;
	cout << "Price: " << this->price() << endl;
}