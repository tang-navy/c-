////��˾��Ƹ��10Ա����ABCDEFGHIJ�������빫˾��
//// ��Ҫָ��Ա�����ĸ����Ź�������
////Ա����Ϣ�У�������������ɣ����ŷ�Ϊ���߻����������з���
////�����ʮ��Ա�����䲿�ź͹��ʣ�
////ͨ��multimap������Ϣ�Ĳ��룬key���ű�ţ�valueԱ��
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<map>
//#include<ctime>
//
//class Worker
//{
//public:
//	string m_name;
//	int m_salary;
//};
//void CreateWorker(vector<Worker>& v)
//{
//	string nameSeed("ABCDEFGHIJ");
//	for (int i = 0; i < 10; i++)
//	{
//		//v[i].m_name ="Ա��"+ nameSeed[i];
//		//v[i].m_salary = rand() % 10000 + 10000;
//		//������v��ʼΪ�գ�����Խ�磻
//		Worker w;
//		//w.m_name = "Ա��" + nameSeed[i];stringû������=��+
//		w.m_name = "Ա��" ;
//		w.m_name += nameSeed[i];
//		w.m_salary = rand() % 10000 + 10000;
//		v.push_back(w);
//	}
//}
//
//void PrintVector(vector<Worker>& v)
//{
//	for (int i=0;i<v.size();i++)
//	{
//		cout << "������" << v[i].m_name << "\t" << "���ʣ�" << v[i].m_salary << endl;
//	}
//}
//void setGroup(vector<Worker>& v,multimap<int, Worker>& mp)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int did = rand() % 3;
//		mp.insert(pair<int, Worker>(did, *it));
//	}
//}
//void PrintMap(multimap<int,Worker>& mp)
//{
//	for (multimap<int, Worker>::iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "���ű�ţ�" << it->first << "������" << it->second.m_name
//			<< "���ʣ�" << it->second.m_salary << endl;
//	}
//}
//void shwoWorkerByGroup(multimap<int, Worker>& mp) 
//{
//	cout << "�߻�������Ϣ��" << endl;
//	int num=mp.count(CEHUA);
//	multimap<int, Worker>::iterator it = mp.find(CEHUA);
//	for (int i = 0; i < num; i++)
//	{
//		cout << "������" << it->second.m_name << "\t"
//			<< "���ʣ�" << it->second.m_salary << endl;
//		it++;
//	}
//	cout << "����������Ϣ��" << endl;
//	num = mp.count(MEISHU);
//	it = mp.find(MEISHU);
//	for (int i = 0; i < num; i++)
//	{
//		cout << "������" << it->second.m_name << "\t"
//			<< "���ʣ�" << it->second.m_salary << endl;
//		it++;
//	}
//	cout << "����������Ϣ��" << endl;
//	num = mp.count(YANFA);
//	it = mp.find(YANFA);
//	for (int i = 0; i < num; i++)
//	{
//		cout << "������" << it->second.m_name << "\t"
//			<< "���ʣ�" << it->second.m_salary << endl;
//		it++;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(0));//����������� 
//	vector<Worker> v;
//	//����Ա��
//	CreateWorker(v);
//	PrintVector(v);
//	//Ա������
//	multimap<int, Worker>mp;
//	setGroup(v,mp);
//	//������ʾԱ��
//	PrintMap(mp);
//	shwoWorkerByGroup(mp);
//	system("pause");
//}