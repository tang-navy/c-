////1.默认情况下，编译器会自动至少给一个类添加三个函数：
////默认构造函数，默认析构函数，默认拷贝函数；
////2.构造函数调用规则如下：
////若用户定义有参构造函数，C++不会提供默认构造，但会构造默认拷贝函数；
////若用户提供拷贝构造函数，C++不再提供其他构造函数；
//
//#include<iostream>
//using namespace std;
//class Tree {
//public:
//	int m_age;
//	int m_height;
//	Tree(int a, int b) {//自定义带参数的构造函数；
//		m_age = a;
//		m_height = b;
//	}
//};
//
//
//int main8() {
//	//Tree t1;错误，已自定义带参数的构造函数，不能使用默认构造；
//	Tree t1(10,100);
//	Tree t2(t1);
//	cout << "t2.m_age=" << t2.m_age << endl;
//	cout << "t2.m_height=" << t2.m_height << endl;
//	system("pause");
//	return 0;
//}