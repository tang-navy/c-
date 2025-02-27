////map中每个元素都是一个pair,第一个为键值，起到索引作用，
////第二个值为实值；
////map/multimap属于关联式容器，底层是红黑树，能实现对元素自动排序；
////map不允许有重复key值元素，multimap允许；
////unordered_map底层数据结构则是哈希表；
////1.构造函数
////map<T1,T2>mp;默认构造
////map(const map<>&mp)；拷贝构造
////map<>& operator=(const map<>&mp)
////2.大小和交换
////size();容器中元素个数；
////empty();
////swap();
// //3.插入和删除
////insert(elem);
////clear();
////erase(pos);删除迭代器所指元素，返回下一个元素的迭代器；
////erase(begin,end);删除区间元素，返回下一个元素迭代器；
////erase(key);删除容器中值为key的元素；
////小括号运算符[key],如果不存在该key则会插入键值对（key,0)
////4.查找和统计
////find(key);查找key是否存在，存在则返回其迭代器，否则返回end(();
////count(key);统计key的元素个数；
////5.排序:默认从小到大排序
//
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//class MyCompare
//{
//public:
//	//bool operator()(pair<int,string> v1, pair<int,string> v2) const?????
//	//因为pair不是自定义类型？
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
////template<typename T1,typename T2>
////何为不能用模板函数
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
//	pair<int, string>p1(1, "唐海军");
//	pair<int, string>p2(3, "刘蓝溪");
//	pair<int, string>p3(2, "王玉");
//	pair<int, string>p4(4, "杨哑");
//	m1.insert(p1);
//	m1.insert(p2); 
//	m1.insert(p3);
//	m1.insert(p4);
//	PrintMap1(m1);
//	//删除第一个元素，并打印出删除元素后一个元素的名字；
//	cout<< (*m1.erase(m1.begin())).second << endl;
//
//	cout << "自定义排序:" << endl;
//	map<int, string,MyCompare>m2;
//	pair<int, string>p5(1, "唐海军");
//	pair<int, string>p6(3, "刘蓝溪");
//	pair<int, string>p7(2, "王玉");
//	pair<int, string>p8(4, "杨哑");
//	m2.insert(p5);
//	m2.insert(p6);
//	m2.insert(p7);
//	m2.insert(p8);
//	PrintMap2(m2);
//	system("pause");
//}