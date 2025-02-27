////公司招聘了10员工（ABCDEFGHIJ），进入公司后，
//// 需要指派员工在哪个部门构工作；
////员工信息有：姓名，工资组成；部门分为：策划，美术，研发；
////随机给十名员工分配部门和工资；
////通过multimap进行信息的插入，key部门编号，value员工
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<map>
//#include<ctime>
//
//class Worker
//{
//public:
//	string m_name;
//	int m_salary;
//};
//void CreateWorker(vector<Worker>& v)
//{
//	string nameSeed("ABCDEFGHIJ");
//	for (int i = 0; i < 10; i++)
//	{
//		//v[i].m_name ="员工"+ nameSeed[i];
//		//v[i].m_salary = rand() % 10000 + 10000;
//		//创建的v开始为空，访问越界；
//		Worker w;
//		//w.m_name = "员工" + nameSeed[i];string没有重载=和+
//		w.m_name = "员工" ;
//		w.m_name += nameSeed[i];
//		w.m_salary = rand() % 10000 + 10000;
//		v.push_back(w);
//	}
//}
//
//void PrintVector(vector<Worker>& v)
//{
//	for (int i=0;i<v.size();i++)
//	{
//		cout << "姓名：" << v[i].m_name << "\t" << "工资：" << v[i].m_salary << endl;
//	}
//}
//void setGroup(vector<Worker>& v,multimap<int, Worker>& mp)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int did = rand() % 3;
//		mp.insert(pair<int, Worker>(did, *it));
//	}
//}
//void PrintMap(multimap<int,Worker>& mp)
//{
//	for (multimap<int, Worker>::iterator it = mp.begin(); it != mp.end(); it++)
//	{
//		cout << "部门编号：" << it->first << "姓名：" << it->second.m_name
//			<< "工资：" << it->second.m_salary << endl;
//	}
//}
//void shwoWorkerByGroup(multimap<int, Worker>& mp) 
//{
//	cout << "策划部门信息：" << endl;
//	int num=mp.count(CEHUA);
//	multimap<int, Worker>::iterator it = mp.find(CEHUA);
//	for (int i = 0; i < num; i++)
//	{
//		cout << "姓名：" << it->second.m_name << "\t"
//			<< "工资：" << it->second.m_salary << endl;
//		it++;
//	}
//	cout << "美术部门信息：" << endl;
//	num = mp.count(MEISHU);
//	it = mp.find(MEISHU);
//	for (int i = 0; i < num; i++)
//	{
//		cout << "姓名：" << it->second.m_name << "\t"
//			<< "工资：" << it->second.m_salary << endl;
//		it++;
//	}
//	cout << "开发部门信息：" << endl;
//	num = mp.count(YANFA);
//	it = mp.find(YANFA);
//	for (int i = 0; i < num; i++)
//	{
//		cout << "姓名：" << it->second.m_name << "\t"
//			<< "工资：" << it->second.m_salary << endl;
//		it++;
//	}
//}
//int main()
//{
//	srand((unsigned int)time(0));//随机数的种子 
//	vector<Worker> v;
//	//创建员工
//	CreateWorker(v);
//	PrintVector(v);
//	//员工分组
//	multimap<int, Worker>mp;
//	setGroup(v,mp);
//	//分组显示员工
//	PrintMap(mp);
//	shwoWorkerByGroup(mp);
//	system("pause");
//}