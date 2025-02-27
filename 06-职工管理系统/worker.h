#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工抽象类
class Worker
{
public:
	int m_Id;
	string m_Name;
	int m_DeptId;

	virtual void showInfo() = 0;//显示个人信息
	virtual string getDemptName() = 0;//获取岗位名称
};