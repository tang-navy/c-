

//Ĭ������£����һ��С��������ʾ6λ��Ч���֣�
//�������ݣ�������short,����int��������long����������long long;
//ʵ�����ݣ�float,double;
//��ĳ���ֳ��������ֳ��ܱ�ʾ�����ֵ�����Ը����Ļ����ֳ���ʾ�������֣�
// Ȼ������λ�ضϣ�


//�ַ������ݣ�
// �ڴ��д�ŵ��Ƕ�Ӧ��ASCII�룬�����ַ�����
//�ַ��ͱ�����������
// ��ֵҪ�õ����ţ��ҵ�������ֻ����һ���ַ���������˫���ţ�
//��Сд��ĸ֮�����32
//ASCII���0-31�ǿ����ַ������ڿ��ƴ�ӡ�ҵ���Χ�豸��һ�㲻��ʾ����Ļ��
//32-126��������������ҵ����ַ������鿴���ӡ�ĵ��ͻ���֣�
// 
//ת���ַ������ڱ�ʾһЩ������ʾ������ASCII�ַ�
//�����ӡһ��",���cout<<""",����һ��",ֻ��cout<<"\""


//�ַ����ͣ�
//1.c����ַ����������ַ�����+�ַ���ֹ����char str[]="�ַ�������"��
//2.c++���string ������="�ַ�������"��
//�ַ�����ֵʱҪ��˫���ţ�



//ת��Ϊ��д��ĸ������
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
	//���ͺ�ʵ�ͣ�
	float f1 = 3.1415926;//4B
	double d1 = 3.1415926;//8B
	float f2 = 3.14E-2;
	cout << "f1=" << f1 << endl;
	system("cls");
	cout << "d1=" << d1 << endl;
	cout << "f2=" << f2 << endl;


	//�ַ���ת���ַ���
	char ch = 'a';
	char ch1 = 'z';
	char ch2 = 'b';
	cout << "a��ASCII��Ϊ��" << (int)ch << endl;
	cout << "z��ASCII��Ϊ��" << (int)ch1 << endl;
	toupper_self_define(ch2);
	cout << "ch2��д��Ϊ��" << ch2 << endl;
	cout << ch<<"\a" << endl;
	cout << "\"" << endl;
	cout << "\?" << endl;
	cout << "?" << endl;
	cout << "\\"<< endl;//������һ���ܱ�ʾҪ���һ����������ˣ�
	cout << "aaaa\tbbb" << endl;//һ��ˮƽ�Ʊ��\t��չ�8��λ��,
	//����Ѿ�8��a�ˣ�����ں��油����8���ո�������bbb;
	cout << "aaaaaaaaa\tbbb" << endl;


	//�ַ����ͣ�
	char str[] = "hello world";
	cout <<"str="<< str << endl;
	string str1="hello kitty";
	cout << "str1="<<str1 << endl;
	//char str2[5] = "hello";
	//����const char[6]����ֵ"hello"�������ڳ�ʼ��char[5]���͵�ʵ�壻
	scanf("%s", str);//����fuck you man,��ɨ�赽�ո�ͻ�ֹͣ��
	//scanf("%s", str1);����
	cout << "�޸ĺ��str="<<str << endl;//str=fuck
	scanf("%s", str);
	cout << "�޸ĺ��str=" << str << endl;//str=you
	

	system("pause");//����cin.get();
	return 0;
}

