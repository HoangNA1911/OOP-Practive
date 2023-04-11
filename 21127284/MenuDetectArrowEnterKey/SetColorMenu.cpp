#include"SetColorMenu.h"

void SetColorMenu::printMenuColor(string text) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, blue);
	cout << text<< endl;
	SetConsoleTextAttribute(hConsole, white);
}