#include"ABCFarm.h"
#include"string"
void ABCFarm::inputCow() {
	double temp;
	cout << "Enter the weight of the cow: ";
	DairyCow result;
	cin >> temp;
	result.setWeight(temp);
	cout << "Enter the age of the cow: ";
	cin >> temp;
	result.setAge(temp);
	this->cows.push_back(result);
}
void ABCFarm::inputGoat() {
	double temp;
	cout << "Enter the weight of the goat: ";
	Goat result;
	cin >> temp;
	result.setWeight(temp);
	cout << "Enter the age of the goat: ";
	cin >> temp;
	result.setAge(temp);
	this->goats.push_back(result);
}
void ABCFarm::input() {
	cout << "hay chon con vat can nhap (cow, goat)" << endl;
	string choose;
	while (true) {
		getline(cin, choose);
		if (choose == "cow") {
			this->inputCow();
			break;
		}
		else if (choose == "goat") {
			this->inputGoat();
			break;
		}
		else { continue; }
	}
}

void ABCFarm::outputCow() {
	for (int i = 0; i < this->cows.size(); i++) {
		cout<<this->cows[i].ToString();
	}
}
void ABCFarm::outputGoat() {
	for (int i = 0; i < this->goats.size(); i++) {
		cout << this->goats[i].ToString();
	}
}
void ABCFarm::output() {
	cout << "Chon con vat can hien thi (cow, goat): " ;
	string choose;
	while (true) {
		getline(cin, choose);
		if (choose == "cow") {
			this->outputCow();
			break;
		}
		else if (choose == "goat") {
			this->outputGoat();
			break;
		}
		else { continue; }
	}
}
void ABCFarm::outputCowValue(int min, int max) {
	for (int i = 0; i < this->cows.size(); i++) {
		if (this->cows[i].getAge() > min && this->cows[i].getAge() < max) {
			cout << this->cows[i].ToString();
		}
	}
}
void ABCFarm::outputGoatValue(int min, int max) {
	for (int i = 0; i < this->goats.size(); i++) {
		if (this->goats[i].getAge() > min && this->goats[i].getAge() < max) {
			cout << this->goats[i].ToString();
		}
	}
}
void ABCFarm::outputByValue(int min, int max) {
	cout << "Chon con vat can hien thi (cow, goat) : " ;
	string choose;
	while (true) {
		getline(cin, choose);
		if (choose == "cow") {
			this->outputCowValue(min, max);
			break;
		}
		else if (choose == "goat") {
			this->outputGoatValue(min, max);
			break;
		}
		else { continue; }
	}

}