#include<iostream>
using namespace std;
#include<string>
struct hero {
	string name;
	int age;
	string gender;
};

void struct_sort(hero arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		bool flag = false;
		for (int j = n - 1; j > i; j--) {
			if (arr[j].age < arr[j - 1].age) {
				hero temp;
				/*
				temp.age= arr[j].age;
				arr[j].age = arr[j - 1].age;
				arr[j - 1].age = temp.age;

				temp.name = arr[j].name;
				arr[j].name = arr[j - 1].name;
				arr[j - 1].name = temp.name;

				temp.gender = arr[j].gender;
				arr[j].gender = arr[j - 1].gender;
				arr[j - 1].gender = temp.gender;
				*/
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
				flag = true;
			}
		}
		if (flag == false) {
			break;
		}
	}
}
void print_hero(hero a) {
	cout << "Ó¢ÐÛÃû³Æ£º" << a.name << "\tÓ¢ÐÛÄêÁä£º" << a.age << "\tÓ¢ÐÛÐÔ±ð£º" << a.gender << endl;
}
int maincase4() {
	hero hero_array[4] = {
		{"±âÈµ",90,"ÄÐ"},
		{"ÂÀ²¼",30,"ÄÐ"},
		{"õõ²õ",18,"Å®"},
		{"Ð¡ÇÇ",20,"Å®"}
	};
	int len = sizeof(hero_array) / sizeof(hero_array[0]);
	cout << "ÅÅÐòÇ°£º" << endl;
	for (int i = 0; i < len; i++) {
		print_hero(hero_array[i]);
	}
	struct_sort(hero_array, len);
	cout << "ÅÅÐòºó£º" << endl;
	for (int i = 0; i < len; i++) {
		print_hero(hero_array[i]);
	}

	system("pause");
	return 0;
}