////�������õ����ͣ������͸����͵ȣ�������֪����ν������㣻
////���������Ҳ���Է����������أ�
////���õı��ʽ���͵ı��ʽ��������ǲ����Է������أ�
////������������������أ�����Ѽӷ�����Ϊ������
//#include<iostream>
//using namespace std;
//
//class Pig
//{
//public:
//	int age;
//	int weight;
//
//	Pig() 
//	{
//
//	}
//	Pig(int a, int b)
//	{
//		this->age = a;
//		this->weight = b;
//	}
//	//1.��Ա����ʵ�����������
//	/*
//	Pig operator+(Pig &p)
//	{
//		Pig temp;
//		temp.age = this->age + p.age;
//		temp.weight = this->weight + p.weight;
//		return temp;
//	}
//	*/
//};
//
//
////2.ȫ�ֺ���ʵ�����������
//Pig operator+(Pig &p1,Pig &p2)
//{
//	Pig temp;
//	temp.age = p1.age + p2.age;
//	temp.weight = p1.weight + p2.weight;
//	return temp;
//}
//
//int main() {
//	Pig p1(10,10);
//	Pig p2(5, 5);
//	p2 = p2 + p1;
//	//�ȼ���p2=p2.operator+(p1);
//	//p2=operator+(p1,p2);
//	cout << p2.age << "\t" << p2.weight << endl;
//	system("pause");
//	return 0;
//}