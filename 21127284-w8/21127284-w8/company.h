#pragma once
#include"ComboTicket.h"
#include"RegularTicket.h"
#include<vector>
#include<fstream>
#include<map>
#include<iomanip>
class company {
private:
	vector<Ticket*> list;
public:

	void inputRegular();
	void inputCombo();
	void output();
	void sortList();
	void saveFile(string);
	void summarizeTicket();
};

