////map��ÿ��Ԫ�ض���һ��pair,��һ��Ϊ��ֵ�����������ã�
////�ڶ���ֵΪʵֵ��
////map/multimap���ڹ���ʽ�������ײ��Ǻ��������ʵ�ֶ�Ԫ���Զ�����
////map���������ظ�keyֵԪ�أ�multimap����
////unordered_map�ײ����ݽṹ���ǹ�ϣ��
////1.���캯��
////map<T1,T2>mp;Ĭ�Ϲ���
////map(const map<>&mp)����������
////map<>& operator=(const map<>&mp)
////2.��С�ͽ���
////size();������Ԫ�ظ�����
////empty();
////swap();
// //3.�����ɾ��
////insert(elem);
////clear();
////erase(pos);ɾ����������ָԪ�أ�������һ��Ԫ�صĵ�������
////erase(begin,end);ɾ������Ԫ�أ�������һ��Ԫ�ص�������
////erase(key);ɾ��������ֵΪkey��Ԫ�أ�
////С���������[key],��������ڸ�key�������ֵ�ԣ�key,0)
////4.���Һ�ͳ��
////find(key);����key�Ƿ���ڣ������򷵻�������������򷵻�end(();
////count(key);ͳ��key��Ԫ�ظ�����
////5.����:Ĭ�ϴ�С��������
//
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//class MyCompare
//{
//public:
//	//bool operator()(pair<int,string> v1, pair<int,string> v2) const?????
//	//��Ϊpair�����Զ������ͣ�
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
////template<typename T1,typename T2>
////��Ϊ������ģ�庯��
//void PrintMap1(map<int, string>& m) 
//{
//	for (map<int, string>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << "\t" << "value=" << it->second << endl;
//	}
//}
//void PrintMap2(map<int, string, MyCompare>& m)
//{
//	for (map<int, string, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << "\t" << "value=" << it->second << endl;
//	}
//}
//int main()
//{
//	map<int, string>m1;
//	pair<int, string>p1(1, "�ƺ���");
//	pair<int, string>p2(3, "����Ϫ");
//	pair<int, string>p3(2, "����");
//	pair<int, string>p4(4, "����");
//	m1.insert(p1);
//	m1.insert(p2); 
//	m1.insert(p3);
//	m1.insert(p4);
//	PrintMap1(m1);
//	//ɾ����һ��Ԫ�أ�����ӡ��ɾ��Ԫ�غ�һ��Ԫ�ص����֣�
//	cout<< (*m1.erase(m1.begin())).second << endl;
//
//	cout << "�Զ�������:" << endl;
//	map<int, string,MyCompare>m2;
//	pair<int, string>p5(1, "�ƺ���");
//	pair<int, string>p6(3, "����Ϫ");
//	pair<int, string>p7(2, "����");
//	pair<int, string>p8(4, "����");
//	m2.insert(p5);
//	m2.insert(p6);
//	m2.insert(p7);
//	m2.insert(p8);
//	PrintMap2(m2);
//	system("pause");
//}