////所有元素都会在插入时自动被排序；
//// set/multiset属于关联式容器，底层是二叉树；
////set不允许有重复的元素，multiset允许有重复的元素；
////1.构造函数：
////set<T> s;默认构造
//// set(const set&s);拷贝构造
////set&operator=(const set&s);赋值操作
////2.大小和交换
////size();
////empty();
////swap(s);交换两个集合容器
////3.插入和删除
////insert(elem);
////clear();
////erase(begin,end);
////erase(elem);
////4.查找和统计
////find(key);查找key是否存在，存在返回迭代器，否则返回set.end();
////count(key);统计key的个数，多用于multiset;
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
//		cout << "没找到" << endl;
//	}
//	else
//	{
//		cout << "找到了" << endl;
//	}
//	//set/multiset的区别
//	//set插入成功会返回一个键值对,即插入位置迭代器
//	// 和一个判断插入是否成功的布尔值，muliset只会返回迭代器；
//	pair<set<int>::iterator, bool>p1 = s1.insert(90);//插入不存在元素，会成功；
//	cout << *(p1.first) << endl;
//	cout << p1.second << endl;
//	pair<set<int>::iterator, bool>p2 = s1.insert(90);//插入已存在元素；
//	cout << *(p2.first) << endl;//即使已存在，也会返回已存在元素的迭代器； 
//	cout << p2.second << endl;
//	multiset<int>s4;
//	multiset<int>::iterator itt=s4.insert(999);
//	cout << *itt << endl;
//	system("pause");
//}