//#include<iostream>
//#include<string>
//using namespace std;
//
////利用成员函数设为public，以实现对private成员属性设置读写权限；
//
//class Student {
//	//默认权限为private
//	string s_name;//可读可写
//	string s_gender;//只写
//	int s_score=60;//只读
//
//public:
//	void setname(string name) {
//		s_name = name;
//	}
//	void getname() {
//		cout << "学生姓名为：" << s_name << endl;
//	}
//
//	void setgender() {
//		string gender;
//		while (1) {
//			cout << "请输入学生性别：" << endl;
//			getline(cin, gender);
//			if (gender == "男" || gender == "女"){
//				s_gender=gender;
//				break;
//			}
//			else {
//				cout << "性别有误，请重新输入！" << endl;
//			}
//		}
//	}
//
//	void getscore() {
//		cout<<"学生成绩为：" << s_score << endl;
//	}
//
//};
//
//int main5(){
//	Student s1;
//	s1.setname("李华");
//	s1.getname();
//	s1.setgender();
//	s1.getscore();
//	system("pause");
//	return 0;
//}