#include<iostream>
using namespace std;
//逻辑运算符：！、||、&&
//按位与&，按位或|，按位非~

int main8() {
	int a = 10;
	//c++中，除了0都为真；
	cout << !a << endl;
	cout << !!a << endl;
	int i = 6;
	int j = 0;
	cout << (i | j) << endl;
	cout << (i & j) << endl;
	cout << (~j) << endl;
	system("pause");
	return 0;
}