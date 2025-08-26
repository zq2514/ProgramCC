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
	//二维数组名称的用途
	// 1. 可以查看占用内存空间的大小
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
	cout << "二维数组占用内存空间为： " << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存空间为： " << sizeof(arr[0]) << endl;
	cout << "二位数组第一个元素占用的内存大小： " << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数为： " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数为；" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	// 2. 可以查看二维数组的首地址
	cout << "二维数组的首地址：" << (int)arr << endl;
	cout << "二维数组第一行首地址为：" << (int)arr[0] << endl;
	cout << "二维数组第一个元素首地址： " << (int)&arr[0][0];
	cout << endl;
	string names[] = { "张三","李四","王五" };
	for (int j = 0; j < 3; j++)
	{
		cout << names[j] << endl;
	}
	system("pause");
	return 0;
}