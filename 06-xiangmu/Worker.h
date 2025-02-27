#pragma once
#include<string>
#include<iostream>
using namespace std;
class Worker
{
public:
	int m_Id;
	string m_Name;
	int DeptId;
	virtual void ShowInf()=0;
	virtual string GetDempt()=0;
};