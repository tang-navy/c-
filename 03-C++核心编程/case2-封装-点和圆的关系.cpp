//#include<iostream>
//using namespace std;
//#include"Point.h"
//#include"Circle.h"
////����
////class point {
////private:
////	int m_X;
////	int m_Y;
////public:
////	void set_X(int x) {
////		m_X = x;
////	}
////	void set_Y(int y) {
////		m_Y= y;
////	}
////	int get_X() {
////		return m_X ;
////	}
////	int get_Y() {
////		return m_Y;
////	}
////};
//
////Բ��
////class Circle {
////private:
////	int m_R;
////	point m_Center;
////public:
////	void set_R(int r) {
////		m_R = r;
////	}
////	void set_Center(point p) {
////		m_Center = p;
////	}
////	int get_R() {
////		return m_R;
////	}
////	point get_Center() {
////		return m_Center;
////	}
////};
//
//void isInCircle(Circle &c, point &p) {
//	int dis = (c.get_Center().get_X() - p.get_X() )* (c.get_Center().get_X() - p.get_X()) +
//		(c.get_Center().get_Y() - p.get_Y())* (c.get_Center().get_Y() - p.get_Y());
//	if (dis == c.get_R() * c.get_R()) {
//		cout << "����Բ��" << endl;
//	}
//	else if (dis > c.get_R() * c.get_R()) {
//		cout << "����Բ��" << endl;
//	}
//	else {
//		cout << "����Բ��" << endl;
//	}
//}
//int maincase2() {
//	point center;
//	point p;
//	center.set_X(10);
//	center.set_Y(0);
//	p.set_X(10);
//	p.set_Y(10);
//	Circle c1;
//	c1.set_R(10);
//	c1.set_Center(center);
//	isInCircle(c1, p);
//	system("pause");
//	return 0;
//
//
//}
