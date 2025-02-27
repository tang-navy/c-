#include"Boss.h"
Boss::Boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->DeptId = did;
}
void Boss::ShowInf()
{
	cout << "职工编号：" << this->m_Id << "\t"
		<< "职工姓名：" << this->m_Name << "\t"
		<< "职工岗位：" << this->GetDempt() << endl;
}
string Boss::GetDempt()
{
	return "老板";
}