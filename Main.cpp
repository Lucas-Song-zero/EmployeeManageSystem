#include"EmployeeManageSystem.h"
#include<vector>
#pragma warning(disable:4996)

using namespace std;

employee Create()
{
	int grade;
	double accumpay;
	employee temp_emp;

	scanf("%d", &grade);
	scanf("%lf", &accumpay);
	temp_emp.set_grade(grade);
	temp_emp.set_accumPay(accumpay);

	return temp_emp;
}
int main()
{
	vector<employee> emps;
	int add_num;
	cout << "输入想要添加的成员数目" << endl;
	scanf("%d", &add_num);
	for (int i = 0; i < add_num; ++i)
	{
		emps.push_back(Create());
	}
	Print(emps);
}