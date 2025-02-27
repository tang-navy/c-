

//1.while（循环条件）{循环体}；
//2.do{循环体} while（循环条件），不论条件是否满足，都会执行一次循环体；
//3.for(起始表达式0；条件表达式可以省略1；尾末循环体3){循环语句2}
// 0123-123-123......
//4.范围for循环：for(elemType i:arr)


#include<iostream>
using namespace std;
int main10() {
	int i = 11;
	do { 
		cout << i << endl;
		i++;
	} while (i < 10);

	int arr[] = { 1,2,3,4,5 };
	for (int num : arr) {
		cout << num << "\t";
	}

	system("pause");
	return 0;
}