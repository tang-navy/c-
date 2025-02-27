////1.指定传入类型（最常用）
////2.参数模板化
////3.整个类模板化
//#include<iostream>
//#include<string>
//using namespace std;
//
//template<typename T1,typename T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void showPerson()
//	{
//		cout << this->m_name << "\t" << this->m_age << endl;
//	}
//	T1 m_name;
//	T2 m_age;
//};
//
////1.指定传入类型
//void printPerson1(Person<string,int> &p)
//{
//	p.showPerson();
//}
////2.参数模板化
//template<typename T1,typename T2>
//void printPerson2(Person<T1,T2>& p)
//{
//	p.showPerson();
//	cout << "T1的类型为：" << typeid(T1).name() << endl;
//	cout << "T2的类型为：" << typeid(T2).name() << endl;
//}
////3.整个类模板化
//template<typename T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T的类型为：" << typeid(T).name() << endl;
//}
//
//void test01()
//{
//	Person<string, int>p1("孙悟空", 1000);
//	printPerson1(p1);
//}
//void test02()
//{
//	Person<string, int>p2("猪八戒", 999);
//	printPerson2(p2);
//}
//void test03()
//{
//	Person<string, int>p3("沙和尚", 998);
//	printPerson3(p3);
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//}