////����Ԫ�ض����ڲ���ʱ�Զ�������
//// set/multiset���ڹ���ʽ�������ײ��Ƕ�������
////set���������ظ���Ԫ�أ�multiset�������ظ���Ԫ�أ�
////1.���캯����
////set<T> s;Ĭ�Ϲ���
//// set(const set&s);��������
////set&operator=(const set&s);��ֵ����
////2.��С�ͽ���
////size();
////empty();
////swap(s);����������������
////3.�����ɾ��
////insert(elem);
////clear();
////erase(begin,end);
////erase(elem);
////4.���Һ�ͳ��
////find(key);����key�Ƿ���ڣ����ڷ��ص����������򷵻�set.end();
////count(key);ͳ��key�ĸ�����������multiset;
//
//#include<set>
//#include<unordered_set>
//#include<iostream>
//using namespace std;
//int main()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(5);
//	s1.insert(20);
//	s1.insert(18);
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << "-------------------------------" << endl;
//	unordered_set<int> s2;
//	s2.insert(10);
//	s2.insert(5);
//	s2.insert(20);
//	s2.insert(18);
//	for (unordered_set<int>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	set<int>s3(s1);
//	set<int>::iterator it = s3.find(20);
//	if (it == s3.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" << endl;
//	}
//	//set/multiset������
//	//set����ɹ��᷵��һ����ֵ��,������λ�õ�����
//	// ��һ���жϲ����Ƿ�ɹ��Ĳ���ֵ��mulisetֻ�᷵�ص�������
//	pair<set<int>::iterator, bool>p1 = s1.insert(90);//���벻����Ԫ�أ���ɹ���
//	cout << *(p1.first) << endl;
//	cout << p1.second << endl;
//	pair<set<int>::iterator, bool>p2 = s1.insert(90);//�����Ѵ���Ԫ�أ�
//	cout << *(p2.first) << endl;//��ʹ�Ѵ��ڣ�Ҳ�᷵���Ѵ���Ԫ�صĵ������� 
//	cout << p2.second << endl;
//	multiset<int>s4;
//	multiset<int>::iterator itt=s4.insert(999);
//	cout << *itt << endl;
//	system("pause");
//}