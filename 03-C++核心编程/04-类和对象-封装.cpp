////C++�������������������װ���̳У���̬��
////C++��Ϊ���������Ϊ���󣬶������������Ժ���Ϊ��
////������һ������
//// ���ԣ����������䣬��ߣ����صȣ�
//// ��Ϊ���ߣ��ܣ��Է������裬����
////������ͬ���ʵĶ��󣬿��Գ���Ϊһ���࣬���������࣬�����ڳ��ࣻ
////1.��װ��
////�����Ժ���Ϊ��Ϊһ�����壬�Ա��������е����
////�����Ժ���Ϊ����Ȩ�޿��ƣ�
//
//
////���е����ԣ��ֽг�Ա���ԡ���Ա��������
//// ��Ϊ����Ա��������Ա���������ǳ�Ա
//
////����Ȩ�������֣�
////1.����Ȩ��public����Ա�����ڿ��Է��ʣ�����Ҳ���Է���
////2.����Ȩ��protected����Ա�����ڿ��Է��ʣ����ⲻ���Է��ʣ����ӿ��Է��ʣ�
////3.˽��Ȩ��private����Ա�����ڿ��Է��ʣ����ⲻ���Է��ʣ�����Ҳ���ܷ��ʣ�
//
////struct��class���������ϵ��
//// 1.�����Զ���һ����
////2.Ψһ��������Ĭ�ϵķ���Ȩ�޲�ͬ��structĬ��Ȩ��Ϊ������classĬ��Ȩ��Ϊ˽��
////ע�⣺structҲ�����йؼ���public�ȣ�Ҳ���������ڶ�����Ϊ������
//
//#include<iostream>
//#include<string>
//using namespace std;
//#define PI 3.14
//
////���Բ�����
//class circle {
//	//����Ȩ�ޣ�
//public:
//	//Բ�����ԣ�
//	int r;
//	//Բ����Ϊ����Ϊͨ���ú�����ʾ��
//	//��ȡԲ���ܳ�
//	double calculateZC() {
//		return 2 * PI * r;
//	}
//};
//
//
////���һ��ѧ���࣬������������ѧ��
////��Ϊ�У���������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
//class Student {
//public:
//	//����
//	string name;
//	int sid;
//	//��Ϊ
//	void showStudent() {//չʾѧ����Ϣ
//		cout << "������" << name << "\tѧ�ţ�" << sid << endl;
//	}
//	void setProperty(string nam, int id) {//�����Ը�ֵ
//		name = nam;
//		sid = id;
//	}
//};
//
//
//class Person {
//public:
//	string m_name;
//protected:
//	string m_car;
//private:
//	string m_password;
//public:
//	void fun() {
//		m_name = "����";
//		m_car = "������";
//		m_password = "123456";
//	}
//};
//
//
////��struct����һ���ࣺ
//struct Teacher {
//public:
//	string t_name;
//	int t_age;
//private:
//	string t_girlfriend;
//public:
//	void fun() {
//		cout << "��ʦ������"<<t_name << endl;
//	}
//};
//int main4() {
//	//����һ��Բ��Ķ���
//	circle c1;
//	//��Բ��������Ը�ֵ
//	c1.r = 10;
//	cout << "Բ���ܳ�Ϊ��" <<c1.calculateZC()<< endl;
//
//	//����һ������ѧ����ʵ��������
//	Student s1;
//	s1.name = "����";
//	s1.sid = 1001;
//	s1.showStudent();
//	s1.setProperty("Lily", 1005);
//	s1.showStudent();
//
//	//����һ��Person
//	Person p1;
//	p1.m_name = "����";
//	//p1.m_car = "����";���������޷�����car
//
//	//����һ��Teacher
//	Teacher t1;
//	//t1.t_girlfriend = "����";����
//	t1.fun();
//	
//	system("pause");
//	return 0;
//}
