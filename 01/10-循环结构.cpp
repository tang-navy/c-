

//1.while��ѭ��������{ѭ����}��
//2.do{ѭ����} while��ѭ�������������������Ƿ����㣬����ִ��һ��ѭ���壻
//3.for(��ʼ���ʽ0���������ʽ����ʡ��1��βĩѭ����3){ѭ�����2}
// 0123-123-123......
//4.��Χforѭ����for(elemType i:arr)


#include<iostream>
using namespace std;
int main10() {
	int i = 11;
	do { 
		cout << i << endl;
		i++;
	} while (i < 10);

	int arr[] = { 1,2,3,4,5 };
	for (int num : arr) {
		cout << num << "\t";
	}

	system("pause");
	return 0;
}