//找出所有三位数的水仙花数
#include<iostream>
using namespace std;
int maincase1() {
	int i = 100;
	while (i <= 999) {
		int a = i / 100;//获得百位数字
		int b = (i / 10) % 10;//获得十位数字
		int c = i % 10;//获得个位数字
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
			cout << i << "\t";
		}
		i++;
	}
	cout << endl;
	system("pause");
	return 0;
}