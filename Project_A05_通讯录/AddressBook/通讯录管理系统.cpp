#include<iostream>
#include<string>
using namespace std;


void showMenu()
{
	cout << "==========1�������ϵ��==========" << endl;
	cout << "==========2����ʾ��ϵ��==========" << endl;
	cout << "==========3��ɾ����ϵ��==========" << endl;
	cout << "==========4��������ϵ��==========" << endl;
	cout << "==========5���޸���ϵ��==========" << endl;
	cout << "==========6�������ϵ��==========" << endl;
	cout << "==========0���Ƴ�ͨѶ¼==========" << endl;

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
		case 1: // 1�������ϵ��
			break;
		case 2: // 2����ʾ��ϵ��
			break;
		case 3: // 3��ɾ����ϵ��
			break;
		case 4: // 4��������ϵ��
			break;
		case 5: // 5���޸���ϵ��
			break;
		case 6: // 6�������ϵ��
			break;
		case 0: // 0���Ƴ�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
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