#include"Employer.h"
Employer::Employer(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->DeptId = did;
}
void Employer::ShowInf()
{
	cout << "ְ����ţ�" << this->m_Id << "\t"
		<< "ְ��������" << this->m_Name << "\t"
		<< "ְ����λ��" << this->GetDempt() << endl;
}
string Employer::GetDempt()
{
	return "Ա��";
}