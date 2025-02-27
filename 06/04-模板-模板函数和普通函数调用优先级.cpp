////1.如果模板函数和普通函数都可以实现，优先调用普通函数；
////2.可以通过空模板参数列表来强制调用模板函数；
////3.函数模板也可以发生重载；
////4.如果函数模板可以产生更好的匹配，优先调用函数模板；
//
//#include<iostream>
//using namespace std;
//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "调用的函数模板" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b,T c)
//{
//	cout << "调用的重载函数模板" << endl;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	myPrint(a, b);//匹配度一致的情况下，优先调用普通函数
//	myPrint<>(a, b);//可以强制调用函数模板
//	myPrint(a, b, c);//模板匹配度更好， 优先调用模板
//	system("pause");
//}