#pragma once
class Pig
{
public:
	int age;
	int weight;

	Pig()
	{

	}
	Pig(int a, int b)
	{
		this->age = a;
		this->weight = b;
	}
	Pig& operator++()
	{//ǰ�á�++����
		this->age += 1;
		this->weight += 1;
		return *this;
	}
	Pig operator++(int)
	{//���á�++����
		Pig temp = *this;
		this->age += 1;
		this->weight += 1;
		return temp;
	}

};