#pragma once
#include"worker.h"
class Employer :public Worker
{
public:
	Employer(int id, string name, int did);
	void ShowInf();
	string GetDempt();
	
};