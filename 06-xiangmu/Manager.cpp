#include"Manager.h"
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->DeptId = did;
}
void Manager::ShowInf()
{
	cout << "ְ����ţ�" << this->m_Id << "\t"
		<< "ְ��������" << this->m_Name << "\t"
		<< "ְ����λ��" << this->GetDempt() << endl;
}
string Manager::GetDempt()
{
	return "����";
}