
//ǰ�õ������ȵ������������ʽ���㣻���õ�����ǰ�õݼ������õݼ���

#include<iostream>
using namespace std;
int main5() {
	int a = 0;
	cout << a++ << endl;//�����a����++
	cout << a << endl;
	a = 0;
	cout << ++a << endl;//��++�������a;

	int b = 10;
	int x = b++ * 10;//x=100
	int y = ++b * 10;//y=12*10=120
	cout << "x=" <<x<< endl;
	cout << "y=" << y << endl;
	system("pause");
	return 0;
}
