#include"workerManager.h"

WorkerManager::WorkerManager()
{
	//文件不存在时的初始化
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())//判断文件是否打开成功,如果没有该文件，则会返回false；
	{
		cout << "文件不存在!按任意键进入主菜单！" << endl;
		system("pause");
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件已创建，但是文件为空
	char ch;
	ifs >> ch;
	//如果文件为空，那么文件只有一个文件结尾标
	//若ifs==EOF，那么调用成员eof则返回真；
	if (ifs.eof())
	{
		cout << "文件为空！按任意键进入主菜单" << endl;
		system("pause");
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件已存在，且不为空
	int num = this->get_EmpNum();
	cout << "系统中以存档职工人数为：" << num << endl;
	cout << "按任意键进入主菜单！" << endl;
	system("pause");
	this->m_EmpNum = num;
	this->init_Emp();//将文件数据导入程序
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
void WorkerManager:: exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);//直接退出程序
}

void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工数量" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		int newSize = this->m_EmpNum + addNum;//新空间的大小
		Worker**newSpace=new Worker* [newSize];//开辟新空间
		if (this->m_EmpNum > 0)//将原数据转移到新空间去；
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
			cout << "请输入第" << i + 1 << "个新员工编号：" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新员工姓名：" << endl;
			cin >> name;
			cout << "请选择职工岗位：" << endl;
			cout << "1:普通职工；2.经理；3.老板" << endl;
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
		//释放原有空间
		delete[] this->m_EmpArray;
		this->m_EmpArray = newSpace;
		//更新职工人数
		this->m_EmpNum += addNum;
		//提示添加成功
		cout << "成功添加" << addNum << "个新员工" << endl;
		//调用保存文件函数
		this->save();
		//写入成功后文件一定不为空
		this->m_FileIsEmpty = false;
		system("pause");
	}
	else
	{
		cout << "输入数据有误" << endl;
	}
}

//保存文件
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	//以（覆盖）输出方式打开文件，如果没有该文件，则在项目下新建文件；
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " " 
			<< this->m_EmpArray[i]->m_Name<< " "
			<< this->m_EmpArray[i]->m_DeptId<< endl;
	}
	//关闭文件
	ofs.close();
}

//若文件不为空，统计文件中人数
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

//将文件中的数据用指针数组接收（将文件数据加载到程序）
//此函数前提是，已经判断文件不为空；
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

//显示所有员工信息
void WorkerManager::show_AllEmp()
{
	//判断文件是否为空
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//利用多态调用程序接口
			//注意this->m_EmpArray[i]是基类指针，只是它指向各子类对象；
			this->m_EmpArray[i]->showInfo();
		}
	}
	cout << "按任意键返回主菜单（即进行清屏操作）" << endl;
	system("pause");
}

//按编号删除职工
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者文件为空，无法删除" << endl;
		system("pause");
		return;
	}
	int id;
	int index=-1;
	cout << "请输入想要删除职工的编号：" << endl;
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
		cout << "要删除的职工不存在！请按任意键返回主菜单" << endl;
		system("pause");
		return;
	}
	else//存在要删除的职工，进行删除该编号职工
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
		cout << "删除成功！" << endl;
		system("pause");
	}
}
////按编号删除职工
//void WorkerManager::Del_Emp()
//{
//	if (this->m_FileIsEmpty)
//	{
//		cout << "文件为空，无法删除！";
//	}
//	else
//	{
//		int id;
//		cout << "请输入欲删除职工编号：" << endl;
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
//			cout << "不存在该编号员工！" << endl;
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






//按编号修改职工信息
void WorkerManager::Change_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者文件为空，无法修改！" << endl;
		cout << "按任意键返回主菜单" << endl;
		system("pause");
		return;
	}

	int id;
	int index = -1;
	cout << "请输入想要删除职工的编号：" << endl;
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
		cout << "要删除的职工不存在！请按任意键返回主菜单" << endl;
		system("pause");
		return;
	}
	else//存在要修改的职工，进行修改该编号职工
	{
		int id;
		string name;
		int Did;
		cout << "修改前职工基本信息：" << endl;
		this->m_EmpArray[index]->showInfo();
		delete m_EmpArray[index];
		cout << "请输入修改后职工编号：" << endl;
		cin >> id;
		cout << "请输入修改后职工姓名：" << endl;
		cin >> name;
		cout << "请输入修改后职工部门编号：" << endl;
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
		cout << "修改成功！" << endl;
		system("pause");
	}
}

//按编号或者姓名查找职工
void WorkerManager::Find_Emp()
{
	cout << "请选择查找方式：" << endl;
	cout << "1.按职工编号查找" << endl;
	cout << "2.按职工姓名查找" << endl;
	bool tag = false;
	int Select;
	cin >> Select;
	if (Select == 1)
	{
		int id;
		cout << "请输入待查找职工编号：" << endl;
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
			cout << "查无此人" << endl;
		}
	}
	else if (Select == 2)
	{
		string name;
		cout << "请输入待查找职工姓名：" << endl;
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
			cout << "查无此人" << endl;
		}
	}
	else
	{
		cout << "选择有误！" << endl;
	}
	system("pause");
}

//按编号给职工排序
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或者文件不存在，无法排序" << endl;
		system("pause");
		return;
	}
	else
	{
		//使用选择法排序
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
		cout << "排序成功" << endl;
	}
	system("pause");
}

//清空文件
void WorkerManager::Clean_File()
{
	cout << "确认清空文件吗？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;
	int Select = 0;
	cin >> Select;
	if (Select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		//如果文件存在，删除文件并重新创建；
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
		cout << "清空成功！" << endl;
		
	}
	else if (Select == 2)
	{
		return;
	}
	else
	{
		cout << "选择有误，按任意键返回主菜单！" << endl;
	}
	system("pause");
}