#include"workerManager.h"

WorkerManager::WorkerManager()
{
	//�ļ�������ʱ�ĳ�ʼ��
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())//�ж��ļ��Ƿ�򿪳ɹ�,���û�и��ļ�����᷵��false��
	{
		cout << "�ļ�������!��������������˵���" << endl;
		system("pause");
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ��Ѵ����������ļ�Ϊ��
	char ch;
	ifs >> ch;
	//����ļ�Ϊ�գ���ô�ļ�ֻ��һ���ļ���β��
	//��ifs==EOF����ô���ó�Աeof�򷵻��棻
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ�գ���������������˵�" << endl;
		system("pause");
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ��Ѵ��ڣ��Ҳ�Ϊ��
	int num = this->get_EmpNum();
	cout << "ϵͳ���Դ浵ְ������Ϊ��" << num << endl;
	cout << "��������������˵���" << endl;
	system("pause");
	this->m_EmpNum = num;
	this->init_Emp();//���ļ����ݵ������
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

void WorkerManager::show_Menu()
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
void WorkerManager:: exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);//ֱ���˳�����
}

void WorkerManager::Add_Emp()
{
	cout << "���������ְ������" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;//�¿ռ�Ĵ�С
		Worker**newSpace=new Worker* [newSize];//�����¿ռ�
		if (this->m_EmpNum > 0)//��ԭ����ת�Ƶ��¿ռ�ȥ��
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;
			cout << "�������" << i + 1 << "����Ա����ţ�" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����Ա��������" << endl;
			cin >> name;
			cout << "��ѡ��ְ����λ��" << endl;
			cout << "1:��ְͨ����2.����3.�ϰ�" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
		}
		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;
		this->m_EmpArray = newSpace;
		//����ְ������
		this->m_EmpNum += addNum;
		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����Ա��" << endl;
		//���ñ����ļ�����
		this->save();
		//д��ɹ����ļ�һ����Ϊ��
		this->m_FileIsEmpty = false;
		system("pause");
	}
	else
	{
		cout << "������������" << endl;
	}
}

//�����ļ�
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	//�ԣ����ǣ������ʽ���ļ������û�и��ļ���������Ŀ���½��ļ���
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " " 
			<< this->m_EmpArray[i]->m_Name<< " "
			<< this->m_EmpArray[i]->m_DeptId<< endl;
	}
	//�ر��ļ�
	ofs.close();
}

//���ļ���Ϊ�գ�ͳ���ļ�������
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int Num=0;
	int id;
	string name;
	int Deptld;
	while (ifs >> id &&ifs>> name &&ifs>> Deptld)
	{
		Num++;
	}
	ifs.close();
	return Num;
}

//���ļ��е�������ָ��������գ����ļ����ݼ��ص�����
//�˺���ǰ���ǣ��Ѿ��ж��ļ���Ϊ�գ�
void WorkerManager::init_Emp()
{
	int num = this->get_EmpNum();
	int i = 0;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	this->m_EmpArray = new Worker * [num];
	
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		Worker* worker = NULL;
		if (did == 1)
		{
			worker = new Employee(id, name, did);
		}
		if (did == 2)
		{
			worker = new Manager(id, name, did);
		}
		if (did == 3)
		{
			worker = new Boss(id, name, did);
		}
		this->m_EmpArray[i] = worker;
		i++;
	}
}

//��ʾ����Ա����Ϣ
void WorkerManager::show_AllEmp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//���ö�̬���ó���ӿ�
			//ע��this->m_EmpArray[i]�ǻ���ָ�룬ֻ����ָ����������
			this->m_EmpArray[i]->showInfo();
		}
	}
	cout << "��������������˵�������������������" << endl;
	system("pause");
}

//�����ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ�գ��޷�ɾ��" << endl;
		system("pause");
		return;
	}
	int id;
	int index=-1;
	cout << "��������Ҫɾ��ְ���ı�ţ�" << endl;
	cin >> id;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "Ҫɾ����ְ�������ڣ��밴������������˵�" << endl;
		system("pause");
		return;
	}
	else//����Ҫɾ����ְ��������ɾ���ñ��ְ��
	{ 
		delete this->m_EmpArray[index];
		for (int j = index; j < this->m_EmpNum-1; j++)
		{
			this->m_EmpArray[j] = this->m_EmpArray[j + 1];
		}
		this->m_EmpArray[this->m_EmpNum - 1] = NULL;
		this->m_EmpNum--;
		if (this->m_EmpNum == 0)
		{
			this->m_FileIsEmpty == true;
		}
		this->save();
		cout << "ɾ���ɹ���" << endl;
		system("pause");
	}
}
////�����ɾ��ְ��
//void WorkerManager::Del_Emp()
//{
//	if (this->m_FileIsEmpty)
//	{
//		cout << "�ļ�Ϊ�գ��޷�ɾ����";
//	}
//	else
//	{
//		int id;
//		cout << "��������ɾ��ְ����ţ�" << endl;
//		cin >> id;
//		int pos=-1;
//		for (int i = 0; i < this->get_EmpNum(); i++)
//		{
//			if (this->m_EmpArray[i]->m_Id == id)
//			{
//				pos = i;
//				break;
//			}
//		}
//		if (pos == -1)
//		{
//			cout << "�����ڸñ��Ա����" << endl;
//			system("pause");
//			return;
//
//		}
//		else
//		{
//			delete this->m_EmpArray[pos];
//			for (int i = pos; i < this->get_EmpNum()-1; i++)
//			{
//				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
//			}
//			this->m_EmpArray[this->m_EmpNum-1] = NULL;
//			this->m_EmpNum--;
//			if (this->m_EmpNum == 0)
//			{
//				this->m_FileIsEmpty == true;
//			}
//			this->save();
//		}
//
//	}
//}






//������޸�ְ����Ϣ
void WorkerManager::Change_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ�գ��޷��޸ģ�" << endl;
		cout << "��������������˵�" << endl;
		system("pause");
		return;
	}

	int id;
	int index = -1;
	cout << "��������Ҫɾ��ְ���ı�ţ�" << endl;
	cin >> id;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	if (index == -1)
	{
		cout << "Ҫɾ����ְ�������ڣ��밴������������˵�" << endl;
		system("pause");
		return;
	}
	else//����Ҫ�޸ĵ�ְ���������޸ĸñ��ְ��
	{
		int id;
		string name;
		int Did;
		cout << "�޸�ǰְ��������Ϣ��" << endl;
		this->m_EmpArray[index]->showInfo();
		delete m_EmpArray[index];
		cout << "�������޸ĺ�ְ����ţ�" << endl;
		cin >> id;
		cout << "�������޸ĺ�ְ��������" << endl;
		cin >> name;
		cout << "�������޸ĺ�ְ�����ű�ţ�" << endl;
		cin >> Did;
		switch (Did)
		{
		case 1:
			this->m_EmpArray[index] = new Employee(id, name, Did);
			break;
		case 2:
			this->m_EmpArray[index] = new Manager(id, name, Did);
			break;
		case 3:
			this->m_EmpArray[index] = new Boss(id, name, Did);
			break;
		}
		this->save();
		cout << "�޸ĳɹ���" << endl;
		system("pause");
	}
}

//����Ż�����������ְ��
void WorkerManager::Find_Emp()
{
	cout << "��ѡ����ҷ�ʽ��" << endl;
	cout << "1.��ְ����Ų���" << endl;
	cout << "2.��ְ����������" << endl;
	bool tag = false;
	int Select;
	cin >> Select;
	if (Select == 1)
	{
		int id;
		cout << "�����������ְ����ţ�" << endl;
		cin >> id;
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i]->m_Id == id)
			{
				this->m_EmpArray[i]->showInfo();
				tag = true;
				break;
			}
		}
		if (!tag)
		{
			cout << "���޴���" << endl;
		}
	}
	else if (Select == 2)
	{
		string name;
		cout << "�����������ְ��������" << endl;
		cin >> name;
		
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i]->m_Name == name)
			{
				this->m_EmpArray[i]->showInfo();
				tag = true;
			}
		}
		if (!tag)
		{
			cout << "���޴���" << endl;
		}
	}
	else
	{
		cout << "ѡ������" << endl;
	}
	system("pause");
}

//����Ÿ�ְ������
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ����ļ������ڣ��޷�����" << endl;
		system("pause");
		return;
	}
	else
	{
		//ʹ��ѡ������
		for (int i = 0; i < this->m_EmpNum - 1; i++)
		{
			int min = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[min]->m_Id)
				{
					min = j;
				}
			}
			if (min != i)
			{
				Worker* tempt = NULL;
				tempt = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[min];
				this->m_EmpArray[min] = tempt;
			}
		}
		this->save();
		cout << "����ɹ�" << endl;
	}
	system("pause");
}

//����ļ�
void WorkerManager::Clean_File()
{
	cout << "ȷ������ļ���" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;
	int Select = 0;
	cin >> Select;
	if (Select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		//����ļ����ڣ�ɾ���ļ������´�����
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[]this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ���" << endl;
		
	}
	else if (Select == 2)
	{
		return;
	}
	else
	{
		cout << "ѡ�����󣬰�������������˵���" << endl;
	}
	system("pause");
}