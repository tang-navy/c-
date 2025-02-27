//#include<iostream>
//#include<set>
//#include<string>
//using namespace std;
////由于set要求有序，所以自定义数据类型，在插入到set中时，必须指明排序规则；
//class Person
//{
//public:
//	string m_name;
//	int age;
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->age = age;
//	}
//};
//
//class MyCompare
//{
//public:
//	bool operator()(Person p1, Person p2) const
//	{
//		return p1.age > p2.age;
//	}
//};
//int main()
//{
//	Person p1("刘备", 33);
//	Person p2("关羽", 43);
//	Person p3("诸葛亮", 23);
//	Person p4("赵云", 28);
//	Person p5("张飞",38);
//	set<Person, MyCompare>s1;//指定排序方式
//	s1.insert(p1);
//	s1.insert(p2);
//	s1.insert(p3);
//	s1.insert(p4);
//	s1.insert(p5);
//	for (set<Person, MyCompare>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << (*it).m_name << "\t" << (*it).age << endl;
//	}
//	system("pause");
//}