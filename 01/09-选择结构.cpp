//1.if：判断条件可以是一个区间
//2.嵌套if
//3.三目运算符：(1)?(2):(3)，1为真时执行语句2，否则执行语句3；
//4.switch语句：只能是一个整型或者字符型，但是它结构清晰，执行效率高；

#include<iostream>
using namespace std;
int main9() {
	//三目运算符：
	int a;
	int b;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	cout <<"输出较大值："<< ((a>=b) ? a : b) << endl;

	//利用switch语句打分：
	int score = 0;
	cout << "请输入您的评分：" << endl;
	cin >> score;
	cout << "您的评分为：" << score << endl;
	switch(score) {//如果没有break，会从第一个匹配到的语句一直往下执行
		case 10:
			cout << "这是一部经典电影！";
			break;
		case 9:
			cout << "这是一部经典电影！";
			break;
		case 8:
			cout << "您认为电影非常好！";
			break;
		case 7:
			cout << "您认为电影非常好！";
			break;
		case 6:
			cout << "您认为电影一般！";
			break;
		case 5:
			cout << "您认为电影一般！";
			break;
		default://除了5-10其他数字都属于default的范畴；
			cout << "您认为电影是烂片！";
	}
	system("pause");
	return 0;
}
