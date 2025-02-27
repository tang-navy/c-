
#include"workerManager.h"
#include"worker.h"
#include"employee.h"
int main()
{
	WorkerManager wm;
	int choice;
	while (1)
	{
		system("cls");
		wm.show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统
			wm.exitSystem();
			break;
		case 1://添加员工
			wm.Add_Emp();
			system("pause");
			break;
		case 2://显示全部员工
			wm.show_AllEmp();
			break;
		case 3://删除员工
			wm.Del_Emp();
			break;
		case 4://修改信息
			wm.Change_Emp();
			break;
		case 5://查找员工
			wm.Find_Emp();
			break;
		case 6://排序员工
			wm.Sort_Emp();
			break;
		case 7://清空文件
			wm.Clean_File();
			break;
		default:
			break;
		}

	}
	
	system("pause");
}