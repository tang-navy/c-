//#include<iostream>
//#include<string>
//using namespace std;
//class Monkey
//{
//public:
//	int m_age;
//	int m_height; 
//	string m_color;
//	Monkey(int a, int h, string c)
//	{
//		m_age = a;
//		m_height = h;
//		m_color = c;
//	}
//	Monkey(const Monkey &m)
//	{
//		m_age = m.m_age;
//		m_height = m.m_height;
//		m_color = m.m_color;
//		cout << "调用拷贝构造函数" << endl;
//	}
//};
//
//Monkey fun(Monkey m) {
//	m.m_age *= 2;
//	m.m_height *= 2;
//	return m;
//}
//int mainQ1()
//{
//	Monkey m1(12, 120, "白色");
//	Monkey m2(10, 126, "黑色");
//	m2 = fun(m1);
//	system("pause");
//	return 0;
//	//原因：在调用函数时，会生成函数返回值类型的临时对象，
//	// 去接收函数的返回值，生成临时对象的过程即利用函数的返回值
//	// 进行拷贝初始化；
//
//}