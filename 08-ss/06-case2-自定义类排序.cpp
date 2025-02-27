////list容器作排序；
////按照年龄升序，年龄相同则按照身高降序排序；
//
//#include<iostream>
//#include<list>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	int m_height;
//	Person(string name, int age, int height)
//	{
//		this->m_name = name;
//		this->m_age = age;
//		this->m_height = height;
//	}
//};
//
//bool compare(Person &p1, Person &p2)
//{
//	 if (p1.m_age == p2.m_age)
//	{
//		 return p1.m_height > p2.m_height;
//	}
//	else
//	{
//		return p1.m_age<p2.m_age;
//	}
//}
//int main()
//{
//	list<Person> L;
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << (*it).m_name << "\t" << (*it).m_age << "\t"
//			<< (*it).m_height << endl;
//	}
//	
//	L.sort(compare);
//	cout << "排序后："<<endl;
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << (*it).m_name << "\t" << (*it).m_age << "\t"
//			<< (*it).m_height << endl;
//	}
//	system("pause");
//}