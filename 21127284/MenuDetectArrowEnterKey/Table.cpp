#include "Table.h";

Table::Table() {
	ifstream fin;
	fin.open("file.txt");
	if (!fin) {
		cout << "file can't open!" << endl;
	}
	else {
		string temp;
		string name;
		long long price;
		while (!fin.eof()) {
			getline(fin, name, '-');
			getline(fin, temp);
			price = stol(temp);
			Product* product = new Product(name, price);
			this->listProduct.push_back(product);
		}
	}
	this->page = (int)std::ceil(this->listProduct.size() / 10 + 0.5);
	this->numOfProduct = (int)this->listProduct.size();
}
void Table::printHeader(int index) {
	int numOfProduct = (int)this->listProduct.size();
	cout << "All product. Page " << index + 1 << "/" << this->page;
	if (index <this->page-1) {
		cout << ". Displaying " << 10 << "/" << numOfProduct << " items" << endl;
	}
	else if(index==this->page-1) {
		cout << ". Displaying " << numOfProduct - index * 10 << "/" << numOfProduct << " items" << endl;
	}
	cout << setw(62) << setfill('-') <<" " << endl;
	cout << setw(4) << setfill(' ')<<"ID|" << setw(36) << setfill(' ') << "Name|" << setw(21) << setfill(' ') << "Price|" << endl;
}

void Table::printAllProduct(int indexI, int indexJ) {
	Converter* printProduct = new ConverterToRow;
	for (int i = 0+indexJ*10; i < 10+indexJ*10; i++) {
		if (i == this->listProduct.size() ) {
			break;
		}
		if (i == indexI) {
			SetColor* printColor = new SetColorProduct;
			printColor->printStringColor(this->listProduct[i]);
			continue;
		}
		cout<< printProduct->convert(this->listProduct[i])<<endl;
	}
}
void Table::printInstruction() {
	cout << endl;
	cout << "Use left and right arrow to go to next/previous page" << endl;
	cout << "To delete a row, select then press del" << endl;
	cout << "To view the detail of a product for editing, press enter" << endl;
	cout << "Press escape to go back to main menu" << endl;
}

char Table::printEditTale(Object* object) {
	system("cls");
	cout << "Selected product:" << endl;
	Product* product = dynamic_cast<Product*>(object);
	cout << product->toString()<<endl<<endl;
	cout << "Do you want to edit ? (Y / N) ";
	char result;
	result = getchar();
	return result;
}
char Table::printRemove(Object* object) {
	system("cls");
	cout << "Selected product:" << endl;
	Product* product = dynamic_cast<Product*>(object);
	cout << product->toString() << endl << endl;
	cout << "Do you really want to delete this product? (Y/N) ";
	char result;
	result = getchar();
	return result;
}
void Table::add() {
	string name;
	long long price;
	system("cls");
	cout << "Enter the name of product: "  ;
	getline(cin, name);
	cout << "Enter the price: ";
	cin >> price;
	Product* a = new Product(name, price);
	this->listProduct.push_back(a);
}