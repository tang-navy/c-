////1.ģ�岢�������ܵģ���Щ�ض����������ͣ���Ҫ�þ��廯��ʽ������ʵ�֣�
////�������þ��廯ģ�壬����Զ������͵�ͨ�û�
////ѧϰģ�岻��Ϊ��дģ�壬������STL������ϵͳ�ṩ��ģ�壻
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
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "�����" << endl;
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
////1.���������
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
////2.���廯ģ��
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
//	//��Ȼ���ᱨ�������淴�Ƴ�T��Person ����ʱ���ж����������޷�������
//	//�������1����������أ�2�����廯ģ��
//	if (tag)
//	{
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "�����" << endl;
//	}
//}
//
//int main() {
//	test1();
//	test2();
//	system("pause");
//}