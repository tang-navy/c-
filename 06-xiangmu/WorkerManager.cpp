#include"WorkerManager.h"
#include<iostream>
//#include<fstream>
WorkerManager::WorkerManager()//默认构造函数
{

	this->EmpArr = NULL;
	this->EmpNum = this->GetEmpNum();//文件为空或不存在都返回0
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
	cout << "~~~~~~~欢迎使用职工管理系统！~~~~~~~" << endl;
	cout << "***************0.退出管理程序***************" << endl;
	cout << "***************1.增加职工信息***************" << endl;
	cout << "***************2.显示全部职工信息************" << endl;
	cout << "***************3.删除离职职工****************" << endl;
	cout << "***************4.修改职工信息****************" << endl;
	cout << "***************5.查找职工信息****************" << endl;
	cout << "***************6.按编号排序******************" << endl;
	cout << "***************7.清空所有文档****************" << endl;
	cout << "********************************************" << endl;
	cout << "********************************************" << endl;

}
void WorkerManager::Exit()//退出程序
{
	system("cls");
	cout << "欢迎下次使用！按任意键退出系统！" << endl;
	cin.get();
	cin.get();
	exit(0);
}

void WorkerManager::LoadData()//将文件数据加载到程序中；
{
	ifstream ifs;
	ifs.open(FileName, ios::in);//读的文件不存在时，不会创建空文件；
	if (!ifs.is_open())
	{
		cout << "文件不存在！" << endl;
		ifs.close();
		cin.get();
		return;
	}
	if (this->FileIsEmpty)
	{
		cout << "文件为空" << endl;
		ifs.close();
		cin.get();
		return;
	}
	//文件存在且不为空
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
	cout << "文件载入成功，按任意键进入主菜单！" << endl;
	cin.get();
}

int WorkerManager::GetEmpNum()//获得当前文件中的职员数
{
	ifstream ifs;
	char ch;
	ifs.open(FileName, ios::in);
	if (!ifs.is_open()) //文件不存在；
	{
		ifs.close();
		return 0;
	}
	else if (ifs.eof())//文件为空
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
	cout << "请输入添加职工数量：" << endl;
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
		cout << "请输入第" << i + 1 << "个职工编号：" << endl;
		cin >> id;
		cout << "请输入第" << i + 1 << "个职工姓名：" << endl;
		cin >> name;
		cout << "请输入第" << i + 1 << "个职工部门编号：" << endl;
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
	cout << "添加成功，按任意键返回主菜单！" << endl;
	system("pause");
}

void WorkerManager::SaveToFile()//保存到文档；
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
		cout << "文件为空或不存在" << endl;
		cin.get();
		cin.get();
		return;
	}
	for (int i = 0; i < this->EmpNum; i++)
	{
		this->EmpArr[i]->ShowInf();
	}
	cout << "按任意键返回主菜单：" << endl;
	cin.get();
	cin.get();
}

void WorkerManager::DeleteEmp()
{
	system("cls");
	if (this->FileIsEmpty)
	{
		cout << "文件不存在或者文件为空！按任意键按返回主菜单" << endl;
		cin.get();
		cin.get();
		return;
	}
	cout << "请输入欲删除职工编号：" << endl;
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
		cout << "不存在该编号职工" << endl;
		cin.get();
		cin.get();
		return;
	}
	else//存在该员工
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
		cout << "删除成功！按任意键返回主菜单！" << endl;
		cin.get();
		cin.get();
	}
}

void WorkerManager::ModifyEmp()
{
	system("cls");
	if (this->FileIsEmpty)
	{
		cout << "文件不存在或者文件为空！按任意键按返回主菜单" << endl;
		cin.get();
		cin.get();
		return;
	}
	cout << "请输入欲修改职工编号：" << endl;
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
		cout << "不存在该编号职工" << endl;
		cin.get();
		cin.get();
		return;
	}
	else//存在该员工
	{
		delete this->EmpArr[index];
		string name;
		int did;
		cout << "请输入修改后的职工编号：" << endl;
		cin >> id;
		cout << "请输入修改后的职工姓名：" << endl;
		cin >> name;
		cout << "请输入修改后的职工部门编号：" << endl;
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
		cout << "修改成功！按任意键返回主菜单" << endl;
		cin.get();
		cin.get();
	}
}

void WorkerManager::FindEmp()
{
	system("cls");
	if (this->FileIsEmpty)
	{
		cout << "文件不存在或者文件为空！按任意键按返回主菜单" << endl;
		cin.get();
		cin.get();
		return;
	}
	int select;
	cout << "请输入查找方式：" << endl;
	cout << "1.按编号查找\n2.按名字查找" << endl;
	cin >> select;
	if (select == 1) 
	{
		cout << "请输入欲修改职工编号：" << endl;
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
			cout << "不存在该编号职工" << endl;
			cin.get();
			cin.get();
			return;
		}
		else//存在该员工
		{
			this->EmpArr[index]->ShowInf();
		}
	}
	else if (select == 2)
	{
		string name;
		cout << "请输入欲查找职工姓名：" << endl;
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
		cout << "选择有误！" << endl;
		cin.get();
		cin.get();
		return;
	}
}