//#include<iostream>
//#include<string>
//using namespace std;
//
////���ó�Ա������Ϊpublic����ʵ�ֶ�private��Ա�������ö�дȨ�ޣ�
//
//class Student {
//	//Ĭ��Ȩ��Ϊprivate
//	string s_name;//�ɶ���д
//	string s_gender;//ֻд
//	int s_score=60;//ֻ��
//
//public:
//	void setname(string name) {
//		s_name = name;
//	}
//	void getname() {
//		cout << "ѧ������Ϊ��" << s_name << endl;
//	}
//
//	void setgender() {
//		string gender;
//		while (1) {
//			cout << "������ѧ���Ա�" << endl;
//			getline(cin, gender);
//			if (gender == "��" || gender == "Ů"){
//				s_gender=gender;
//				break;
//			}
//			else {
//				cout << "�Ա��������������룡" << endl;
//			}
//		}
//	}
//
//	void getscore() {
//		cout<<"ѧ���ɼ�Ϊ��" << s_score << endl;
//	}
//
//};
//
//int main5(){
//	Student s1;
//	s1.setname("�");
//	s1.getname();
//	s1.setgender();
//	s1.getscore();
//	system("pause");
//	return 0;
//}