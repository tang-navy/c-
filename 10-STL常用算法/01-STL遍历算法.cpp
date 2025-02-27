////算法主要有头文件algorithm,functional,numeric组成；
////algorithm是STL所有头文件最大的一个，涉及比较、排序、交换、查找、遍历等
////numeric体积很小，只包含几个在序列上进行简单数学运算的模板函数
////functional定义了一些模板类，用以声明函数对象；
////1.遍历：
////for_each(iterator begin,iterator end,仿函数之类的)
////transform遍历并迁移
//
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class Person
//{
//public:
//	Person()
//	{
//
//	}
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
////普通函数
//void print01(Person v)//传入的参数要与想遍历的元素的数据类型对应；
//{
//	cout <<( v.name+=v.name) << "\t"<<v.age<<"\t";
//}
////仿函数
//class print02
//{
//public:
//	void operator()(Person v)
//	{
//		cout << v.name << "\t" << v.age << "\t";
//	}
//};
////搬运过程中会把每个数据取出来，做某种处理后，再返回回去
//class trans
//{
//public:
//	Person& operator()(Person& v)
//	{
//		v.age = -v.age;
//		return v;
//	   
//	}
//};
//int main()
//{
//	vector<Person>v;
//	Person p1("赵云", 24);
//	Person p2("刘备", 54);
//	Person p3("诸葛亮", 29);
//	Person p4("张飞", 34);
//	Person p5("关羽", 40);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	for_each(v.begin(), v.end(), print01);//普通函数使用函数名
//	//第三个参数代表以怎样的方式遍历，注意遍历并不会改变原始数据
//	cout << endl;
//	for_each(v.begin(), v.end(), print02());//类使用函数对象
//	cout << endl;
//	//transform
//	vector<Person>v1;
//	v1.resize(v.size());
//	transform(v.begin(), v.end(), v1.begin(), trans());
//	for_each(v1.begin(), v1.end(), print02());
//	cout << endl;
//	system("pause");
//}
