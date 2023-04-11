#pragma once
#include"OfficeEmployee.h"
#include"Worker.h"

#include<vector>


class company {
private:
	vector<Employee*> list;
	long bigSalary;
public:
	company() { bigSalary = 0; }
	void inputList();
	void print();
	long totalSalryAMonth();
	void printHighestSalary();

};