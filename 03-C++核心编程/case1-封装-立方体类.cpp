////����������࣬��Ա�����У������
////�ֱ���ȫ�ֺ����ͳ�Ա�������ж������������Ƿ���ͬ
////��Ա�����ĵ��ñ�����һ����֪�ĳ�Ա����ȥ����
//#include<iostream>
//using namespace std;
//
//class Cube {
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//public:
//	//���ó����
//	void set_L(int l) {
//		m_L = l;
//	}
//	void set_H(int h) {
//		m_H = h;
//	}
//	void set_W(int w) {
//		m_W = w;
//	}
//
//	//��ȡ�����
//	int get_L() {
//		return m_L;
//	}
//	int get_W() {
//		return m_W;
//	}
//	int get_H() {
//		return m_H;
//	}
//	//��ȡ���
//	int get_volume() {
//		return m_L * m_W * m_H;
//	}
//
//	//���ó�Ա�����ж������������Ƿ���ͬ
//	void Is_same(Cube c) {
//		if (m_L == c.get_L() && m_W == c.get_W() && m_H == c.get_H()) {
//			cout << "����������ͬ" << endl;
//		}
//		else
//			cout << "��������bu��ͬ" << endl;
//	}
//};
// 
////����ȫ�ֺ����ж������������Ƿ���ͬ
//void Is_same(Cube& c1, Cube& c2) {
//	int H1 = c1.get_H();
//	int H2 = c2.get_H();
//	int L1 = c1.get_L();
//	int L2 = c2.get_L();
//	int W1 = c1.get_W();
//	int W2 = c2.get_W();
//	if (H1 == H2 && L1 == L2 && W1 == W2) {
//		cout << "����������ͬ" << endl;
//	}
//	else
//		cout << "�������岻��ͬ" << endl;
//}
//
//int maincase1() {
//	Cube c1;
//	c1.set_L(11);
//	c1.set_W(10);
//	c1.set_H(10);
//	cout << "c1�����Ϊ��" << c1.get_volume() << endl;
//	Cube c2;
//	c2.set_L(10);
//	c2.set_W(10);
//	c2.set_H(10);
//	Is_same(c1, c2);
//	c1.Is_same(c2);
//	system("pause");
//	return 0;
//}