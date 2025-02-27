////由于构造函数用于初始化对象，因此必须在定义对象时调用；
//
////构造函数的分类：
////1.无参构造（默认构造），有参构造；
////2.普通构造函数，拷贝构造函数；
//
////拷贝构造函数的调用场合：
////1.用一个已经创建完毕的对象来初始化一个新对象；
////2.在以值传递方式给函数参数赋值时，实参到形参的过程实际上会使用拷贝构造；
////形参对象使用实参对象进行拷贝初始化，在
////3.函数返回局部对象时，用另一个对象接收时，也是拷贝构造；
//
//
////构造函数的调用：
////1.括号法
////2.显示法
////3.隐式转换法
//
//#include<iostream>
//using namespace std;
//class Human {
//public:
//	int m_age;
//	int m_height;
//
//	//构造函数：
//	Human() {
//		cout << "Human无参构造函数的调用" << endl;
//	}
//	Human(int a,int b) {
//		m_age = a;
//		m_height = b;
//		cout << "Human有参构造函数的调用" << endl;
//	}
//	Human(const Human &h) {//为啥必须加上&，为了防止此函数进行值传递，增加开销；
//		m_age = h.m_age;
//		m_height = h.m_height;
//		cout << "Human拷贝构造函数的调用" << endl;
//	}
//	//可见构造函数可以发生重载；
//
//	//析构函数：
//	~Human() {
//		cout << "析构函数的调用" << endl;
//	}
//};
//
//
//void test2_1() {//括号法：
//	Human h1;//不能用h1()，编译器会当成名为h1的函数的申明；
//	Human h2(22,180);//定义h2时并选择调用有参构造函数
//	Human h3(h2);
//	//int* p =new int(10);
//}
//
//void test2_2() {//显示法
//	Human h1;
//	Human h2=Human(10,180);//Human(10,180)会创建一个匿名对象，且age为10；
//	//匿名对象在该语句执行结束则会被系统立刻回收；
//	//匿名对象不要使用拷贝构造函数初始化：
//	// 因为Human(h2)等价于Human h2，相当于重定义h2;
//	//int* p =new int(10);
//	Human h3 = Human(h2);//创建一个匿名对象，并且用h3作为其对象名称；
//}
//
//void test2_3() {//隐式转换法：
//	//Human h1=10;//等价于Human h1=Human(10);
//	//Human h2=h1;//等价于Human h2=Human(h1);
//}
//
//Human fun(Human h) {
//	return h;
//}
//int main7() {
//	//test2_1();
//	Human h1(10, 20);
//	fun(h1);
//	system("pause");
//	return 0;
//}