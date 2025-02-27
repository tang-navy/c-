////实现一个通用的数组类：
////可以对内置数据类型及自定义数据类型的数据进行存储；
////将数组中的数据存储到堆区；
////构造函数中可以传入数组的容量；
////提供对应的拷贝构造函数和operator=防止浅拷贝问题；
////提供尾插法和尾删法对数组中的数据进行增加和删除；
////可以通过下标的方式访问数组中的元素；
////可以获得当前元素个数和数组容量；
//#include"myArray.hpp"
//
//int main()
//{
//	myArray<int>ma1(10);
//	ma1.add_back(1);
//	ma1.add_back(2);
//	ma1.add_back(3);
//	cout << "最大容量：" << ma1.get_maxsize() << endl;
//	cout << "当前容量：" << ma1.get_currentsize()<< endl;
//	myArray<int> ma2(ma1);
//	myArray<int>ma3 = ma2;
//	ma3.print_myArray();
//	system("pause");
//}