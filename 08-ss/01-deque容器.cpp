////˫�˶��У�ͷ����β���ܱȽ�Ч�ʵز���ɾ������Ҳ�����в�insert��
////double ended queue������
////1.���캯����
////deque<T> dq1;Ĭ�Ϲ���
////deque(begin,end);��һ�������[begin,end)�����Ԫ�ؿ�����������
////deque(n,elem);
////deque(const deque &dq);��������
//
//////////////////////////////////////////////
////2.��ֵ������
////deque& operator=(const deque &d);
////assign(begin,end);��ĳ���󣨰�����������ֵ����������
////assign(n,elem);n��elem��������
//
////3.��С������
//// dequeû������һ˵��������ʱ��ֱ�����п���������һ��ָ�룬
//// ��ָ��ָ���¿��ٵ�һСƬ�ռ䣬����
//// ��vector���¿��ٿռ䣬���д����ĸ��Ʋ�����
////deque.empty();
////deque.size();
////deque.resize();
////deque.resize(n,elem);
//
////4.�����ɾ��
////push_back(elem);
////push_front(elem);
////pop_back();
////pop_front();
////insert(pos,elem);//������
////insert(pos,n,elem);
////insert(pos,d.begin,d.end);
////clear();
////erase(begin,end);//������
////erase(pos);
//
////5.���ݴ�ȡ
////at(int index);
////operator[];
////front();
////back();
//
////6.deque����Ҫ������׼�㷨ͷ�ļ�algorithm��
////sort(iterator begin,iterator end);������[   )���ݽ�������Ĭ������
////ֻҪ֧��������ʵ�����������������sort����vector,deque)
//
//#include<iostream>
//#include<deque>
//using namespace std;
//void PrintDeque(const deque<int> &d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	deque<int> d1(10,100);
//	PrintDeque(d1);
//	deque<int>d2(d1.begin(), d1.begin() + 3);
//	PrintDeque(d2);
//	 d1.assign(d1.begin(), d1.begin() + 3);
//	 PrintDeque(d1);
//	system("pause");
//}