////�㷨��Ҫ��ͷ�ļ�algorithm,functional,numeric��ɣ�
////algorithm��STL����ͷ�ļ�����һ�����漰�Ƚϡ����򡢽��������ҡ�������
////numeric�����С��ֻ���������������Ͻ��м���ѧ�����ģ�庯��
////functional������һЩģ���࣬����������������
////1.������
////for_each(iterator begin,iterator end,�º���֮���)
////transform������Ǩ��
//
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Person
//{
//public:
//	Person()
//	{
//
//	}
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
////��ͨ����
//void print01(Person v)//����Ĳ���Ҫ���������Ԫ�ص��������Ͷ�Ӧ��
//{
//	cout <<( v.name+=v.name) << "\t"<<v.age<<"\t";
//}
////�º���
//class print02
//{
//public:
//	void operator()(Person v)
//	{
//		cout << v.name << "\t" << v.age << "\t";
//	}
//};
////���˹����л��ÿ������ȡ��������ĳ�ִ�����ٷ��ػ�ȥ
//class trans
//{
//public:
//	Person& operator()(Person& v)
//	{
//		v.age = -v.age;
//		return v;
//	   
//	}
//};
//int main()
//{
//	vector<Person>v;
//	Person p1("����", 24);
//	Person p2("����", 54);
//	Person p3("�����", 29);
//	Person p4("�ŷ�", 34);
//	Person p5("����", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	for_each(v.begin(), v.end(), print01);//��ͨ����ʹ�ú�����
//	//���������������������ķ�ʽ������ע�����������ı�ԭʼ����
//	cout << endl;
//	for_each(v.begin(), v.end(), print02());//��ʹ�ú�������
//	cout << endl;
//	//transform
//	vector<Person>v1;
//	v1.resize(v.size());
//	transform(v.begin(), v.end(), v1.begin(), trans());
//	for_each(v1.begin(), v1.end(), print02());
//	cout << endl;
//	system("pause");
//}
