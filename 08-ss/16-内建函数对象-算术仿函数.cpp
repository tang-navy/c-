////STL�ڽ���һЩ��������
////1.�����º�����
////2.��ϵ�º�����
////3.�߼��º�����
////��Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ��
////ʹ���ڽ�����������Ҫ����ͷ�ļ�<functional>;
//
////1.�����º���:
////template<class T> T plus<T>;�ӷ��º���
////template<class T> T minus<T>;�����º���
////template<class T> T multiplies<T>;�˷��º���
////template<class T> T divides<T>;�����º���
////template<class T> T modulus<T>;ȡģ�º���
////template<class T> T negate<T>;ȡ���º���
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
//	Person p1("����", 20);
//	Person p2("����", 18);
//	plus<Person> pl;
//	cout << pl(p1, p2).m_name << "\t" << pl(p1, p2).m_age << endl;
//	system("pause");
//}