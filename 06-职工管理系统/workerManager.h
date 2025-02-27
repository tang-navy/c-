#pragma once
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "empFile.txt"
using namespace std;

class WorkerManager
{
public:
	WorkerManager();//构造函数
	void show_Menu();//展示菜单
	void exitSystem();//退出系统

	int m_EmpNum;//记录职工人数
	Worker** m_EmpArray;//职工数组指针
	bool m_FileIsEmpty;//标记文件是否为空

	void Add_Emp();//添加职工信息
	void save();//保存文件
	int get_EmpNum();//获得文件中保存的职工人数
	void init_Emp();//初始化员工
	void show_AllEmp();//展示所有员工信息
	void Del_Emp();//按编号删除职工信息
	void Change_Emp();//按编号修改职工信息
	void Find_Emp();//按编号或者姓名查找职工
	void Sort_Emp();//按编号给职工排序
	void Clean_File();//清空文件
	~WorkerManager();//析构函数
	
};