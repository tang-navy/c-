////当类模板遇到继承时，需要注意：
////1.当子类继承的父亲是一个类模板时，子类在声明时，要指出父亲中T的类型
////若不指定，编译器无法给子类分配内存，
////如果想灵活指出父类中T的类型，子类也必须变为模板；
////总结：若父亲是类模板，子类在继承时必须指出父亲T的数据类型，
////就算子类也是模板，也得体现；
//
//#include<iostream>
//#include<string>
//using namespace std;
//template<typename T>
//class Base
//{
//public:
//	T m_age;
//};
//class Son1 :public Base<int>//继承时必须指明父类模板的T
//{
//public:
//	string m_name;
//};
//
////要想子类也是类模板：
//template<typename T1,typename T2>
//class Son2 :public Base<T1>
//{
//public:
//	T2 m_name;
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_age = 18;
//	s1.m_name = "张三";
//	cout << s1.m_name << "\t" << s1.m_age << endl;
//}
//
//void test02()
//{
//	Son2<int,string> s2;
//	s2.m_age = 19;
//	s2.m_name = "李四";
//	cout << s2.m_name << "\t" << s2.m_age << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//}
