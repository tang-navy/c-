//templae<class T> bool logical_and<T>
//templae<class T> bool logical_or<T>
//templae<class T> bool logical_not<T>

#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>
int main()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(false);
	v.push_back(true);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;

	vector<bool>v1;
	v1.resize(v.size());//Ҫ�ȸ��������ٿռ����Ǩ�ƣ�
	logical_not<bool> N;
	transform(v.begin(), v.end(),v1.begin(), N);
	//��ĳ�ַ�ʽ������Ǩ�Ƶ���һ������
	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << "\t";
	}
	cout << endl;
	system("pause");
}