////返回bool类型的仿函数称为谓词
////如果operator()接收一个参数，称为一元谓词；
////如果operator()接收两个参数，称为二元谓词；
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//按条件查找： 
//	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());//使用匿名函数对象作参数；
//	//找到了返回找到位置的迭代器，否则返回尾后迭代器；
//	if (it == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了" <<*it<< endl; 
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//}