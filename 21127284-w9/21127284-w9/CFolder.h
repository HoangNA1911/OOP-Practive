#pragma once
#include"CItem.h"
#include<set>
class CFolder : public CItem {
private:
	int _numberOfName=0;
	vector<CItem*> children;
public:
	int getNumOfName()const { return this->_numberOfName;}
		
	int size();
	CFolder(string);
	void add(CItem*);
	void print(bool);
	CFolder* removeByName(string);
	CFolder* findByName(string);
	void  setHidden(bool, bool);
	string toString() { return "CFolder"; }
};