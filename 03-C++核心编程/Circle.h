#pragma once
#include"Point.h"
class Circle {
private:
	int m_R;
	point m_Center;
public:
	void set_R(int r);
	void set_Center(point p);
	int get_R();
	point get_Center();
};