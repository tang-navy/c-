////类模板中的成员函数，由于在没有调用前，并不知道类模板中使用的数据类型
////所以类模板中的函数并不会像其他函数一样，在写完函数就成功创建，
////而是在调用该成员函数才会创建。
//#include<iostream>
//using namespace std;
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "person1 show"<<endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "person2 show" << endl;
//	}
//};
//
//template<typename T>
//class myClass
//{
//public:
//	T obj;
//	void fun1()
//	{
//		obj.showPerson1();
//	}
//	void fun2()
//	{
//		obj.showPerson2();
//	}
//	//此时并不知道obj到底是什么类型的对象，所以并不会创建fun1和fun2
//	//所以并不会报错；
//};
//
//int main()
//{
//	myClass<Person1> object;
//	object.fun1();
//	//object.fun2();错误，T=person1,所以showPerson2()不是其成员函数；
//	system("pause");
//}