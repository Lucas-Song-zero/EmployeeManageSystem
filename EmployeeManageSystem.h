#pragma once
#define UP 72
#define DOWN 80


#include<iostream>
#include<vector>
using namespace std;

class employee
{
public:
	employee(int _grade=0,double _accumpay=0);
	~employee();
	void set_grade(int _grade);
	void set_accumPay(double _accumpay);
	friend void Print(vector<employee>);
private:
	static int current_individualEmpNo;
	int EmpNo;
	int grade;
	double accumPay;
};