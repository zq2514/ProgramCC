//#include <iostream>
//using namespace std;
//
//int main()
//{
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;
#include <string>

int main()
{
	//��ά�������Ƶ���;
	// 1. ���Բ鿴ռ���ڴ�ռ�Ĵ�С
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "��ά����ռ���ڴ�ռ�Ϊ�� " << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�ռ�Ϊ�� " << sizeof(arr[0]) << endl;
	cout << "��λ�����һ��Ԫ��ռ�õ��ڴ��С�� " << sizeof(arr[0][0]) << endl;
	cout << "��ά���������Ϊ�� " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά���������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	// 2. ���Բ鿴��ά������׵�ַ
	cout << "��ά������׵�ַ��" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַΪ��" << (int)arr[0] << endl;
	cout << "��ά�����һ��Ԫ���׵�ַ�� " << (int)&arr[0][0];
	cout << endl;
	string names[] = { "����","����","����" };
	for (int j = 0; j < 3; j++)
	{
		cout << names[j] << endl;
	}
	system("pause");
	return 0;
}