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
	cout << "�����ɹ� " << endl;
}

employee::~employee()
{}

void employee::set_grade(int _grade)
{
	grade = _grade;
	cout << "���óɹ�" << endl;
}
void employee::set_accumPay(double _accumpay)
{
	accumPay = _accumpay;
	cout << "���óɹ�" << endl;
}

void Print(vector<employee> emps)
{
	char c;
	static int i = 0;
	cout << "���:" << emps[i].EmpNo << "�ȼ���" << emps[i].grade << "��н��" << emps[i].accumPay << endl ;
	getchar();
	while ((c = _getch()) != 27)
	{
		switch (c)
		{
		case 'w':
		{
			if (i >= 1) cout << "���:" << emps[--i].EmpNo << "�ȼ���" << emps[i].grade << "��н��" << emps[i].accumPay << endl;
			else cout << "�Ѿ��ǵ�һ����" << endl;
		}break;
		case 's':
		{
			if (i < emps.size() - 1) cout << "���:" << emps[++i].EmpNo << "�ȼ���" << emps[i].grade << "��н��" << emps[i].accumPay << endl;
			else cout << "�Ѿ������һ����" << endl;
		}break;
		default:
			cout << "Invalid operations" << endl; break;
		}
	}
	cout << "��ӭʹ��" << endl;
}