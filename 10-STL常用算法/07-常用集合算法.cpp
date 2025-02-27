//set_intersection(beg1,end1,beg2,end2,iterator dest);
// �󽻼������ŵ�Ŀ������,���᷵��Ŀ�������Ľ������ݵ�
// ��һ��λ�õĵ���������ԭ������Ҫ���������� 
//set_union(beg1,end1,beg2,end2,iterator dest);
//set_difference(beg1,end1,beg2,end2,iterator dest);
//�Ҫ��v1��v2�Ĳ��v2��v1�Ĳ��
//�����㷨���᷵�����󼯺ϵ���һ��λ�õĵ���������Ҫ������

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
	vt.resize(min(v1.size(), v2.size()),1);//minҲ��algorithm��
	vector<int>::iterator it=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vt.begin());
	for_each(vt.begin(), vt.end(), Printv());
	cout << endl;
	for_each(vt.begin(), it, Printv());
	//���ٵĿռ�>=�����ռ�
	cout << endl;
	system("pause");
}