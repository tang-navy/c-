#include"WorkerManager.h"
int main()
{
	WorkerManager wm;
	while (1)
	{
		system("cls");
		wm.ShowMenu();
		int Select = -1;
		cout << "请输入您的选择：" << endl;
		cin >> Select;
		switch (Select)
		{
		case 0://0.退出管理程序
			wm.Exit();
			break;
		case 1://1.增加职工信息
			wm.AddEmp();
			break;
		case 2://2.显示全部职工信息
			wm.ShowAllEmp();
			break;
		case 3://3.删除离职职工
			wm.DeleteEmp();
			break;
		case 4://4.修改职工信息
			wm.ModifyEmp();
			break;
		case 5://5.查找职工信息
			wm.FindEmp();
			break;
		case 6://6.按编号排序
			//wm.SortEmp();
			break;
		case 7://7.清空所有文档
			//wm.ClearFile();
			break;
		default:
			cout << "输入有误，请重新选择!" << endl;
			break;

		}
	}
}
