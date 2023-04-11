#include"ABCFarm.h"
#include"string"


void ABCFarm::input() {
	double temp;
	cout << "INPUT DAIRY COW" << endl;
	cout << "Enter the weight of the cow: ";
	DairyCow *result=new DairyCow;
	cin >> temp;
	result->setWeight(temp);
	cout << "Enter the age	of the cow: ";
	cin >> temp;
	result->setAge(temp);
	this->cows.push_back(result);

	cout << "INPUT GOAT" << endl;
	cout << "Enter the weight of the goat: ";
	Goat* resulta = new Goat;
	cin >> temp;
	resulta->setWeight(temp);
	cout << "Enter the age of the goat: ";
	cin >> temp;
	resulta->setAge(temp);
	this->goats.push_back(resulta);

}
void ABCFarm::output() {
	cout << "_________________________________________________" << endl;
	cout << "List of dairy cow:" << endl;
	for (int i = 0; i < this->cows.size(); i++) {
		cout << this->cows[i]->ToString();
	}
	cout << "List of goat: " << endl;
	for (int i = 0; i < this->goats.size(); i++) {
		cout << this->goats[i]->ToString();
	}
}
void ABCFarm::outputByValue(int min, int max) {
	cout << "_________________________________________________" << endl;
	cout << "List of dairy cow ("<<min<<","<<max<<"): "<<endl;
	for (int i = 0; i < this->cows.size(); i++) {
		if (this->cows[i]->getAge() >= min && this->cows[i]->getAge() <= max) {
			cout << this->cows[i]->ToString();
		}
	}
	cout << "List of goat(" << min << "," << max << "): " << endl;
	for (int i = 0; i < this->goats.size(); i++) {
		if (this->goats[i]->getAge() >= min && this->goats[i]->getAge() <= max) {
			cout << this->goats[i]->ToString();
		}
	}
}
