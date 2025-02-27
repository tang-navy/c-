//#include<iostream>
//#include<string>
//using namespace std;
//template<typename T1,typename T2>
//class Person
//{
//	public:
//	Person(T1 name, T2 age);
//	void showPerson();
//	T1 m_Name;
//	T2 m_Age;
//};
////构造函数的内外实现
//template<typename T1, typename T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Age = age;
//	this->m_Name = name;
//}
////成员函数的类外实现：
//template<typename T1, typename T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << this->m_Name << "\t" << this->m_Age << endl;
//}
//
//int main()
//{
//	Person<string, int>p1("孙悟空", 999);
//	p1.showPerson();
//	system("pause");
//}