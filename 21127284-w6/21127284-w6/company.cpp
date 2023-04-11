#include"company.h"

void company::inputList() {
	Worker* wk = new Worker;
	OfficeEmployee* oe = new OfficeEmployee;
	wk->input();
	oe->input();
	this->list.push_back(wk);
	this->list.push_back(oe);
	if (wk->salary() > bigSalary) {
		this->bigSalary = wk->salary();
	}
	if (oe->salary() > bigSalary) {
		this->bigSalary = oe->salary();
	}
	
}
void company::print() {
	for (int i = 0; i < this->list.size(); i++) {
		this->list[i]->output();
		cout << endl;
	}
}
long company::totalSalryAMonth() {
	long totalSalary = 0;
	for (int i = 0; i < this->list.size(); i++) {
		totalSalary += this->list[i]->salary();
	}
	return totalSalary;
}
void company::printHighestSalary() {
	cout << "ALL EMPLOYEE HAVE HIGHEST SALARY" << endl;

	for (int i = 0; i < this->list.size(); i++) {
		if (this->list[i]->salary() == this->bigSalary) {
			this->list[i]->output();
		}
	}
}