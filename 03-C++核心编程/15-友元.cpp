////�������п��������ң�����һ�㲻���������˽����Լ������ң�
//// �����Լ��ĺû��Ѻͺù��ۣ�
////������Ҳһ������Щ˽�����ԣ�Ҳ�������������һЩ������������з��ʣ�
////���Ҫ�õ���Ԫ������
////��Ԫ��Ŀ�ģ���һ�����������������һ�����е�˽�г�Ա
////��Ԫ������ʵ�֣�ȫ�ֺ�������Ԫ��������Ԫ����Ա��������Ԫ��
//
//
//#include<iostream>
//using namespace std;
//#include<string>
//class goodgay;
//class building 
//{
//	//friend void goodmate(building& b);
//	//friend class goodgay;
//	//friend void goodgay::visit01();//goodgay�����������visit1������
//private:
//	string bedroom;
//public:
//	string sittingroom;
//	
//	building()
//	{
//		sittingroom = "����";
//		bedroom = "����";
//	}
//};
//
////ȫ�ֺ�������Ԫ
////void goodmate(building &b) {
////	cout << "ȫ�ֺ������ʹ������ԣ�" << b.sittingroom << endl;
////	cout << "ȫ�ֺ�������˽�����ԣ�" << b.bedroom << endl;
////}
////������Ԫ
//class goodgay
//{
//public:
//	goodgay();
//	
//	building* b;
//	void visit01()//�Ǻ�����
//	{
//		cout << "goodgay����ʹ������ԣ�" << b->sittingroom << endl;
//		//cout << "goodgay�����˽�����ԣ�" << b->bedroom << endl;
//	}
//	void visit02()//���Ǻ�����
//	{
//		cout << "goodgay����ʹ������ԣ�" << b->sittingroom << endl;
//		//cout << "goodgay�����˽�����ԣ�" << b->bedroom << endl;
//	}
//};
//
////������Ԫ�������е����г�Ա����������һ����ĺ����ѣ�
////Ҫ��ֻ��ĳ����Ա������Ϊ�����ѣ������ó�Ա��������Ԫ��
//
//
////���������캯���Ķ���
//goodgay::goodgay()
//{
//	b = new building;
//}
//
//
//int main()
//{
//	building b1;
//	//goodmate(b1);
//	goodgay g;
//	g.visit01();
//	g.visit02();
//	system("pause");
//	return 0;
//}