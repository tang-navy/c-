#include<iostream>
#include<string>
using namespace std;
int main() {
	//����
	int a;
	cout << "�����ͱ���a��ֵ��"<<endl;
	cin >> a;
	cout << "a��ֵΪ��"<<a << endl;
	//������
	float b;
	cout << "���������b��ֵ��" << endl;
	cin >> b;
	cout << "b��ֵΪ��" <<b<< endl;
	//�ַ���
	char ch;
	cout << "���ַ�����ch��ֵ��" << endl;
	//cin >> ch;
	getchar();
	ch=getchar();
	cout << "ch��ֵΪ��" <<ch<< endl;
	//�ַ�����
	string str;
	string str1;
	string str2;
	cout << "���ַ����ͱ���str��ֵ��" << endl;
	cin >> str;
	//����hello kitty+�س���strֻ�ܽ���hello
	//�����س�Ҳ���������������ջس����س��������뻺������,
	// �������س�����һֱ�ȴ����룻
	cin >> str1;
	cin>>str2;
	//getlineֻ���������з����ļ���������EOF���Ż������
	//���һὫ���з��ͽ���������ȥ�������������Ի�����û�л��з��ͽ�������
	cout << "\"str��ֵΪ��" <<str<< endl;//hello
	cout << "\"str1��ֵΪ��" << str1 << endl;//kitty
	cout << "\"str2��ֵΪ��" << str2 << endl;//�س���
	system("pause");
	return 0;
}