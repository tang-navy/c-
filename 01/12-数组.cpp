//数组名其实也相当于内存地址的别名，用于标记数组开始的位置；
//注意数组名一旦确定，系统会自动将分配空间的首地址赋给它，数组名是一个常量
//不能再做赋值；
//数组名arr：是一个指针常量，但是可以利用sizeof(arr)判断数组总共大小；
//如int* p=arr;sizeof(p)=系统地址位数；
//一维数组的元素就是一个一个数据对象，二维数据的元素是一个一个的一维数组；
//二维数组int array[3][4]:array是一个数组指针；
// array[0]即二维数组的第一个元素，不就是一个一维数组吗；
//二维数组首地址array，一维数组首地址array[0]，第一个元素首地址&array[0][0]相同；
//对于一维数组arr[4]:一维数组名arr代表一维数组第一个元素arr[0]的地址，类型为int*
//对于二维数组arr[3][4]:二维数组名arr代表二维数组第一个元素的地址，即第一行arr[0]的地址，类型为(int*) [4]。arr[0] + 1指向第一行的第二个元素的地址。arr + 1指向第二行的首地址。
//arr[0]实际上是一个一维数组名，自然就代表一维数组第一个元素的地址。
//总结：int arr[4]的元素是一个一个的int;int arr[3][4]的元素是一个一个的int[4]数组；
//
#include<iostream>
using namespace std;
int main12() {

	//一维数组：
	int arr[] = { 1,2,3,4,5 };
	//int arr1[5] = arr[5];不能用一个数组对另一个数组赋值；
	for (int num : arr) {
		cout << num << endl;
	}
	cout << "arr数组首地址为：" << (long long)arr << endl;//默认地址是16进制；
	cout << "arr[0]数组首地址为：" << (long long)&arr[0] << endl;
	cout << "arr[1]数组首地址为：" << (long long)&arr[1] << endl;

	cout <<"数组占用内存："<< sizeof(arr)<<"B" << endl;
	int* p = arr;
	cout << "指针p占用内存：" << sizeof(p) << "B" << endl;
	//二维数组：每个元素都相当于一个一维数组；
	//数组名是指向相应一维数组的指针常量（数组指针）
	int array[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	//int* p1 = array;错误！类型不匹配；
	int(*p1)[4] = array;//p1为指向数组长度为4的数组的指针；
	for (int i = 0; i < 12; i++) {//说明二维数组在内存中也是“一维”连续存放；
		cout << *((*p1) + i) << "\t";
	}
	cout << endl;

	int* p2 = *array;
	for (int i = 0; i < 12; i++) {//说明二维数组在内存中也是“一维”连续存放；
		cout << *(p2 + i) << "\t";
	}
	cout << endl;

	cout << "array二维数组占用空间：" << sizeof(array) << "B" << endl;

	system("pause");
	return 0;
}
