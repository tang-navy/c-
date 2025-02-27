////set容器默认排序规则为从小到大，可以利用访函数改变排序规则；
//#include<set>
//#include<iostream>
//using namespace std;
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//int main()
//{
//	set<int, MyCompare>s1;
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(160);
//	s1.insert(39);
//	s1.insert(90);
//	for (set<int, MyCompare>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	system("pause");
//}