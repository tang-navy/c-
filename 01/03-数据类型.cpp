

//默认情况下，输出一个小数，会显示6位有效数字；
//整型数据：短整型short,整型int，长整型long，长长整型long long;
//实型数据：float,double;
//当某数字超出机器字长能表示的最大值，得以更长的机器字长表示出该数字，
// 然后保留低位截断；


//字符型数据：
// 内存中存放的是对应的ASCII码，而非字符本身；
//字符型变量常见错误：
// 赋值要用单引号，且单引号中只能有一个字符，不能用双引号；
//大小写字母之间相差32
//ASCII码表：0-31是控制字符，用于控制打印家等外围设备，一般不显示到屏幕上
//32-126分配给键盘上能找到的字符，当查看或打印文档就会出现；
// 
//转义字符：用于表示一些不能显示出来的ASCII字符
//例如打印一个",如果cout<<""",则多出一个",只能cout<<"\""


//字符串型：
//1.c风格字符串：本质字符数组+字符终止符，char str[]="字符串常量"；
//2.c++风格：string 变量名="字符串常量"；
//字符串赋值时要用双引号；



//转化为大写字母函数：
void toupper_self_define(char& ch) {
	if ((int)ch >= 97 && (int)ch <= 122) {
		ch -= 32;
	} 
	//else if((int)ch >= 65 && (int)ch <= 90)
}


#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;
int main3() {
	//整型和实型：
	float f1 = 3.1415926;//4B
	double d1 = 3.1415926;//8B
	float f2 = 3.14E-2;
	cout << "f1=" << f1 << endl;
	system("cls");
	cout << "d1=" << d1 << endl;
	cout << "f2=" << f2 << endl;


	//字符和转义字符：
	char ch = 'a';
	char ch1 = 'z';
	char ch2 = 'b';
	cout << "a的ASCII码为：" << (int)ch << endl;
	cout << "z的ASCII码为：" << (int)ch1 << endl;
	toupper_self_define(ch2);
	cout << "ch2大写后为：" << ch2 << endl;
	cout << ch<<"\a" << endl;
	cout << "\"" << endl;
	cout << "\?" << endl;
	cout << "?" << endl;
	cout << "\\"<< endl;//遇到第一个杠表示要输出一个特殊符号了；
	cout << "aaaa\tbbb" << endl;//一个水平制表符\t会凑够8个位置,
	//如果已经8个a了，则会在后面补上上8个空格后再输出bbb;
	cout << "aaaaaaaaa\tbbb" << endl;


	//字符串型：
	char str[] = "hello world";
	cout <<"str="<< str << endl;
	string str1="hello kitty";
	cout << "str1="<<str1 << endl;
	//char str2[5] = "hello";
	//错误！const char[6]类型值"hello"不能用于初始化char[5]类型的实体；
	scanf("%s", str);//输入fuck you man,但扫描到空格就会停止；
	//scanf("%s", str1);错误
	cout << "修改后的str="<<str << endl;//str=fuck
	scanf("%s", str);
	cout << "修改后的str=" << str << endl;//str=you
	

	system("pause");//或者cin.get();
	return 0;
}

