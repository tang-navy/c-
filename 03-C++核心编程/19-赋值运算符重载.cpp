////c++���ٸ�һ�������4��������
////1.Ĭ�Ϲ��캯��������ʵ�֣�
////2.Ĭ����������������ʵ�֣�
////3.Ĭ�Ͽ���������
////4.��ֵ�����operator=��
//#include<iostream>
//using namespace std;
//class Cow
//{
//public:
//	int* age;
//	int weigh;
//	Cow(int a, int w)
//	{
//		this->age = new int(a);
//		this->weigh = w;
//	}
//	Cow& operator=(Cow &c)
//	{
//		if (this->age != NULL) 
//		{
//			delete this->age;
//			this->age = NULL;
//		}
//		this->age = new int(*c.age);
//		this->weigh = c.weigh;
//		return *this;
//	}
//	
//	~Cow() 
//	{
//		if (age != NULL)
//		{
//			delete age;
//			age = NULL;
//		}
//	}
//};
//
//void test19()
//{
//	Cow c1(10, 10);
//	Cow c2(20, 20);
//	Cow c3(30, 30);
//	//���ʣ�c3.operator=(c2.operator=(c1));
//	c3 = c2 = c1;
//	
//	cout << *c1.age << c1.weigh << endl;
//	cout << *c2.age << c2.weigh << endl;
//	cout << *c3.age << c3.weigh << endl;
//
//}
//int main()
//{
//	test19();
//	system("pause");
//
//}