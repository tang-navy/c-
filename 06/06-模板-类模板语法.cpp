////template<typename T>后紧跟类；
////类模板和函数模板区别：
////1.类模板没有自动类型推导方式；
////2.类模板在模板参数列表中可以有默认参数，函数模板没有；
//
//#include<iostream>
//#include<string>
//using namespace std;
//template<typename Nametype,typename Agetype=int>
//class Person
//{ 
//public:
//	Nametype m_name;
//	Agetype m_age;
//	Person(Nametype name, Agetype age)
//	{
//		this->m_age = age;
//		this->m_name = name;
//	}
//	void showPerson()
//	{
//		cout << this->m_name<< "\t" << this->m_age << endl;
//	}
//};
//int main()
//{
//	Person<string, int> p1("孙悟空", 999);
//	Person<string,double> p2("猪八戒", 997.6);
//	p1.showPerson();
//	p2.showPerson();
//
//	system("pause");
//}