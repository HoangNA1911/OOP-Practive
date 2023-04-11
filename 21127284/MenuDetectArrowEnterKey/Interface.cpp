#include"Interface.h"

void Interface::displayTable(int indexI, int indexJ){
	system("cls");
	this->printHeader(indexJ);
	this->printAllProduct(indexI, indexJ);
	this->printInstruction();
}

void Interface::editProduct(int indexI) {
	char choose;
	choose = this->printEditTale(this->listProduct[indexI]);
	if (choose == 'Y' || choose == 'y') {
		string name;
		long price;
		cout << "Enter new name: ";
		cin.ignore();
		getline(cin, name);
		cout << "Enter new price: ";
		cin >> price;
		this->listProduct[indexI]->setName(name) ;
		this->listProduct[indexI]->setPrice(price);
	}
}
void Interface::deleteProduct(int indexI) {
	char choose;
	choose = this->printRemove(this->listProduct[indexI]);
	if (choose == 'Y' || choose == 'y') {
		this->listProduct.erase(this->listProduct.begin() + indexI);
	}
}