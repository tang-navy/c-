////����bool���͵ķº�����Ϊν��
////���operator()����һ����������ΪһԪν�ʣ�
////���operator()����������������Ϊ��Ԫν�ʣ�
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//���������ң� 
//	vector<int>::iterator it=find_if(v.begin(), v.end(), GreaterFive());//ʹ����������������������
//	//�ҵ��˷����ҵ�λ�õĵ����������򷵻�β���������
//	if (it == v.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ���" <<*it<< endl; 
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//}