////copy(beg,end,iterator destĿ����ʼ������);��ָ����ΧԪ�ؿ�����Ŀ��������
////repalce(beg,end,old_value,new_value);���滻���о�ֵ��
////replace_if(beg,end,_pred,new_val);ͨ��ν��ָ���滻��������
////swap(container c1,contaner c2);��������ͬ��������
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//void Printint(int val)
//{
//	cout << val << "\t";
//}
//int main()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	vector<int> v2;
//	for (int i = 10; i < 15; i++)
//	{
//		v2.push_back(i);
//	}
//	//ע��Ҫ����v1�Ŀռ�,����׷���ſ�����
//	/*v1.resize(v2.size()+v1.size());
//	copy(v2.begin(), v2.end(), v1.end());����*/
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v1.begin(), v1.end(), Printint);
//	cout << endl;
//	system("pause");
//}