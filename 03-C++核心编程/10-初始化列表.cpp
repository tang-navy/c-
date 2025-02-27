////1.初始化列表
////2.当类对象1作为另一个类的成员属性时，会先初始化对象1，
//// 即先调用对象1的构造函数；；
////3.而析构的顺序恰好反过来了；
//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Cat 
//{public:
//	int m_age;
//	int m_length;
//	string m_color;
//	//传统的初始化操作
//	/*Cat(int a, int l, string c)
//	{
//		m_age = a;
//		m_length = l;
//		m_color = c;
//	}*/
//
//	//初始化列表来初始化属性
//	Cat(int a, int l, string c) :m_age(a), m_length(l), m_color(c)
//	{
//
//	}
//};
//
//int main10() {
//	Cat c1(1, 30, "白色");
//	cout << c1.m_age << c1.m_length << c1.m_color;
//	system("pasuse");
//	return 0;
//}