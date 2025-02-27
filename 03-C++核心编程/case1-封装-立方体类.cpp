////设计立方体类，成员属性有：长宽高
////分别用全局函数和成员函数·判断俩个立方体是否相同
////成员函数的调用必须有一个已知的成员函数去调用
//#include<iostream>
//using namespace std;
//
//class Cube {
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//public:
//	//设置长宽高
//	void set_L(int l) {
//		m_L = l;
//	}
//	void set_H(int h) {
//		m_H = h;
//	}
//	void set_W(int w) {
//		m_W = w;
//	}
//
//	//获取长宽高
//	int get_L() {
//		return m_L;
//	}
//	int get_W() {
//		return m_W;
//	}
//	int get_H() {
//		return m_H;
//	}
//	//获取体积
//	int get_volume() {
//		return m_L * m_W * m_H;
//	}
//
//	//利用成员函数判断两个立方体是否相同
//	void Is_same(Cube c) {
//		if (m_L == c.get_L() && m_W == c.get_W() && m_H == c.get_H()) {
//			cout << "俩立方体相同" << endl;
//		}
//		else
//			cout << "俩立方体bu相同" << endl;
//	}
//};
// 
////利用全局函数判断俩个立方体是否相同
//void Is_same(Cube& c1, Cube& c2) {
//	int H1 = c1.get_H();
//	int H2 = c2.get_H();
//	int L1 = c1.get_L();
//	int L2 = c2.get_L();
//	int W1 = c1.get_W();
//	int W2 = c2.get_W();
//	if (H1 == H2 && L1 == L2 && W1 == W2) {
//		cout << "俩立方体相同" << endl;
//	}
//	else
//		cout << "俩立方体不相同" << endl;
//}
//
//int maincase1() {
//	Cube c1;
//	c1.set_L(11);
//	c1.set_W(10);
//	c1.set_H(10);
//	cout << "c1的体积为：" << c1.get_volume() << endl;
//	Cube c2;
//	c2.set_L(10);
//	c2.set_W(10);
//	c2.set_H(10);
//	Is_same(c1, c2);
//	c1.Is_same(c2);
//	system("pause");
//	return 0;
//}