
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
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1://���Ա��
			wm.Add_Emp();
			system("pause");
			break;
		case 2://��ʾȫ��Ա��
			wm.show_AllEmp();
			break;
		case 3://ɾ��Ա��
			wm.Del_Emp();
			break;
		case 4://�޸���Ϣ
			wm.Change_Emp();
			break;
		case 5://����Ա��
			wm.Find_Emp();
			break;
		case 6://����Ա��
			wm.Sort_Emp();
			break;
		case 7://����ļ�
			wm.Clean_File();
			break;
		default:
			break;
		}

	}
	
	system("pause");
}