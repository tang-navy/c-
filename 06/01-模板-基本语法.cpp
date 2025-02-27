////C++另一种编程思想称为泛型编程，主要利用的技术就是模板；
////C++提供两种模板机制：函数模板和类模板;
//#include<iostream>
//#include<string>
//using namespace std;
//template<typename T>
////声明一个模板，告诉编译器后面代码紧跟着的T不要报错，T是一个通用数据类型；
//void fun(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//使用函数模板的方法
//	//1.自动类型推导：
//	fun(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	string s1 = "hello";
//	string s2 = "world";
//	//2.显式指定类型：
//	fun<string>(s1, s2);
//	cout << "s1=" << s1 << endl;
//	cout << "s2=" << s2 << endl;
//	system("pause");
// }