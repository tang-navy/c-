

//1.break：跳出最内部的循环；
//2.continue：只是提前结束本次循环，紧接着开启下一次循环；
//3.goto语句：跳转到标号位置；

#include<iostream>
using namespace std;
int main11() {
	cout << "1.******" << endl;
	goto flag;
	cout << "2.******" << endl;
	cout << "3.******" << endl;
	flag:
	cout << "4.******" << endl;
	cout << "5.******" << endl;
	system("pause");
	return 0;
}