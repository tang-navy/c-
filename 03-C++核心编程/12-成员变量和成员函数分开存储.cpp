//
//#include<iostream>
//using namespace std;
//class Bird
//{
//	//定义一个空类
//};
//class Duck
//{
//	int m_age;
// 
//};
//class Worm
//{
//	int m_age;
//	static int m_len;//静态成员变量和函数都不属于类对象上；
//	void fun12()//非静态成员函数，也不属于类的对象上；
//	{
//
//	}
//};
//
//int Worm::m_len = 2;
//
//int main() 
//{
//	Bird b1;
//	//为了区分不同的空对象，于是为每个空对象也得分配一个字节；
//	//空类具象化的对象才是空对象，没有初始化的对象可不是空对象；
//	Duck d1;
//	//非空对象大小只与非静态成员变量有关，成员函数包括静态成员函数，都不属于某个具象化的对象；
//	Worm w1;
//	cout << "空对象b1大小为：" << sizeof(b1) << endl;
//	cout << "对象d1大小为：" << sizeof(d1) << endl;
//	cout << "对象w1大小为：" << sizeof(w1) << endl;
//	system("pause");
//	return 0;
//}