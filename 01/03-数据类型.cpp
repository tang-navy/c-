

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
//例如打印一个",如果cout<<""",则提示多出一个",只能cout<<"\""


//字符串型：
//1.c风格字符串：本质字符数组+字符终止符，char str[]="字符串常量"；
//2.c++风格：string 变量名="字符串常量"，string类底层也是以\0结尾；
//c/c++的字符串常量都是以\0结尾；字符串赋值时要用双引号；
/*
string str="hello"：str是一个对象
 char str[]="hello"：直接定义一个字符数组，是一个静态分配的字符数组，其大小在编译时确定。
数组str它存储在栈上，生命周期与作用域相关。
数组的最后一个元素是空字符'\0'。
 char* p="hello"：指向字符串常量的指针。
字符串常量hello存储在只读内存区域。
字符串常量hello本身不可修改。
但指针变量p可以指向其他字符串常量或字符数组。

*/



/*
当您在 C 代码中写 char* p = "hello"; 时，"hello" 这个字符串常量被存储在程序的只读数据段（通常是程序的 .text 段）。
这个字符串是只读的，因为它位于程序的只读内存区域。尝试修改这个字符串将导致未定义行为（Undefined Behavior）。

字符数组 char str[] = "hello";：这会在栈上分配一个字符数组，并将字符串常量 "hello" 的内容复制到这个数组中。
与指向只读数据段的指针不同，这个字符数组是可修改的，因为它位于栈上，栈是可写的内存区域。
这种在栈上分配的数组的大小由初始化时指定的字符串长度加一（为了空字符 \0）确定。

程序中使用的常量（包括字符串常量和其他全局常量）通常在程序运行前就已经被加载到内存中的只读区域。
这个区域通常被称为只读数据段（Read-Only Data Segment）或数据段（Data Segment），它用于存储程序中的常量和全局变量。

字面量（如 42）和用 const 修饰的变量（如 const int a = 42;）确实存在区别，主要体现在存储位置和使用方式上：
字面量（Literal）
字面量（如 42）通常用于表示常量值，它们在编译时就已经确定，并且通常存储在只读数据段（Read-Only Data Segment）。
字面量是编译期常量，它们的大小和类型由编译器决定。例如，42 可能是 int 类型，也可能是 long 类型，这取决于编译器和平台。
const 修饰的变量
使用 const 修饰的变量（如 const int a = 42;）是运行时常量。它们在程序运行时被初始化，并且其值在初始化后不能被修改。
const 变量可以存储在只读数据段，也可以存储在栈上，这取决于编译器和优化级别。
const 变量提供了类型安全，因为它们在编译时就已经确定了类型，并且不能被修改。
*/

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

