//#include<iostream>
//#include"pig.h"
//using namespace std;
//
////只能利用全局函数重载左移运算符；
//ostream& operator<<(ostream& out, Pig& p)
//{
//	//注意顺序：cout在左，输出对象在右；
//	cout << "age:" << p.age << "\t" << "weight:" << p.weight;
//	return out;
//}
//
//////前置++重载
////Pig& operator++(Pig& p)
////{
////	//返回引用的原因：确保对一个数据进行++操作
////	++p.age;
////	++p.weight;
////	return p;
////}
//////后置++重载
////Pig operator++(Pig& p,int)
////{
////	Pig temp=p;
////	++p.age;
////	++p.weight;
////	return temp;
////}
//int main() {
//	Pig p1(10, 110);
//	cout << p1 <<"\thello" << endl;
//	//本质：operator<<(cout,p1);
//	operator<<(cout, p1)<<endl;
//	cout << ++(++p1) << endl;
//	cout << p1 << endl;
//	
//	//cout << (p1++) << endl;//为啥会报错？？？
//	system("pause");
//	return 0;
//}