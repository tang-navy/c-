//#include<iostream>
//#include"pig.h"
//using namespace std;
//
////ֻ������ȫ�ֺ������������������
//ostream& operator<<(ostream& out, Pig& p)
//{
//	//ע��˳��cout��������������ң�
//	cout << "age:" << p.age << "\t" << "weight:" << p.weight;
//	return out;
//}
//
//////ǰ��++����
////Pig& operator++(Pig& p)
////{
////	//�������õ�ԭ��ȷ����һ�����ݽ���++����
////	++p.age;
////	++p.weight;
////	return p;
////}
//////����++����
////Pig operator++(Pig& p,int)
////{
////	Pig temp=p;
////	++p.age;
////	++p.weight;
////	return temp;
////}
//int main() {
//	Pig p1(10, 110);
//	cout << p1 <<"\thello" << endl;
//	//���ʣ�operator<<(cout,p1);
//	operator<<(cout, p1)<<endl;
//	cout << ++(++p1) << endl;
//	cout << p1 << endl;
//	
//	//cout << (p1++) << endl;//Ϊɶ�ᱨ������
//	system("pause");
//	return 0;
//}