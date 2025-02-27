//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//class   myCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	sort(v.begin(), v.end(), myCompare());//使用函数对象改变排序策略；
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//}