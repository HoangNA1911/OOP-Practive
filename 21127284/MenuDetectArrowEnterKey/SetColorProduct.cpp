#include"SetColorProduct.h"

void SetColorProduct::printStringColor(Object* text) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, blue);
	Converter* print = new ConverterToRow;
	cout << print->convert(text)<<endl;
	SetConsoleTextAttribute(hConsole, white);
}