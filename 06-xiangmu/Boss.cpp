#include"Boss.h"
Boss::Boss(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->DeptId = did;
}
void Boss::ShowInf()
{
	cout << "ְ����ţ�" << this->m_Id << "\t"
		<< "ְ��������" << this->m_Name << "\t"
		<< "ְ����λ��" << this->GetDempt() << endl;
}
string Boss::GetDempt()
{
	return "�ϰ�";
}