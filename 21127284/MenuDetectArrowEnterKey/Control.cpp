#include"Control.h"
#include<conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define DELETEE 83
#define ENTER 13
#define ESC 27

void Control::controlTable() {
	int i = 0;
	int j = 0;
	char choose;
	while (1) {
		this->displayTable(i, j);
		choose = _getch();
			switch (choose)
			{
			
			case KEY_UP:
				if (i > j * 10) {
					i--;
				}
				break;
			case KEY_DOWN:
				if (j < (this->page - 1)) {
					if (i < 9 + j * 10) {
						i++;
					}
				}
				else if (j == this->page - 1) {
					if (i < (this->numOfProduct - 1)) {
						i++;
					}
				}
				break;
			case KEY_RIGHT:
				if (j < this->page - 1) {
					j++;
					i = j * 10;
				}
				break;
			case KEY_LEFT:
				if (j > 0) {
					j--;
					i = j * 10;
				}
				break;
			case ENTER:
				this->editProduct(i);
				break;
			case DELETEE:
				this->deleteProduct(i);
				break;
			case ESC:
				this->controlMenu();
			default:
				break;
			}
		
	}
}
void Control::controlMenu() {
	int i = 0;
	char choose;
	Menu* print = new Menu;

	while (1) {
		print->PrintMenu(i);
		choose = _getch();
		switch (choose)
		{
		case KEY_UP:
			if (i >= 1) {
				i--;
			}
			break;
		case KEY_DOWN:
			if (i < 2) {
				i++;
			}
			break;
		case ENTER:
			if (i == 0) {
				this->controlTable();
			}
			else if (i == 1) {
				this->add();
			}
			else if (i == 2) {

			}
			break;
		case ESC:
			exit(0);
		default:
			break;
		}
	}
}