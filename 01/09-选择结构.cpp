//1.if���ж�����������һ������
//2.Ƕ��if
//3.��Ŀ�������(1)?(2):(3)��1Ϊ��ʱִ�����2������ִ�����3��
//4.switch��䣺ֻ����һ�����ͻ����ַ��ͣ��������ṹ������ִ��Ч�ʸߣ�

#include<iostream>
using namespace std;
int main9() {
	//��Ŀ�������
	int a;
	int b;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	cout <<"����ϴ�ֵ��"<< ((a>=b) ? a : b) << endl;

	//����switch����֣�
	int score = 0;
	cout << "�������������֣�" << endl;
	cin >> score;
	cout << "��������Ϊ��" << score << endl;
	switch(score) {//���û��break����ӵ�һ��ƥ�䵽�����һֱ����ִ��
		case 10:
			cout << "����һ�������Ӱ��";
			break;
		case 9:
			cout << "����һ�������Ӱ��";
			break;
		case 8:
			cout << "����Ϊ��Ӱ�ǳ��ã�";
			break;
		case 7:
			cout << "����Ϊ��Ӱ�ǳ��ã�";
			break;
		case 6:
			cout << "����Ϊ��Ӱһ�㣡";
			break;
		case 5:
			cout << "����Ϊ��Ӱһ�㣡";
			break;
		default://����5-10�������ֶ�����default�ķ��룻
			cout << "����Ϊ��Ӱ����Ƭ��";
	}
	system("pause");
	return 0;
}
