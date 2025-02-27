////类模板成员函数后创建时机是在调用阶段，会导致分文件编写时链接不到；
////解决方案：
////1.直接包含.cpp源文件；
////2.将声明和实现写到同一个文件中，并更改后缀为.hpp，
//// hpp是约定的名称，并不是强制
//#include<iostream>
//using namespace std;
//#include"Person.cpp"
////#include"Person.h"如果仅包含头文件，会出现链接错误
////因为类模板成员函数只有在调用时才会创建，由于函数并没有创建
//// 编译器只是看到了函数的声明，所以在Person.cpp找不到函数的实际定义代码
////当调用函数时
//void test01()
//{
//	Person<string, int>p1("Jerry", 18);
//	p1.showPerson();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//}