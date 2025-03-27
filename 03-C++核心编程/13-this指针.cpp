////成员变量和成员函数是分开存储的：
//// 成员变量是每个对象上独有的，而
////每一个非静态函数只会诞生一份函数实例，也就是说多个同类型对象
//// 会共用一块代码，那么代码是如何区分是哪个对象在调用自己？
//// 使用this 指针指向被调用成员函数所属的对象。
//// this指针会隐含存在于每个非静态成员函数，不需要定义，直接使用即可；
//尽管非静态成员函数在逻辑上也是属于类的，所有的对象共用，不是某个具体对象的。然而，非静态成员函数在调用时必须通过某个具体的对象来调用，
//而静态成员函数则不需要。这就是为什么非静态成员函数有this指针，而静态成员函数没有this指针的根本原因。
//静态函数的初衷就是为了让该函数与对象无关，即使静态成员函数也可以通过对象调用，
//但是，通过对象调用静态成员函数时，编译器会忽略对象，直接调用类的静态成员函数。
//// 作用：
//// 1.当成员函数的形参和成员变量同名时，可用this指针来区分；
////2.在类的非静态成员函数中返回对象本身，可用return *this;
//
//
//
//#include<iostream>
//using namespace std;
//class Rabit
//{
//public:
//	int age;
//
//	Rabit(int age)
//	{
//		//age = age;错误，编译器会认为是同一个age
//		this->age = age;
//		//this是此构造函数中指向Rabit类型数据的指针，哪个对象调用此函数
//		//this就指向哪个对象；
//	}
//
//	Rabit &Rabitadd(Rabit &r) 
//	{
//		//返回值加引用是为了返回对象的引用，也就是对象本身；
//		// 因为返回的是调用本函数的对象（*this)的引用，
//		// 不属于返回局部变量的引用；
//		// 如果函数前面不加上引用，在调用函数时，会创建一个相同类型
//		// 的临时变量/对象，将返回值拷贝给该临时变量，这也是为何函数返回
//		// 局部对象时，用另一个对象接收时，也是拷贝构造，因为会创建一个
//		// 临时的对象；
//		// 注意：之前学过不能返回局部变量的引用,也不能返回指向
//		// 栈空间的指针；
//		//形式参数加引用是为了避免值传递带来更多时间消耗；
//		this->age += r.age;
//		return *this;
//	}
//};
// 
//int main() {
//	Rabit r1(18);
//	//对象r1调用有参构造函数，有参构造函数的this指针指向对象r1
//	cout << r1.age << endl;
//	Rabit r2(10);
//	//链式编程思想，cout也是这种思想，可以无限追加；
//	r2.Rabitadd(r1).Rabitadd(r1).Rabitadd(r1);
//	cout << r2.age << endl;
//	system("pause");
//	return 0;
//}
