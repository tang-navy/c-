////C++在执行时，将内存大致划分为4个区域：
////代码区：存放二进制代码，由操作系统管理（共享，只读）；
////全局区：存放全局变量、静态变量、全局常量、字符串常量，
//// 本区域数据在程序结束后由操作系统释放；
////栈区：由编译器自动分配释放，存放函数参数、局部变量（不管是否有const）；
//// 函数返回时，栈帧也会自动回收，故不能返回局部变量的地址，
//// 因为对该地址的操作已经没有意义了；
////堆区：由程序员分配和释放，如果程序员不释放，程序结束时由操作系统回收；
//
////程序运行前分为：全局区和代码区
////程序运行后分为：栈区和堆区
//#include<iostream>
//using namespace std;
//
//int g_a = 1;
//int g_b = 2;
//int main1() {
//	int a = 12;
//	int b = 9;
//	//打印地址，证明全局区变量和局部变量不在一个区；
//	cout << (long long) & g_a << endl;
//	cout << (long long)& g_b << endl;
//	cout << (long long) & a << endl;
//	cout << (long long) & b << endl;
//
//	//静态变量
//	static int s_a = 2;
//	static int s_b = 3;
//	cout << (long long)&s_a << endl;
//	cout << (long long)&s_b << endl;
//
//	//常量：
//	// 字符串常量:在全局区
//	cout << "字符串常量的地址为：" << (long long)&"hello world" << endl;
//	// const修饰的常量:局部常量不在全局区，全局常量在全局区；
//
//
//
//
//	//在堆区开辟数据
//	int* p = new int(15);//开辟数据并赋初值
//	int* arr = new int[10];//开辟数组并返回首地址
//	//局部函数中，在堆区开辟的空间不会因为函数的返回而被回收，
//	// 故栈区的地址可以作为函数的返回值；
//	
//	for(int i=0;i<10;i++){
//		arr[i] = i + 10;
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	//释放变量：
//	delete p;
//	//释放数组：
//	delete[] arr;
//	
//	return 0;
//}