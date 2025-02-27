////全局函数类内实现，直接在类内声明友元即可；
////全局函数类外实现，需要让编译器提前知道全局函数和Person类的存在；
//#include<iostream>
//using namespace std;
////让编译器提前知道Person类的存在：
//template<typename T1,typename T2>
//class Person;
//
////类外实现：（提前让编译器直到全局函数的存在）
//template<typename T1,typename T2>
//void showPerson2(Person<T1, T2>& p)//很明显是一个模板函数；
//{
//	cout << p.m_Name << "\t" << p.m_Age << endl;
//}
//
//template<typename T1,typename T2>
//class Person
//{
//	//1.全局函数类内实现：
//	friend void showPerson1(Person<T1, T2>& p)
//	{
//		cout << p.m_Name << "\t" << p.m_Age << endl;
//	}
//	//2.全局函数类外实现
//	friend void showPerson2<>(Person<T1, T2>& p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//int main()
//{
//	Person<string, int> p1("张三", 18);
//	showPerson1(p1);
//	showPerson2(p1);
//	system("pause");
//}