#pragma once
#include<iostream>
#include<string>
using namespace std;

//ְ��������
class Worker
{
public:
	int m_Id;
	string m_Name;
	int m_DeptId;

	virtual void showInfo() = 0;//��ʾ������Ϣ
	virtual string getDemptName() = 0;//��ȡ��λ����
};