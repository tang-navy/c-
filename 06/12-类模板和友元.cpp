////ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ���ɣ�
////ȫ�ֺ�������ʵ�֣���Ҫ�ñ�������ǰ֪��ȫ�ֺ�����Person��Ĵ��ڣ�
//#include<iostream>
//using namespace std;
////�ñ�������ǰ֪��Person��Ĵ��ڣ�
//template<typename T1,typename T2>
//class Person;
//
////����ʵ�֣�����ǰ�ñ�����ֱ��ȫ�ֺ����Ĵ��ڣ�
//template<typename T1,typename T2>
//void showPerson2(Person<T1, T2>& p)//��������һ��ģ�庯����
//{
//	cout << p.m_Name << "\t" << p.m_Age << endl;
//}
//
//template<typename T1,typename T2>
//class Person
//{
//	//1.ȫ�ֺ�������ʵ�֣�
//	friend void showPerson1(Person<T1, T2>& p)
//	{
//		cout << p.m_Name << "\t" << p.m_Age << endl;
//	}
//	//2.ȫ�ֺ�������ʵ��
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
//	Person<string, int> p1("����", 18);
//	showPerson1(p1);
//	showPerson2(p1);
//	system("pause");
//}