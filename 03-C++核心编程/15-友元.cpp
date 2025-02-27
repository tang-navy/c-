////生活中有客厅、卧室，人们一般不想让其他人进入自己的卧室，
//// 除了自己的好基友和好闺蜜；
////程序里也一样，有些私有属性，也想让类外特殊的一些函数或者类进行访问，
////这就要用到友元技术；
////友元的目的：让一个函数或者类访问另一个类中的私有成员
////友元的三种实现：全局函数做友元；类做友元；成员函数做友元；
//
//
//#include<iostream>
//using namespace std;
//#include<string>
//class goodgay;
//class building 
//{
//	//friend void goodmate(building& b);
//	//friend class goodgay;
//	//friend void goodgay::visit01();//goodgay作用域下面的visit1函数；
//private:
//	string bedroom;
//public:
//	string sittingroom;
//	
//	building()
//	{
//		sittingroom = "客厅";
//		bedroom = "卧室";
//	}
//};
//
////全局函数做友元
////void goodmate(building &b) {
////	cout << "全局函数访问共有属性：" << b.sittingroom << endl;
////	cout << "全局函数访问私有属性：" << b.bedroom << endl;
////}
////类做友元
//class goodgay
//{
//public:
//	goodgay();
//	
//	building* b;
//	void visit01()//是好朋友
//	{
//		cout << "goodgay类访问共有属性：" << b->sittingroom << endl;
//		//cout << "goodgay类访问私有属性：" << b->bedroom << endl;
//	}
//	void visit02()//不是好朋友
//	{
//		cout << "goodgay类访问共有属性：" << b->sittingroom << endl;
//		//cout << "goodgay类访问私有属性：" << b->bedroom << endl;
//	}
//};
//
////类做友元，那类中的所有成员函数都是另一个类的好朋友，
////要想只让某个成员函数成为好朋友，则利用成员函数做友元；
//
//
////类外做构造函数的定义
//goodgay::goodgay()
//{
//	b = new building;
//}
//
//
//int main()
//{
//	building b1;
//	//goodmate(b1);
//	goodgay g;
//	g.visit01();
//	g.visit02();
//	system("pause");
//	return 0;
//}