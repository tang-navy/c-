
//前置递增：先递增，再作表达式运算；后置递增；前置递减；后置递减；

#include<iostream>
using namespace std;
int main5() {
	int a = 0;
	cout << a++ << endl;//先输出a，再++
	cout << a << endl;
	a = 0;
	cout << ++a << endl;//先++，再输出a;

	int b = 10;
	int x = b++ * 10;//x=100
	int y = ++b * 10;//y=12*10=120
	cout << "x=" <<x<< endl;
	cout << "y=" << y << endl;
	system("pause");
	return 0;
}
