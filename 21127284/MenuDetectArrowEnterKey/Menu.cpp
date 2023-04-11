#include"Menu.h"

Menu::Menu() {
	this->option[0] = "   1. Display all products (paging support - table)";
	this->option[1] = "   2. Add a new product";
	this->option[2] = "   3. Delete a product by id";
}
void Menu::PrintMenu(int index) {
	system("cls");
	cout << "MyShop App. Please select a function:" << endl;
	for (int i = 0; i < 3; i++) {
		if (i == index) {
			SetColorMenu* printColor = new SetColorMenu;
			printColor->printMenuColor(this->option[i]);
			continue;
		}
		cout << this->option[i] << endl;
	}
	cout << "Press escape to quit" << endl;
}