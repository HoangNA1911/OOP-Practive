#pragma once
#include"DairyCow.h"
#include"Goat.h"
#include<vector>;
class ABCFarm {
private:
	vector<DairyCow*> cows;
	vector<Goat*>goats;
	

public:
	void input();
	void output();
	void outputByValue(int min, int max);
};