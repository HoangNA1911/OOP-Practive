#pragma once
#include"DairyCow.h"
#include"Goat.h"
#include<vector>;
class ABCFarm {
private:
	vector<DairyCow> cows;
	vector<Goat>goats;
	void inputCow();
	void inputGoat();
	void outputCow();
	void outputGoat();
	void outputCowValue(int min ,int max);
	void outputGoatValue(int min, int max);

public:
	void input();
	void output();
	void outputByValue(int min, int max);
};