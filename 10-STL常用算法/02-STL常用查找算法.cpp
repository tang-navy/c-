////find(begin,end,val);查找元素，返回指定元素的迭代器，没找到则返回尾后迭代器；
////find_if(begin end,谓词);按条件查找；
////adjacent_find(begin,end);
//// 查找是否有相邻重复元素,如果有，则返回相邻重复的第一个元素迭代器；
////bool binary_search(begin,end,val);
//// 二分查找,返回真假；必须使用有序序列;
////int count(begin,end,val);
////统计元素个数,底层是挨个和val对比，所以需要重载==
////int count_if(begin,end,谓词);按条件统计
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
////写一个谓词
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
//	person p1("赵云", 24);
//	person p2("刘备", 54);
//	person p3("诸葛亮", 29);
//	person p4("张飞", 34);
//	person p5("关羽", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	person pp("aaa", 20);
//	vector<person>::iterator it=find(v.begin(), v.end(), pp);
//	//find底层会挨个对比元素是否与目标元素相等，非内置数据类型需要重载==
//	if (it == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了" << endl;
//	}
//
//	vector<person>::iterator itt = find_if(v.begin(), v.end(), greaterfour());
//	if (itt == v.end())
//	{
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了"<<(*itt).name << endl;
//	}
//	system("pause");
//}