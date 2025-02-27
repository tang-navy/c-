//#include<iostream>
//using namespace std;
////template<class T> bool equal_to<T>;
////template<class T> bool not_equal<T>;
////template<class T> bool greater<T>;
////template<class T> bool greater_equal<T>;
////template<class T> bool less<T>;
////template<class T> bool less_equal<T>;
//#include<functional>
//#include<vector>
//#include<algorithm>
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//};
//
//class myCompare
//{
//public:
//	bool operator()(Person p1, Person p2)
//	{
//		return p1.m_age > p2.m_age;
//	}
//};
//void test01()
//{
//	vector<Person>v;
//	Person p1("’‘‘∆", 24);
//	Person p2("¡ı±∏", 54);
//	Person p3("÷Ó∏¡¡", 29);
//	Person p4("’≈∑…", 34);
//	Person p5("πÿ”", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//greater<Person>G;
//	sort(v.begin(), v.end(), myCompare());
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it).m_name<<(*it).m_age << endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//}