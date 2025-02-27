////STL内建了一些函数对象；
////1.算术仿函数；
////2.关系仿函数；
////3.逻辑仿函数；
////这些仿函数所产生的对象，用法和一般函数完全相同；
////使用内建函数对象，需要引入头文件<functional>;
//
////1.算术仿函数:
////template<class T> T plus<T>;加法仿函数
////template<class T> T minus<T>;减法仿函数
////template<class T> T multiplies<T>;乘法仿函数
////template<class T> T divides<T>;除法仿函数
////template<class T> T modulus<T>;取模仿函数
////template<class T> T negate<T>;取反仿函数
//
//#include<iostream>
//using namespace std;
//#include<functional>
//#include<string>
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	Person()
//	{
//
//	}
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	Person& operator+(Person p)
//	{
//		Person temp;
//		temp.m_age = this->m_age + p.m_age;
//		temp.m_name = this->m_name;
//		temp.m_name += p.m_name;
//		return temp;
//	}
//	void Print()
//	{
//		cout << this->m_name << "\t" << this->m_age << endl;
//	}
//};
//void test01()
//{
//	negate<int> n;
//	cout<<n(50)<<endl;
//	plus<int> p;
//	cout << p(10, 10) << endl;
// }
//int main()
//{
//	test01();
//	Person p1("赵磊", 20);
//	Person p2("莉莉", 18);
//	plus<Person> pl;
//	cout << pl(p1, p2).m_name << "\t" << pl(p1, p2).m_age << endl;
//	system("pause");
//}