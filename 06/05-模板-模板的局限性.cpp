////1.模板并不是万能的，有些特定的数据类型，需要用具体化方式做特殊实现；
////可以利用具体化模板，解决自定义类型的通用化
////学习模板不是为了写模板，而是在STL能运用系统提供的模板；
//#include<iostream>
//#include<string>
//using namespace std;
//template<typename T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test1()
//{
//	int a = 10; 
//	int b = 20;
//	bool tag = myCompare(a, b);
//	if (tag)
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不相等" << endl;
//	}
//}
//
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//};
////1.运算符重载
//bool operator==(Person &p1, Person &p2)
//{
//	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////2.具体化模板
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
//void test2()
//{
//	Person p1("Mike",12);
//	Person p2("Mike", 12);
//	bool tag = myCompare(p1, p2);
//	//虽然不会报错，当后面反推出T是Person 类型时，判断相等那里会无法继续；
//	//解决方法1：运算符重载；2：具体化模板
//	if (tag)
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不相等" << endl;
//	}
//}
//
//int main() {
//	test1();
//	test2();
//	system("pause");
//}