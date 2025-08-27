#include<iostream>
#include<string>
using namespace std;
#define MAX 1000 // 宏常量， 全局变量



void showMenu()
{
	cout << "==========1、添加联系人==========" << endl;
	cout << "==========2、显示联系人==========" << endl;
	cout << "==========3、删除联系人==========" << endl;
	cout << "==========4、查找联系人==========" << endl;
	cout << "==========5、修改联系人==========" << endl;
	cout << "==========6、清空联系人==========" << endl;
	cout << "==========0、推出通讯录==========" << endl;

}


// 设计联系人的结构体
struct Person
{
	//姓名
	string m_Name;
	//性别 1男 2女
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;

	//住址
	string m_Addr;
};

// 设计通讯录的结构体

struct AddressBooks
{
	// 通讯录中保存的联系人数组
	struct Person personArray[MAX];

	//通讯录中当前记录联系人个数
	int m_Size;
};


// 添加联系人
// 用指针接收这个地址
void addPerson(AddressBooks * abs)
{
	// 首先思考如何添加？
	// 添加一条信息时，需要考虑哪些信息呢？
	// 首先考虑通讯录是否加满？考虑通讯录中是否已经存在？如果都不满足，添加该信息！
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		// 进入该段，说明可以添加，
		// 添加过程如下
		
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别 1男 2女
		cout << "请输入性别：（1男 2女）" << endl;
		int sex =0;


		// 考虑到用户可能输入错，下面结构保证用户输入正确后退出
		while (true)
		{
			//
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		

		//年龄
		cout << "请输入年龄：" << endl;
		int age=0;
		

		while (true)
		{
			cin >> age;
			if (age > 0 && age <= 120)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		

		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;


		// 最后注意，添加了一个人之后，需要更新通讯录的人数
		abs->m_Size++;

		cout << "添加成功" << endl;

		// 添加成功后，需要返回上层界面，此时需要清空屏幕；
			//请按任意键继续
			system("pause");
			//清屏
			system("cls");
		 
	}
}




int main()
{
	// 创建通讯录结构体变量
	AddressBooks abs;

	// 初始化通讯录中当前人员个数
	abs.m_Size = 0;

	//定义一个变量，让用户选择执行某个功能
	int select = 0;

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: // 1、添加联系人
			//当用户选择功能1时，需要给通讯录中添加联系人，设计添加函数
			// 函数中需要传递一个值，该值需要变化，所以只能是地址；使用地址传递；
			// 利用地址传递可以修改（修饰）实参；
			addPerson(&abs);
			break;
		case 2: // 2、显示联系人
			break;
		case 3: // 3、删除联系人
			break;
		case 4: // 4、查找联系人
			break;
		case 5: // 5、修改联系人
			break;
		case 6: // 6、清空联系人
			break;
		case 0: // 0、推出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:

			break;
		}
	}


	system("pause");
	return 0;
}