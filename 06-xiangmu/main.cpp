#include"WorkerManager.h"
int main()
{
	WorkerManager wm;
	while (1)
	{
		system("cls");
		wm.ShowMenu();
		int Select = -1;
		cout << "����������ѡ��" << endl;
		cin >> Select;
		switch (Select)
		{
		case 0://0.�˳��������
			wm.Exit();
			break;
		case 1://1.����ְ����Ϣ
			wm.AddEmp();
			break;
		case 2://2.��ʾȫ��ְ����Ϣ
			wm.ShowAllEmp();
			break;
		case 3://3.ɾ����ְְ��
			wm.DeleteEmp();
			break;
		case 4://4.�޸�ְ����Ϣ
			wm.ModifyEmp();
			break;
		case 5://5.����ְ����Ϣ
			wm.FindEmp();
			break;
		case 6://6.���������
			//wm.SortEmp();
			break;
		case 7://7.��������ĵ�
			//wm.ClearFile();
			break;
		default:
			cout << "��������������ѡ��!" << endl;
			break;

		}
	}
}
