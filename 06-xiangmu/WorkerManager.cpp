#include"WorkerManager.h"
#include<iostream>
//#include<fstream>
WorkerManager::WorkerManager()//Ĭ�Ϲ��캯��
{

	this->EmpArr = NULL;
	this->EmpNum = this->GetEmpNum();//�ļ�Ϊ�ջ򲻴��ڶ�����0
	if (this->GetEmpNum() == 0)
	{
		this->FileIsEmpty = true;
	}
	this->LoadData();
}

void WorkerManager::ShowMenu()
{
	cout << "********************************************" << endl;
	cout << "********************************************" << endl;
	cout << "~~~~~~~��ӭʹ��ְ������ϵͳ��~~~~~~~" << endl;
	cout << "***************0.�˳��������***************" << endl;
	cout << "***************1.����ְ����Ϣ***************" << endl;
	cout << "***************2.��ʾȫ��ְ����Ϣ************" << endl;
	cout << "***************3.ɾ����ְְ��****************" << endl;
	cout << "***************4.�޸�ְ����Ϣ****************" << endl;
	cout << "***************5.����ְ����Ϣ****************" << endl;
	cout << "***************6.���������******************" << endl;
	cout << "***************7.��������ĵ�****************" << endl;
	cout << "********************************************" << endl;
	cout << "********************************************" << endl;

}
void WorkerManager::Exit()//�˳�����
{
	system("cls");
	cout << "��ӭ�´�ʹ�ã���������˳�ϵͳ��" << endl;
	cin.get();
	cin.get();
	exit(0);
}

void WorkerManager::LoadData()//���ļ����ݼ��ص������У�
{
	ifstream ifs;
	ifs.open(FileName, ios::in);//�����ļ�������ʱ�����ᴴ�����ļ���
	if (!ifs.is_open())
	{
		cout << "�ļ������ڣ�" << endl;
		ifs.close();
		cin.get();
		return;
	}
	if (this->FileIsEmpty)
	{
		cout << "�ļ�Ϊ��" << endl;
		ifs.close();
		cin.get();
		return;
	}
	//�ļ������Ҳ�Ϊ��
	this->FileIsEmpty = false;
	int num = this->GetEmpNum();
	this->EmpNum = num;
	this->EmpArr = new Worker*[num];
	for (int i = 0; i < num; i++)
	{
		int id;
		string name;
		int did;
		ifs>> id;
		ifs >> name;
		ifs >> did;
		Worker* worker=NULL;
		switch (did)
		{
		case 1:
			 worker = new Employer(id, name, did);
			break;
		case 2:
			 worker = new Manager(id, name, did);
			break;
		case 3:
			 worker = new Boss(id, name, did);
			break;
		defalut:
			break;
		}
		this->EmpArr[i] = worker;
	}
	ifs.close();
	cout << "�ļ�����ɹ�����������������˵���" << endl;
	cin.get();
}

int WorkerManager::GetEmpNum()//��õ�ǰ�ļ��е�ְԱ��
{
	ifstream ifs;
	char ch;
	ifs.open(FileName, ios::in);
	if (!ifs.is_open()) //�ļ������ڣ�
	{
		ifs.close();
		return 0;
	}
	else if (ifs.eof())//�ļ�Ϊ��
	{
		ifs.close();
		return 0;
	}
	else
	{
		int id;
		string name;
		int did;
		int num=0;
		while (ifs >> id && ifs >> name && ifs >> did)
		{
			num++;
		}
		ifs.close();
		return num;
	}
}

void WorkerManager::AddEmp()
{
	system("cls");
	int num = this->GetEmpNum();
	int addnum;
	cout << "���������ְ��������" << endl;
	cin >> addnum;
	Worker** p = new Worker * [num + addnum];
	for (int i = 0; i < num; i++)
	{
		p[i] = this->EmpArr[i];
	}
	int id;
	string name;
	int did;
	for (int i = 0; i < addnum; i++)
	{
		cout << "�������" << i + 1 << "��ְ����ţ�" << endl;
		cin >> id;
		cout << "�������" << i + 1 << "��ְ��������" << endl;
		cin >> name;
		cout << "�������" << i + 1 << "��ְ�����ű�ţ�" << endl;
		cin >> did;
		switch (did)
		{
		case 1:
			p[i + num] = new Employer(id, name, did);
			break;
		case 2:
			p[i + num] = new Manager(id, name, did);
			break;
		case 3:
			p[i + num] = new Boss(id, name, did);
			break;
		default:
			break;
		}
	}
	if (this->EmpArr != NULL)
	{
		delete[] this->EmpArr;
	}
	this->EmpArr = p;
	this->EmpNum += addnum;
	this->FileIsEmpty = false;
	this->SaveToFile();
	cout << "��ӳɹ�����������������˵���" << endl;
	system("pause");
}

