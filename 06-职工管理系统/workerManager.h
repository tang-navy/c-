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
	WorkerManager();//���캯��
	void show_Menu();//չʾ�˵�
	void exitSystem();//�˳�ϵͳ

	int m_EmpNum;//��¼ְ������
	Worker** m_EmpArray;//ְ������ָ��
	bool m_FileIsEmpty;//����ļ��Ƿ�Ϊ��

	void Add_Emp();//���ְ����Ϣ
	void save();//�����ļ�
	int get_EmpNum();//����ļ��б����ְ������
	void init_Emp();//��ʼ��Ա��
	void show_AllEmp();//չʾ����Ա����Ϣ
	void Del_Emp();//�����ɾ��ְ����Ϣ
	void Change_Emp();//������޸�ְ����Ϣ
	void Find_Emp();//����Ż�����������ְ��
	void Sort_Emp();//����Ÿ�ְ������
	void Clean_File();//����ļ�
	~WorkerManager();//��������
	
};