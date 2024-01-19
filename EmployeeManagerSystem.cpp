#include"EmployeeManageSystem.h"


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
{
	cout << "��ӭʹ�ã��ټ���" << endl;
}

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
	cout << "���:" << emps[i].EmpNo << "�ȼ���" << emps[i].grade << "��н��" << emps[i].accumPay;
	while ((c = getchar()) != 27)
	{
		switch (c)
		{
		case UP:
		{
			if (i >= 1) cout << "���:" << emps[--i].EmpNo << "�ȼ���" << emps[--i].grade << "��н��" << emps[--i].accumPay;
			else cout << "�Ѿ��ǵ�һ����" << endl;
		}break;
		case DOWN:
		{
			if (i < emps.size() - 1) cout << "���:" << emps[++i].EmpNo << "�ȼ���" << emps[++i].grade << "��н��" << emps[++i].accumPay;
			else cout << "�Ѿ������һ����" << endl;
		}break;
		default:
			cout << "Invalid operations" << endl; break;
		}
	}
}