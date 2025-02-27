////C++面向对象三大特征：封装，继承，多态；
////C++认为万事万物皆为对象，对象上有其属性和行为；
////张三是一个对象：
//// 属性：姓名，年龄，身高，体重等，
//// 行为：走，跑，吃饭，唱歌，跳舞
////具有相同性质的对象，可以抽象为一个类，人属于人类，车属于车类；
////1.封装：
////将属性和行为作为一个整体，以表现生活中的事物；
////将属性和行为加以权限控制；
//
//
////类中的属性（又叫成员属性、成员变量）和
//// 行为（成员函数、成员方法）都是成员
//
////访问权限有三种：
////1.公共权限public：成员，类内可以访问，类外也可以访问
////2.保护权限protected：成员，类内可以访问，类外不可以访问（儿子可以访问）
////3.私有权限private：成员，类内可以访问，类外不可以访问（儿子也不能访问）
//
////struct和class的区别和联系：
//// 1.都可以定义一个类
////2.唯一区别在于默认的访问权限不同：struct默认权限为公共，class默认权限为私有
////注意：struct也可以有关键字public等；也可以在类内定义行为函数；
//
//#include<iostream>
//#include<string>
//using namespace std;
//#define PI 3.14
//
////设计圆这个类
//class circle {
//	//访问权限：
//public:
//	//圆的属性：
//	int r;
//	//圆的行为：行为通常用函数表示；
//	//获取圆的周长
//	double calculateZC() {
//		return 2 * PI * r;
//	}
//};
//
//
////设计一个学生类，属性有姓名和学号
////行为有：给姓名和学号赋值，可以显示学生的姓名和学号
//class Student {
//public:
//	//属性
//	string name;
//	int sid;
//	//行为
//	void showStudent() {//展示学生信息
//		cout << "姓名：" << name << "\t学号：" << sid << endl;
//	}
//	void setProperty(string nam, int id) {//给属性赋值
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
//		m_name = "张三";
//		m_car = "拖拉机";
//		m_password = "123456";
//	}
//};
//
//
////用struct定义一个类：
//struct Teacher {
//public:
//	string t_name;
//	int t_age;
//private:
//	string t_girlfriend;
//public:
//	void fun() {
//		cout << "教师姓名："<<t_name << endl;
//	}
//};
//int main4() {
//	//创建一个圆类的对象；
//	circle c1;
//	//给圆对象的属性赋值
//	c1.r = 10;
//	cout << "圆的周长为：" <<c1.calculateZC()<< endl;
//
//	//创建一个具体学生，实例化对象
//	Student s1;
//	s1.name = "张三";
//	s1.sid = 1001;
//	s1.showStudent();
//	s1.setProperty("Lily", 1005);
//	s1.showStudent();
//
//	//创建一个Person
//	Person p1;
//	p1.m_name = "李四";
//	//p1.m_car = "奔驰";错误！类外无法访问car
//
//	//创建一个Teacher
//	Teacher t1;
//	//t1.t_girlfriend = "绿绿";错误！
//	t1.fun();
//	
//	system("pause");
//	return 0;
//}
