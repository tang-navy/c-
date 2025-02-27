////有五名选手abcde，10个评委会对每个选手打分，去除最高分和最低分，取平均分；
//#include<iostream>
//#include<deque>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
////定义选手类
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
//		string name = "选手";
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
//		cout << "请输入第"<<i+1<<"个选手的10个评分：" << endl;
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