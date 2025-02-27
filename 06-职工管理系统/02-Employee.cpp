#include"employee.h"
Employee::Employee(int id, string name, int dId)
{
	m_Id=id;
	m_Name=name;
	m_DeptId=dId;
}
void Employee:: showInfo()
{
	cout << "职工编号：" << this->m_Id << "\t职工姓名："
		<< this->m_Name << "\t岗位：" << this->getDemptName() 
		<<"\t岗位职责：" <<"完成经理交给任务" << endl;
}
string Employee::getDemptName()
{
	return string("员工");
}