//�ҳ�������λ����ˮ�ɻ���
#include<iostream>
using namespace std;
int maincase1() {
	int i = 100;
	while (i <= 999) {
		int a = i / 100;//��ð�λ����
		int b = (i / 10) % 10;//���ʮλ����
		int c = i % 10;//��ø�λ����
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i) {
			cout << i << "\t";
		}
		i++;
	}
	cout << endl;
	system("pause");
	return 0;
}