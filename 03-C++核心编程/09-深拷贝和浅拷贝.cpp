////浅拷贝：就简单的复制拷贝操作；
////深拷贝：在堆区重新申请空间，进行拷贝操作；
//
////注意：若有属性在堆区开辟空间，那么一定要利用深拷贝进行拷贝初始化；
//#include<iostream>
//using namespace  std;
//
//class Dog {
//public:
//	int m_age;
//	int* m_length;
//
//	Dog() {
//		cout << "调用了默认构造函数" << endl;
//	}
//	Dog(int age,int length) {
//		m_age = age;
//		m_length = new int(length);
//		cout << "调用了有参构造函数" << endl;
//	}
//	/*编译器会默认生成浅拷贝：
//	    Dog(const Dog &d1) {
//		m_age = d1.m_age;
//		m_length = d1.m_length;
//		cout << "调用了拷贝构造函数" << endl;
//	}*/
//
//	//自己实现深拷贝
//	Dog(const Dog& d) {
//		m_age = d.m_age;
//		m_length = new int(*d.m_length);
//		cout << "调用了拷贝构造函数" << endl;
//	}
//	//析构函数
//	~Dog() {
//		if (m_length != NULL) {
//			delete m_length;//释放空间
//			m_length = NULL;//避免成为野指针；
//		}
//		cout << "调用了析构函数" << endl;
//	}
//};
//
//void test9_1() {
//	Dog d1(2, 60);
//	cout << "d1的年龄为：" << d1.m_age << "、d1的长为：" << *d1.m_length << endl;
//	Dog d2(d1);
//	//如果是系统提供的拷贝构造函数，属于浅拷贝，d1与d2
//	//的m_length都指向同一个堆区空间，两个对象都会调用析构函数
//	//所以，该堆区空间会被释放两次，所以发生错误；
//	//解决方法：利用深拷贝，会新开辟堆区空间，使d2的m_length
//	// 指向新开辟的堆区空间，两个堆区空间的数据是一致的；
//	cout << "d2的年龄为：" << d2.m_age << "、d2的长为：" << *d2.m_length << endl;
//}
//int main9() {
//	test9_1();
//	system("pause");
//	return 0;
//}
