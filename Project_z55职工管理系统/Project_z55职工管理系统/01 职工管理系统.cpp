#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"



// 1 创建管理类
// 2 菜单功能的显示
// 3 提供功能接口   并    退出功能实现
// 4 增加功能   
// 4.1 首先 创建职工抽象类（职工类，经理类，老板类），并进行测试
// 4.2 然后 批量添加职工并保存到文件中


void test01()
{
	Worker* worker = NULL;   // 创建职工大类
	worker = new Employee(1, "张三", 1);  // 多态，new 生成职工小类，并调用重载函数
	worker->ShowInfo();                   // 对象调用行为，该行为，父类，子类都有
	delete worker;

	worker = new Manager(2,"李四",2);
	worker->ShowInfo();
	delete worker;

	worker = new Boss(3,"王五",3);
	worker->ShowInfo();
	delete worker;
}



int main()
{

	//test01();    //用来测试多态生成是否正确
	
	WorkerManager wm;
	
	int choice = 0;  // 提示用户选择	

	while (true)
	{
		wm.ShowMenu();
		cout << "请输入您的选择" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:  // 提供接口， 退出程序
			wm.ExitSystem();
			break;
		case 1: // 添加职工
			wm.AddEmp();
			break;
		case 2:// 显示职工
			wm.Show_Emp();
			break;
		case 3:// 删除职工
			wm.Del_Emp();
			break;
		case 4:// 修改职工
			wm.Mod_Emp();
			break;
		case 5:// 查询职工
			wm.Find_Emp();
			break;
		case 6:// 排序
			wm.Sort_Emp();
			break;
		case 7:  // 清空
			break;
		default:
			system("cls");
			break;
		}
	}	

	system("pause");
	return 0;
}