#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
class Boss :public Worker
{
public:
	Boss(int id, string name, int dId);//有参构造函数
	void showInfo();//重写
	string getDemptName();//重写
};