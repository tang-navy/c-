#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
class Manager :public Worker
{
public:
	Manager(int id, string name, int dId);//有参构造函数
	void showInfo();//重写
	string getDemptName();//重写
};