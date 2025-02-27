////双端队列：头部和尾部能比较效率地插入删除，但也可以中部insert；
////double ended queue两个端
////1.构造函数：
////deque<T> dq1;默认构造
////deque(begin,end);另一个对象的[begin,end)区间的元素拷贝给本对象；
////deque(n,elem);
////deque(const deque &dq);拷贝构造
//
//////////////////////////////////////////////
////2.赋值操作：
////deque& operator=(const deque &d);
////assign(begin,end);将某对象（包括本身）区间值赋给本对象；
////assign(n,elem);n个elem赋给本身；
//
////3.大小操作：
//// deque没有容量一说，不够用时，直接在中控器中增加一个指针，
//// 该指针指向新开辟的一小片空间，不会
//// 像vector重新开辟空间，进行大量的复制操作；
////deque.empty();
////deque.size();
////deque.resize();
////deque.resize(n,elem);
//
////4.插入和删除
////push_back(elem);
////push_front(elem);
////pop_back();
////pop_front();
////insert(pos,elem);//迭代器
////insert(pos,n,elem);
////insert(pos,d.begin,d.end);
////clear();
////erase(begin,end);//迭代器
////erase(pos);
//
////5.数据存取
////at(int index);
////operator[];
////front();
////back();
//
////6.deque排序（要包含标准算法头文件algorithm）
////sort(iterator begin,iterator end);对区间[   )数据进行排序，默认升序；
////只要支持随机访问的容器，都可以利用sort排序（vector,deque)
//
//#include<iostream>
//#include<deque>
//using namespace std;
//void PrintDeque(const deque<int> &d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	deque<int> d1(10,100);
//	PrintDeque(d1);
//	deque<int>d2(d1.begin(), d1.begin() + 3);
//	PrintDeque(d2);
//	 d1.assign(d1.begin(), d1.begin() + 3);
//	 PrintDeque(d1);
//	system("pause");
//}