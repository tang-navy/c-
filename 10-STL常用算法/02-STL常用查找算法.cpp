////find(begin,end,val);����Ԫ�أ�����ָ��Ԫ�صĵ�������û�ҵ��򷵻�β���������
////find_if(begin end,ν��);���������ң�
////adjacent_find(begin,end);
//// �����Ƿ��������ظ�Ԫ��,����У��򷵻������ظ��ĵ�һ��Ԫ�ص�������
////bool binary_search(begin,end,val);
//// ���ֲ���,������٣�����ʹ����������;
////int count(begin,end,val);
////ͳ��Ԫ�ظ���,�ײ��ǰ�����val�Աȣ�������Ҫ����==
////int count_if(begin,end,ν��);������ͳ��
//
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<algorithm>
//
//class person
//{
//public:
//	person()
//	{
//
//	}
//	person(string name, int a)
//		{
//			this->name = name;
//			this->age = age;
//		}
//	string name;
//	int age;
//	bool operator==(const person &p)
//	{
//		if (this->name == p.name && this->age == p.age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
////дһ��ν��
//class greaterfour
//{
//public:
//	bool operator()(const person& p)
//	{
//		return p.age > 30;
//			
//	}
//};
//int main()
//{
//	vector<person>v;
//	person p1("����", 24);
//	person p2("����", 54);
//	person p3("�����", 29);
//	person p4("�ŷ�", 34);
//	person p5("����", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	person pp("aaa", 20);
//	vector<person>::iterator it=find(v.begin(), v.end(), pp);
//	//find�ײ�ᰤ���Ա�Ԫ���Ƿ���Ŀ��Ԫ����ȣ�����������������Ҫ����==
//	if (it == v.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << endl;
//	}
//
//	vector<person>::iterator itt = find_if(v.begin(), v.end(), greaterfour());
//	if (itt == v.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���"<<(*itt).name << endl;
//	}
//	system("pause");
//}