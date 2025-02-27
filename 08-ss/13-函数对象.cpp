////重载函数调用操作符的类，其对象称为函数对象；
////函数对象使用重载的()时，行为类似函数调用，也叫访函数；
////本质上仿函数是一个类，不是一个函数；
////仿函数在使用时，可以像普通函数那样有返回值，也可以有参数；
////仿函数超出普通函数的概念，可以有自己的状态；
////仿函数可以作为参数传递；
//#include<string>
//using namespace std;
//#include<iostream>
////仿函数像一个普通函数，有自己的参数和返回值
//class myAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v1;
//	}
//};
////内部可以有自己的状态：
//class myPrint
//{
//public:
//	int count;
//    myPrint()
//	{
//		count = 0;
//}
//	void operator()(string s)
//	{
//		cout<< s << endl;
//		count++;
//	}
//};
////函数对象/仿函数可以作为参数
//
//void doPrint(myPrint& mp,string s)
//{
//	mp(s);
//}
//int main()
//{
//	myAdd ma;
//	cout << ma(10, 10) <<endl;
//	////
//	myPrint mp;
//	mp("heeello");
//	mp("heeello");
//	mp("heeello");
//	cout <<"myPrint调用次数：" <<mp.count << endl;
//	//////
//
//	doPrint(mp, "hello world");
//	system("pause");
//}
