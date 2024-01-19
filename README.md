# EmployeeManageSystem
using Cpp to create an empmanagesys
# 第一次的尝试，学到不少
不知道为什么用*define UP 对应的ASCII码值不能实现功能，最后只能在switch里面直接用'w'、's'了* 

上面的问题有待解决poe,启动！

大致框架是这样的
```
class :
employee类：
public：
	employee()
	~employee() \\没用到
	set_grade  
	set_accumPay
	set_EmpNo \\没用到
	Print
private：
	static int Current_individualEmpNo
  int EmpNo
	int grade
	double accumPay
```
