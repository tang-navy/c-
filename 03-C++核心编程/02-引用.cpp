////引用：给变量取一个别名
//// 本质：引用的内部实现是一个指针常量
////引用在定义的时候就要初始化；
////引用一旦绑定某个变量，就不能再更改，所以并不存在引用常量；
//#include<iostream>
//using namespace std;
//
//int& fun1() {//此函数返回一个引用，这个引用是a的别名；
//	int a = 19;
//	return a;
//}
//
//int& fun2() {
//	static int sa = 19;//静态变量，在全局区，不会随函数调用结束而死亡；
//	return sa;
//}
//
//void showVal(const int& val) {
//	//val = 100;编译器会报错；
//	cout << val << endl;
//}
//int main2() {
//	int a = 10;
//	int& b = a;//编译器自动转换为int* const p=&a;
//	int c = 15;
//	b = c;//赋值操作，而非更改引用；
//
//
//	//引用作为形参，可以达到改变实参的效果
//
//
//	//引用作函数返回值
//	//1.不要返回局部变量的引用
//	int &ref1 = fun1();//错误，a的内存已经释放；
//	cout << "ref1="<<ref1 << endl;
//	int& ref2 = fun2();
//	cout << "ref2=" << ref2<< endl;
//	//当引用作函数的返回值，此函数则可以作为左值；
//	fun2() = 1000;//fun2返回a的引用，并对该引用重新赋值
//	cout << "ref2=" << ref2<< endl;
//
//
//	int i = 10001;
//	showVal(i);
//	//常量引用：主要用于修饰形参，防止误操作；
//	system("pause");
//	return 0;
//}
