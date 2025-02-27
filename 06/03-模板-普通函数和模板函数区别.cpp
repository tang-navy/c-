//#include<iostream>
//using namespace std;
////普通函数可以进行隐式类型转换
////函数模板，若使用自动类型推导，不可以发生隐式类型转换
////函数模板，若使用显式指定类型，可以发生隐式类型转换
//template<typename T>
//T add(T a, T b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	double b = 10.5;
//	//add(a, b)编译器无法反推T的类型
//	cout << add<int>(a, b) << endl;
//	system("pause");
//}