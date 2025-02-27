#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#define FileName "DemptFile"
#include"Worker.h"
#include"Manager.h"
#include"Employer.h"
#include"Boss.h"
using namespace std;

class WorkerManager
{
public:
	Worker** EmpArr;
	int EmpNum;
	bool FileIsEmpty;
	WorkerManager();
	void ShowMenu();
	int GetEmpNum();
	void LoadData();
	void SaveToFile();
	void AddEmp();
	void ShowAllEmp();
	void Exit();
	void DeleteEmp();
	void ModifyEmp();
	void FindEmp();
};
