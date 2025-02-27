#include<iostream>
using namespace std;
int arry_max(int* p,int n) {
	int max = p[0];
	for (int i = 1; i < n; i++) {
		//if (max < p[i]) {
			//max = p[i];
		//}
		max = (max > p[i]) ? max : p[i];
	}
	return max;
}
int maincase3() {
	int arr[10] = { 12,2,13,33,77,98,190,30,12,11 };
	cout << "数组中的最大值为：" << arry_max(arr, 10) << endl;
	system("pause");
	return 0;
}