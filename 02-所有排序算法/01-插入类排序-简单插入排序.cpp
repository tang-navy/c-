#include<iostream>
using namespace std;

//1.����������-�򵥲�������
void insert_sort1(int arr[], int n) {//�����ڱ�
	int i, j, temp;
	for (i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) {
			temp = arr[i];
			for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

void insert_sort2(int arr[], int n) {//���ڱ�
	int i, j;
	for (int i = 2; i <= n; i++) {
		if (arr[i] < arr[i - 1]) {
			arr[0] = arr[i];
			for (j = i - 1; arr[j] > arr[0]; j--) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = arr[0];
		}
	}

}

int main() {
	int array[10] = { 1,7,2,10,66,39,9,91,23,69 };
	cout << "����ǰ������Ϊ��";
	for (int num : array) {
		cout << num << "\t";
	}
	cout << endl;
	insert_sort1(array, 10);
	cout << "����������Ϊ��";
	for (int num : array) {
		cout << num << "\t";
	}
	cout << endl;


	int array1[11] = { 0,1,7,2,10,66,39,9,91,23,69 };
	cout << "����ǰ������Ϊ��";
	for (int i = 1; i <= 10;i++ ) {
		cout << array1[i]<< "\t";
	}
	cout << endl;
	insert_sort2(array1, 10);
	cout << "����������Ϊ��";
	for (int i = 1; i <= 10; i++) {
		cout << array1[i] << "\t";
	}
	cout << endl;
	system("pause");
}