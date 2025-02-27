//#include<iostream>
//using namespace std;
//
//template<typename T>
//void fun(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void Mysort( T array[], int num)
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j < num; j++)
//		{
//			if (array[min] > array[j])
//			{
//				min = j;
//			}
//		}
//		if (min != i) {
//			fun(array[i], array[min]);
//		}
//	}
//}
//
//int main()
//{
//	char array1[6] = "abcde";
//	int array2[6] = { 3,5,7,9,0,8 };
//	Mysort(array1, 6);
//	for (char ch : array1)
//	{
//		cout << ch << "\t";
//	}
//	cout << endl;
//	Mysort(array2, 6);
//	for (int  num : array2)
//	{
//		cout << num << "\t";
//	}
//	cout << endl;
//	system("pause");
//}
