#include"Ticket.h"

Ticket::Ticket() {
	this->_filmtitle = "";
	this->_starttime = "..:..";
	this->_roomname = 0;
	this->_pricefooddrink = 0;
}
Ticket::Ticket(string title, string time, int room, double priceBnB) {
	this->_filmtitle = title;
	this->_starttime = time;
	this->_roomname = room;
	this->_pricefooddrink = priceBnB;
}
Ticket::Ticket(const Ticket& other) {
	this->_filmtitle = other._filmtitle;
	this->_starttime = other._starttime;
	this->_roomname = other._roomname;
	this->_pricefooddrink = other._pricefooddrink;
}
void Ticket::input() {

	cout << "Input file title: ";
	
	string temp;
	cin >> temp;
	cin.ignore();
	//getline(cin, temp);
	this->_filmtitle = temp;
	cout << "Input start time (hh:mm) : ";
	getline(cin, this->_starttime);
	cout << "Input room name (1-10): ";
	cin >> this->_roomname;
	cout << "Input price of food and drink: ";
	cin >> this->_pricefooddrink;
	if (this->checkCategories(this->_starttime, this->_roomname)==false) {
		system("cls");
		cout << "ERROR!" << endl;
		cout << "Input again pls!" << endl;
		this->input();
	}
}

string Ticket::toString() {
	stringstream builder;
	string result;
	builder << "Ticket " << endl;
	result = builder.str();
	return result;
}

void Ticket::output() {
	cout << "Film title: "<<this->_filmtitle<<endl;
	cout << "Start time: " << this->_starttime << endl;
	cout << "room name: " << this->_roomname << endl;
	cout << "Price FnB: " << this->_pricefooddrink << endl;
}
int Ticket::hourOfTime() {
	string temp;
	stringstream builder;
	builder << this->_starttime[0] << this->_starttime[1];
	temp = builder.str();
	int result = stoi(temp);
	return result;

}

bool Ticket::checkCategories(string startTime, int room) {
		const regex timePattern("([01]?[0-9]|2[0-3]):[0-5][0-9]");
		if (!regex_match(startTime, timePattern) || !(room <= 10 && room >= 0)) {
			return false;
		}
		return true;
}