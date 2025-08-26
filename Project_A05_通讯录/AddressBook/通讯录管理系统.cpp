#include<iostream>
#include<string>
using namespace std;


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

int main()
{
	cout<<"This is my second times do this!" << endl;

	int select = 0;

	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: // 1、添加联系人
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