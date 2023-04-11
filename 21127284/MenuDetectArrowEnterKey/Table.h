#pragma once
#include"ConverterToRow.h"
#include"SetColorProduct.h"
#include<fstream>
#include<vector>
using std::vector;
using std::ifstream;
using std::stol;
using std::getline;

class Table :public Object {
protected:
	vector<Product*> listProduct;
	int page;
	int numOfProduct;
public:
	Table();
	void add();
	void printHeader(int index);
	void printAllProduct(int indexI, int indexJ);
	void printInstruction();
	char printEditTale(Object*);
	char printRemove(Object*);
	string toString() {
		return "table";
	};

};
