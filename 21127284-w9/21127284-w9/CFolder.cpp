#include"CFolder.h"

CFolder::CFolder(string name){
	this->_name = name;
}
void CFolder::add(CItem* other) {
	
	this->children.push_back(other);
	this->_numberOfName++;
}
int CFolder::size() {
	int result = 0;
	for (int i = 0; i < this->_numberOfName; i++) {
		result += this->children[i]->size();
	}
	return result;
}
void CFolder::print(bool check) {
	if (check == true) {
		for (int i = 0; i < this->_numberOfName; i++) {
			cout << this->children[i]->getName() << endl;

		}
	}
	else {
		for (int i = 0; i < this->_numberOfName; i++) {
			if (this->children[i]->getHidden() == false) {
				cout << this->children[i]->getName() << endl;
			}
		}
	}
}
CFolder* CFolder::removeByName(string name) {
	CFolder *result= new CFolder(this->_name);

	for (int i = 0; i < this->_numberOfName; i++) {
		if (this->children[i]->getName() == name) {
			this->children.erase(children.begin() + i);
			this->_numberOfName--;
			i--;
		}
		else {
			result->add(this->children[i]);
		}
	}
	return result;
}
CFolder* CFolder::findByName(string name) {
	for (int i = 0; i < this->_numberOfName; i++) {
		if (this->children[i]->getName() == name) {
			return this;
		}
		if (this->children[i]->toString() == "CFolder") {
			CFolder* temp = dynamic_cast<CFolder*>(this->children[i])->findByName(name);

			if (temp != NULL) {
				return temp;
			}
		}
	}
	return NULL;
}
void CFolder::setHidden(bool thisFolder, bool children){
	this->_hidden=thisFolder;
	if (children == true) {
		for (int i = 0; i < this->_numberOfName; i++) {
			dynamic_cast<CFolder*>(this->children[i])->_hidden = children;
		}
	}
}