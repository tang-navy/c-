////copy(beg,end,iterator dest目标起始迭代器);将指定范围元素拷贝到目标容器；
////repalce(beg,end,old_value,new_value);会替换所有旧值；
////replace_if(beg,end,_pred,new_val);通过谓词指定替换的条件；
////swap(container c1,contaner c2);互换两个同类型容器
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
//	//注意要开辟v1的空间,不能追加着拷贝；
//	/*v1.resize(v2.size()+v1.size());
//	copy(v2.begin(), v2.end(), v1.end());错误*/
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v1.begin(), v1.end(), Printint);
//	cout << endl;
//	system("pause");
//}