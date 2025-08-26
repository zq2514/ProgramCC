//和主函数并列的cpp文件，不用写系统内部的include，只需要写自己的写的头文件
#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

WorkerManager::WorkerManager() // 这个是构造函数的空实现
{
	//头文件中包含了函数的声明
	//这个地方应该写函数的实现
	// 但在WorkerManager中，可以什么都不写。
	// 
	// 
	////初始化员工数量
	//this->m_EmpNum = 0;
	//// 初始化员工数组
	//this->m_EmpArray = NULL;


	/* 读文件的三种情况处理：
	文件不存的情况处理：
	文件存在且数据为空的情况处理
	文件存在且保存有职工的情况操作*/


	// 文件不存的情况处理：
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	// 文件不存在的情况
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//初始化员工数量
		this->m_EmpNum = 0;
		// 初始化员工数组
		this->m_EmpArray = NULL;
		// 初始化文件为空的标志
		this->m_FileIsEmpty = true;
		// 关闭文件
		ifs.close();

		return;
	}
	// 文件存在，但数据为空的情况处理
	char ch;
	ifs >> ch;
	if (ifs.eof())  //end of file
	{
		cout << "文件为空" << endl;
		this->m_EmpNum = 0;
		// 初始化员工数组
		this->m_EmpArray = NULL;
		// 初始化文件为空的标志
		this->m_FileIsEmpty = true;
		// 关闭文件
		ifs.close();

		return;
	}

	// 文件存在且数据不为空

	int num = this->get_EmpNum();
	//cout << "职工的个数为：" << num << endl;
	this->m_EmpNum = num;
	////根据职工数创建数组
	this->m_EmpArray = new Worker * [this->m_EmpNum];
	//初始化职工
	init_Emp();
	//测试代码

	/*for (int i = 0; i < m_EmpNum; i++)
	{
		cout << "职工号： " << this->m_EmpArray[i]->m_Id
			<< " 职工姓名： " << this->m_EmpArray[i]->m_Name
			<< " 部门编号： " << this->m_EmpArray[i]->m_DeptId << endl;
	}*/

};


void WorkerManager::ShowMenu()
{
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
};


// 添加员工的方法实现
void WorkerManager::AddEmp()
{
	cout << "请输入添加员工的数量" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		// 计算 新空间的大小
		int newSize = this->m_EmpNum + addNum;

		//开辟新空间
		Worker** newSpace = new Worker * [newSize];   // 这个语法不是很理解

		// 将原来空间下的内容，存放到新空间
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		// 输入新数据
		for (int j = 0; j < addNum; j++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << j + 1 << "个新职工的编号：" << endl;
			cin >> id;

			cout << "请输入第" << j + 1 << "个新职工的名字：" << endl;
			cin >> name;

			cout << "请选择该职工的岗位: " << endl;
			cout << "1 普通职工" << endl;
			cout << "2 经理" << endl;
			cout << "3 老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1://普通员工
				worker = new Employee(id,name,1);
				break;
			case 2: //经理
				worker = new Manager(id,name,2);
				break;
			case 3: //老板
				worker = new Boss(id,name,3);
				break;
			default:
				break;
			}

			newSpace[this->m_EmpNum + j] = worker;

		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间指向
		this->m_EmpArray = newSpace;

		//更新职工个数
		this->m_EmpNum = newSize;

		//提示消息
		cout << "成功添加" << addNum << "名新职工！" << endl;

		//
		this->m_FileIsEmpty = false;

		//保存数据到文件中
		this->Save();

	}
	else
	{
		cout << "输入有误，请重新输入" << endl;
	}

	system("pause");
	system("cls");
}


// 保存员工信息书写：
void WorkerManager::Save()
{
	//包含头文件
	
	//创建流对象
	ofstream ofs;
	// 打开文件
	ofs.open(FILENAME,ios::out);
			// 写数据
	for (int i = 0;i<this->m_EmpNum;i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
		// 关闭文件
	ofs.close();
}



void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}


// 统计人数
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	return num;
}

// 初始化员工
void WorkerManager::init_Emp()
{
	// 读文件操作
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	
	while (ifs>>id && ifs>>name && ifs>>dId)
	{
		// 创建Worker对象，空指针
		Worker* worker = NULL;
		// 判断部门，生成新对象
		if (dId == 1)  // 普通员工 
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) // 经理
		{
			worker = new Manager(id, name, dId);
		}
		else if (dId == 3)// 老板
		{
			worker = new Boss(id, name, dId);
		}
		//对象生成后，需要存放到数组中
		this->m_EmpArray[index] = worker;

		index++;
	}
}

// 显示职工
void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			//利用多态调用接口
			this->m_EmpArray[i]->ShowInfo();  //ShowInfo 在雇员，经理，老板的cpp文件中。
		} 
	}

	system("pause");
	system("cls");
}


// 删除职工：
// 4.1 删除职工前做判断，该成员是否存在：
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}


void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空！" << endl;
	}
	else
	{
		// 按职工编号删除
		cout << "请输入想要删除的职工编号：" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);

		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;

			this->Save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "删除失败，未找到该职工" << endl;
		}
	}
	system("pause");
	system("cls");
}

// 修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入修改职工的编号：" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//查找到编号的职工

			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到： " << id << "号职工，请输入新职工号： " << endl;
			cin >> newId;

			cout << "请输入新姓名： " << endl;
			cin >> newName;

			cout << "请输入岗位： " << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}

			//更改数据 到数组中
			this->m_EmpArray[ret] = worker;

			cout << "修改成功！" << endl;

			//保存到文件中
			this->Save();
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}

	//按任意键 清屏
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空！" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按姓名查找" << endl;

		int select = 0;
		cin >> select;

		if (select == 1)//按职工号查找
		{
			int id;
			cout << "请输入查找的职工编号" << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功，该职工的信息如下：" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			else
			{
				cout << " 查找失败，查无此人" << endl;
			}
		}
		else if (select == 2) ////按姓名查找
		{
			string name;
			cout << "请输入查找的姓名：" << endl;
			cin >> name;

			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功,职工编号为："
						<< m_EmpArray[i]->m_Id
						<< " 号的信息如下：" << endl;

					flag = true;

					this->m_EmpArray[i]->ShowInfo();
				}
			}
			if (flag == false)
			{
				// 查无此人
				cout << "查找失败，查无此人" << endl;
			}
		}
		else
		{
			cout << "输入选项有误" << endl;
		}
	}
	system("pause");
	system("cls");

}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "File is not exit or file is empty" << endl;
		system("pause");
		system("cls");

	}
	else
	{
		cout << "请选择排序方式： " << endl;
		cout << "1、按职工号进行升序" << endl;
		cout << "2、按职工号进行降序" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else
				{
					if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] =this-> m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}		

	}
	cout << "排序成功,排序后结果为：" << endl;
	this->Save();
	this->Show_Emp();
}


// 清空函数
void WorkerManager::Clean_File()
{
	cout << "确认清空？" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;

	int select = 0;
	cin >> select;
	
	if (select == 1)
	{
		//打开模式 ios::trunc 如果存在删除文件并重新创建
		ofstream ofs(FILENAME,ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}

WorkerManager::~WorkerManager() // 这个是析构函数的空实现
{
	//头文件中包含了函数的声明
	//这个地方应该写函数的实现
	// 但在WorkerManager中，可以什么都不写。
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}

};