////对于内置的类型，如整型浮点型等，编译器知道如何进行运算；
////运算符重载也可以发生函数重载；
////内置的表达式类型的表达式的运算符是不可以发生重载；
////不可以滥用运算符重载：例如把加法重载为减法；
//#include<iostream>
//using namespace std;
//
//class Pig
//{
//public:
//	int age;
//	int weight;
//
//	Pig() 
//	{
//
//	}
//	Pig(int a, int b)
//	{
//		this->age = a;
//		this->weight = b;
//	}
//	//1.成员函数实现运算符重载
//	/*
//	Pig operator+(Pig &p)
//	{
//		Pig temp;
//		temp.age = this->age + p.age;
//		temp.weight = this->weight + p.weight;
//		return temp;
//	}
//	*/
//};
//
//
////2.全局函数实现运算符重载
//Pig operator+(Pig &p1,Pig &p2)
//{
//	Pig temp;
//	temp.age = p1.age + p2.age;
//	temp.weight = p1.weight + p2.weight;
//	return temp;
//}
//
//int main() {
//	Pig p1(10,10);
//	Pig p2(5, 5);
//	p2 = p2 + p1;
//	//等价于p2=p2.operator+(p1);
//	//p2=operator+(p1,p2);
//	cout << p2.age << "\t" << p2.weight << endl;
//	system("pause");
//	return 0;
//}