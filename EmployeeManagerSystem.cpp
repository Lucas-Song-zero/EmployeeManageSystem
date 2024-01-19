#include"EmployeeManageSystem.h"
#include<conio.h>
#include<vector>
int employee::current_individualEmpNo = 1;

employee::employee(int _grade, double _accumpay)
	:grade(_grade),
	accumPay(_accumpay)

{
	EmpNo = current_individualEmpNo;
	current_individualEmpNo++;
	cout << "创建成功 " << endl;
}

employee::~employee()
{}

void employee::set_grade(int _grade)
{
	grade = _grade;
	cout << "设置成功" << endl;
}
void employee::set_accumPay(double _accumpay)
{
	accumPay = _accumpay;
	cout << "设置成功" << endl;
}

void Print(vector<employee> emps)
{
	char c;
	static int i = 0;
	cout << "编号:" << emps[i].EmpNo << "等级：" << emps[i].grade << "月薪：" << emps[i].accumPay << endl ;
	getchar();
	while ((c = _getch()) != 27)
	{
		switch (c)
		{
		case 'w':
		{
			if (i >= 1) cout << "编号:" << emps[--i].EmpNo << "等级：" << emps[i].grade << "月薪：" << emps[i].accumPay << endl;
			else cout << "已经是第一个了" << endl;
		}break;
		case 's':
		{
			if (i < emps.size() - 1) cout << "编号:" << emps[++i].EmpNo << "等级：" << emps[i].grade << "月薪：" << emps[i].accumPay << endl;
			else cout << "已经是最后一个了" << endl;
		}break;
		default:
			cout << "Invalid operations" << endl; break;
		}
	}
	cout << "欢迎使用" << endl;
}