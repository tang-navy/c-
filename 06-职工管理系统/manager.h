#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
class Manager :public Worker
{
public:
	Manager(int id, string name, int dId);//�вι��캯��
	void showInfo();//��д
	string getDemptName();//��д
};