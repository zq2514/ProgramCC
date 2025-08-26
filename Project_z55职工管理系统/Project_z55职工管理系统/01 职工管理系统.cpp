#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"



// 1 ����������
// 2 �˵����ܵ���ʾ
// 3 �ṩ���ܽӿ�   ��    �˳�����ʵ��
// 4 ���ӹ���   
// 4.1 ���� ����ְ�������ְࣨ���࣬�����࣬�ϰ��ࣩ�������в���
// 4.2 Ȼ�� �������ְ�������浽�ļ���


void test01()
{
	Worker* worker = NULL;   // ����ְ������
	worker = new Employee(1, "����", 1);  // ��̬��new ����ְ��С�࣬���������غ���
	worker->ShowInfo();                   // ���������Ϊ������Ϊ�����࣬���඼��
	delete worker;

	worker = new Manager(2,"����",2);
	worker->ShowInfo();
	delete worker;

	worker = new Boss(3,"����",3);
	worker->ShowInfo();
	delete worker;
}



int main()
{

	//test01();    //�������Զ�̬�����Ƿ���ȷ
	
	WorkerManager wm;
	
	int choice = 0;  // ��ʾ�û�ѡ��	

	while (true)
	{
		wm.ShowMenu();
		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:  // �ṩ�ӿڣ� �˳�����
			wm.ExitSystem();
			break;
		case 1: // ���ְ��
			wm.AddEmp();
			break;
		case 2:// ��ʾְ��
			wm.Show_Emp();
			break;
		case 3:// ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4:// �޸�ְ��
			wm.Mod_Emp();
			break;
		case 5:// ��ѯְ��
			wm.Find_Emp();
			break;
		case 6:// ����
			wm.Sort_Emp();
			break;
		case 7:  // ���
			break;
		default:
			system("cls");
			break;
		}
	}	

	system("pause");
	return 0;
}