////ǳ�������ͼ򵥵ĸ��ƿ���������
////������ڶ�����������ռ䣬���п���������
//
////ע�⣺���������ڶ������ٿռ䣬��ôһ��Ҫ����������п�����ʼ����
//#include<iostream>
//using namespace  std;
//
//class Dog {
//public:
//	int m_age;
//	int* m_length;
//
//	Dog() {
//		cout << "������Ĭ�Ϲ��캯��" << endl;
//	}
//	Dog(int age,int length) {
//		m_age = age;
//		m_length = new int(length);
//		cout << "�������вι��캯��" << endl;
//	}
//	/*��������Ĭ������ǳ������
//	    Dog(const Dog &d1) {
//		m_age = d1.m_age;
//		m_length = d1.m_length;
//		cout << "�����˿������캯��" << endl;
//	}*/
//
//	//�Լ�ʵ�����
//	Dog(const Dog& d) {
//		m_age = d.m_age;
//		m_length = new int(*d.m_length);
//		cout << "�����˿������캯��" << endl;
//	}
//	//��������
//	~Dog() {
//		if (m_length != NULL) {
//			delete m_length;//�ͷſռ�
//			m_length = NULL;//�����ΪҰָ�룻
//		}
//		cout << "��������������" << endl;
//	}
//};
//
//void test9_1() {
//	Dog d1(2, 60);
//	cout << "d1������Ϊ��" << d1.m_age << "��d1�ĳ�Ϊ��" << *d1.m_length << endl;
//	Dog d2(d1);
//	//�����ϵͳ�ṩ�Ŀ������캯��������ǳ������d1��d2
//	//��m_length��ָ��ͬһ�������ռ䣬�������󶼻������������
//	//���ԣ��ö����ռ�ᱻ�ͷ����Σ����Է�������
//	//���������������������¿��ٶ����ռ䣬ʹd2��m_length
//	// ָ���¿��ٵĶ����ռ䣬���������ռ��������һ�µģ�
//	cout << "d2������Ϊ��" << d2.m_age << "��d2�ĳ�Ϊ��" << *d2.m_length << endl;
//}
//int main9() {
//	test9_1();
//	system("pause");
//	return 0;
//}
