////1.ָ���������ͣ���ã�
////2.����ģ�廯
////3.������ģ�廯
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
////1.ָ����������
//void printPerson1(Person<string,int> &p)
//{
//	p.showPerson();
//}
////2.����ģ�廯
//template<typename T1,typename T2>
//void printPerson2(Person<T1,T2>& p)
//{
//	p.showPerson();
//	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
//}
////3.������ģ�廯
//template<typename T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T������Ϊ��" << typeid(T).name() << endl;
//}
//
//void test01()
//{
//	Person<string, int>p1("�����", 1000);
//	printPerson1(p1);
//}
//void test02()
//{
//	Person<string, int>p2("��˽�", 999);
//	printPerson2(p2);
//}
//void test03()
//{
//	Person<string, int>p3("ɳ����", 998);
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