

//变量本质上是内存地址的别名，相对于内存地址，变量名跟简洁易懂；
//常量的定义方式：
//1.#define 宏常量；
//2.const修饰的变量；
//变量名前加上const，就成了常量名，常量名也是内存地址，只是在程序运行期间，该地址
//中存放的内容无法再被修改

//标识符（自定义的，像变量名称这种）；关键字（系统征用的，像int、inline这些）；


#include<iostream>
using namespace std;
#define week 7
int main2() {
	//week = 14;错误，宏定义常量无法被修改；
	const int a = 10;
	//a = 14;错误，a是常量无法被修改；
	return 0;
}

