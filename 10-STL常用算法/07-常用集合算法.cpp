//set_intersection(beg1,end1,beg2,end2,iterator dest);
// 求交集，并放到目标容器,最后会返回目标容器的交集数据的
// 下一个位置的迭代器；俩原容器需要是有序序列 
//set_union(beg1,end1,beg2,end2,iterator dest);
//set_difference(beg1,end1,beg2,end2,iterator dest);
//差集要分v1和v2的差集，v2和v1的差集；
//集合算法都会返回所求集合的下一个位置的迭代器，都要求有序；

#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
class Printv
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
int main()
{
	vector<int>v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);//0-9
		v2.push_back(5 + i);//5-14
	}
	vector<int> vt;
	vt.resize(min(v1.size(), v2.size()),1);//min也在algorithm中
	vector<int>::iterator it=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	for_each(vt.begin(), vt.end(), Printv());
	cout << endl;
	for_each(vt.begin(), it, Printv());
	//开辟的空间>=交集空间
	cout << endl;
	system("pause");
}