#include"manager.h"
Manager::Manager(int id, string name, int dId)
{
	m_Id = id;
	m_Name = name;
	m_DeptId = dId;
	
}
void Manager::showInfo()
{
	cout << "ְ����ţ�" << this->m_Id << "\tְ��������"
		<< this->m_Name << "\t��λ��" << this->getDemptName()
		<< "\t��λְ��" << "����ϰ彻������" << endl;
}
string Manager::getDemptName()
{
	return string("����");
}