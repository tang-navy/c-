////������ѡ��abcde��10����ί���ÿ��ѡ�ִ�֣�ȥ����߷ֺ���ͷ֣�ȡƽ���֣�
//#include<iostream>
//#include<deque>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////����ѡ����
//class Person
//{
//public:
//	string m_name;
//	int m_score;
//	Person(string name, int score)
//	{
//		this->m_name = name;
//		this->m_score = score;
//	}
//};
//
//void CreatPerson(vector<Person> &v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//}
//
//void SetScore(vector<Person>& v)
//{
//	deque<int>dq;
//	int score;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "�������"<<i+1<<"��ѡ�ֵ�10�����֣�" << endl;
//		for (int j = 0; j < 10; j++)
//		{
//			cin >> score;
//			dq.push_back(score);
//		}
//		sort(dq.begin(), dq.end());
//		dq.pop_front();
//		dq.pop_back();
//		int sum=0;
//		for (deque<int>::iterator it = dq.begin(); it != dq.end(); it++)
//		{
//			sum += *it;
//		}
//		v[i].m_score = sum / dq.size();
//		
//	}
//}
//int main()
//{
//	vector<Person> v;
//	CreatPerson(v);
//	SetScore(v);
//	for (int i = 0; i < 5; i++)
//	{
//		cout << v[i].m_score << endl;
//	}
//	system("pause"); 
//}