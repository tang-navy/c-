////����ģ�������̳�ʱ����Ҫע�⣺
////1.������̳еĸ�����һ����ģ��ʱ������������ʱ��Ҫָ��������T������
////����ָ�����������޷�����������ڴ棬
////��������ָ��������T�����ͣ�����Ҳ�����Ϊģ�壻
////�ܽ᣺����������ģ�壬�����ڼ̳�ʱ����ָ������T���������ͣ�
////��������Ҳ��ģ�壬Ҳ�����֣�
//
//#include<iostream>
//#include<string>
//using namespace std;
//template<typename T>
//class Base
//{
//public:
//	T m_age;
//};
//class Son1 :public Base<int>//�̳�ʱ����ָ������ģ���T
//{
//public:
//	string m_name;
//};
//
////Ҫ������Ҳ����ģ�壺
//template<typename T1,typename T2>
//class Son2 :public Base<T1>
//{
//public:
//	T2 m_name;
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_age = 18;
//	s1.m_name = "����";
//	cout << s1.m_name << "\t" << s1.m_age << endl;
//}
//
//void test02()
//{
//	Son2<int,string> s2;
//	s2.m_age = 19;
//	s2.m_name = "����";
//	cout << s2.m_name << "\t" << s2.m_age << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//}
