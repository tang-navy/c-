#include"boss.h"
Boss::Boss(int id, string name, int dId)
{
	m_Id = id;
	m_Name = name;
	m_DeptId = dId;
}
void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id << "\tְ��������"
		<< this->m_Name << "\t��λ��" << this->getDemptName()
		<< "\t��λְ��" << "����˾һ������" << endl;
}
string Boss::getDemptName()
{
	return string("�ϰ�");
}