void WorkerManager::SaveToFile()//���浽�ĵ���
{
	ofstream ofs;
	ofs.open(FileName, ios::out);
	for (int i = 0; i < this->EmpNum; i++)
	{
		ofs << this->EmpArr[i]->m_Id << " "
			<< this->EmpArr[i]->m_Name << " "
			<< this->EmpArr[i]->DeptId << endl;
	}
	ofs.close();
}

void WorkerManager::ShowAllEmp()
{
	system("cls");
	if (this->EmpNum == 0)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
		cin.get();
		cin.get();
		return;
	}
	for (int i = 0; i < this->EmpNum; i++)
	{
		this->EmpArr[i]->ShowInf();
	}
	cout << "��������������˵���" << endl;
	cin.get();
	cin.get();
}

void WorkerManager::DeleteEmp()
{
	system("cls");
	if (this->FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ�գ�����������������˵�" << endl;
		cin.get();
		cin.get();
		return;
	}
	cout << "��������ɾ��ְ����ţ�" << endl;
	int id;
	cin >> id;
	int index = -1;
	for (int i = 0; i < this->EmpNum; i++)
	{
		if (this->EmpArr[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "�����ڸñ��ְ��" << endl;
		cin.get();
		cin.get();
		return;
	}
	else//���ڸ�Ա��
	{
		delete this->EmpArr[index];
		this->EmpArr[index] = NULL;
		for (int i = index ; i < this->EmpNum-1; i++)
		{
			this->EmpArr[i] = this->EmpArr[i + 1];
		}
		this->EmpArr[this->EmpNum - 1] = NULL;
		if (--this->EmpNum == 0)
		{
			this->FileIsEmpty = true;
		}

		this->SaveToFile();
		cout << "ɾ���ɹ�����������������˵���" << endl;
		cin.get();
		cin.get();
	}
}

void WorkerManager::ModifyEmp()
{
	system("cls");
	if (this->FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ�գ�����������������˵�" << endl;
		cin.get();
		cin.get();
		return;
	}
	cout << "���������޸�ְ����ţ�" << endl;
	int id;
	cin >> id;
	int index = -1;
	for (int i = 0; i < this->EmpNum; i++)
	{
		if (this->EmpArr[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "�����ڸñ��ְ��" << endl;
		cin.get();
		cin.get();
		return;
	}
	else//���ڸ�Ա��
	{
		delete this->EmpArr[index];
		string name;
		int did;
		cout << "�������޸ĺ��ְ����ţ�" << endl;
		cin >> id;
		cout << "�������޸ĺ��ְ��������" << endl;
		cin >> name;
		cout << "�������޸ĺ��ְ�����ű�ţ�" << endl;
		cin >> did;
		switch (did)
		{
		case 1:
			this->EmpArr[index] = new Employer(id, name, did);
			break;
		case 2:
			this->EmpArr[index] = new Manager(id, name, did);
			break;
		case 3:
			this->EmpArr[index] = new Boss(id, name, did);
			break;
		default:
			break;
		}
		cout << "�޸ĳɹ�����������������˵�" << endl;
		cin.get();
		cin.get();
	}
}

void WorkerManager::FindEmp()
{
	system("cls");
	if (this->FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ�գ�����������������˵�" << endl;
		cin.get();
		cin.get();
		return;
	}
	int select;
	cout << "��������ҷ�ʽ��" << endl;
	cout << "1.����Ų���\n2.�����ֲ���" << endl;
	cin >> select;
	if (select == 1) 
	{
		cout << "���������޸�ְ����ţ�" << endl;
		int id;
		cin >> id;
		int index = -1;
		for (int i = 0; i < this->EmpNum; i++)
		{
			if (this->EmpArr[i]->m_Id == id)
			{
				index = i;
				break;
			}
		}
		if (index == -1)
		{
			cout << "�����ڸñ��ְ��" << endl;
			cin.get();
			cin.get();
			return;
		}
		else//���ڸ�Ա��
		{
			this->EmpArr[index]->ShowInf();
		}
	}
	else if (select == 2)
	{
		string name;
		cout << "������������ְ��������" << endl;
		cin >> name;
		for (int i = 0; i < this->EmpNum; i++)
		{
			if (this->EmpArr[i]->m_Name == name)
			{
				this->EmpArr[i]->ShowInf();
			}
		}
		cin.get();
		cin.get();
	}
	else
	{
		cout << "ѡ������" << endl;
		cin.get();
		cin.get();
		return;
	}
}