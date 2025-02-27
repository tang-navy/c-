#include<iostream>
#include<string>
using namespace std;
int main() {
	//整型
	int a;
	cout << "给整型变量a赋值："<<endl;
	cin >> a;
	cout << "a的值为："<<a << endl;
	//浮点型
	float b;
	cout << "给浮点变量b赋值：" << endl;
	cin >> b;
	cout << "b的值为：" <<b<< endl;
	//字符型
	char ch;
	cout << "给字符变量ch赋值：" << endl;
	//cin >> ch;
	getchar();
	ch=getchar();
	cout << "ch的值为：" <<ch<< endl;
	//字符串型
	string str;
	string str1;
	string str2;
	cout << "给字符串型变量str赋值：" << endl;
	cin >> str;
	//输入hello kitty+回车，str只能接收hello
	//遇到回车也会结束，但不会接收回车，回车还在输入缓冲区内,
	// 如果输入回车，会一直等待键入；
	cin >> str1;
	cin>>str2;
	//getline只有遇到换行符和文件结束符（EOF）才会结束，
	//并且会将换行符和结束符读进去后再舍弃，所以缓冲区没有换行符和结束符；
	cout << "\"str的值为：" <<str<< endl;//hello
	cout << "\"str1的值为：" << str1 << endl;//kitty
	cout << "\"str2的值为：" << str2 << endl;//回车键
	system("pause");
	return 0;
}