#include"company.h"

void company::inputRegular() {
	RegularTicket *regular = new RegularTicket;
	regular->input();
	
	this->list.push_back(regular);
}
void company::inputCombo() {
	ComboTicket* combo = new ComboTicket	;

	combo->input();
	this->list.push_back(combo);
}
void company::output() {
	system("cls");
	cout << "|OUTPUT|" << endl;
	for (Ticket* ticket : this->list) {
		ticket->output();
	}
}
void sortListSwap(vector<Ticket*>& list) {
	for (int i = 0; i < list.size() - 1; i++) {
		for (int j = i + 1; j < list.size(); j++) {
			if (list[i]->price() < list[j]->price()) {
				swap(list[i], list[j]);
			}
		}
	}
}

void company::sortList() {
	vector<Ticket*> list1;
	vector<Ticket*> list2;
	for (Ticket* ticket : this->list) {
		if (ticket->toString()[0] == 'R') {
			list1.push_back(ticket);
		}
		else {	
			list2.push_back(ticket);
		}
	}
	if (!list1.empty()) {
		sortListSwap(list1);
	}
	if (!list2.empty()) {
		sortListSwap(list2);
	}
	int temp = list1.size();
	for (int i = 0; i < temp; i++) {
		this->list[i] = list1[i];
	}
	for (int i = 0; i < list2.size(); i++) {
		this->list[temp++] = list2[i];
	}
}
void company::saveFile(string name) {
	ofstream fout;
	fout.open(name, ios::out);

	for (int i = 0; i < this->list.size(); i++) {
		fout << this->list[i]->toString();
	}
}


void company::summarizeTicket() {
	map<int, int> listRegular;
	map<int, int> listCombo;
	for (Ticket* ticket : this->list) {
		if (ticket->toString()[0] == 'R') {
			listRegular[ticket->hourOfTime()]++;
		}
		else {
			listCombo[ticket->hourOfTime()]++;
		}
	}
	cout << setfill(' ') << setw(8) << "Range"<<" " << setfill(' ') << setw(10) << "#Regular"
		<< setfill(' ') << setw(8) << "#Combo" << endl;
	for (int i = 0; i < 23; i++) {
		cout << setfill(' ') << setw(8) << i << setfill(' ') << setw(8) << listRegular[i] << setfill(' ') << setw(8) << listCombo[i] << endl;
	}
}

