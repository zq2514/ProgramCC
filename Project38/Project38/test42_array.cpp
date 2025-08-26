// 一维数组
// 三种数组定义方式
// 数据类型_数组名[数组长度]
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	arr[0] = 34;
	arr[1] = 35;
	arr[2] = 36;
	arr[3] = 37;
	arr[4] = 38;
	int arr_A[5] = { 5,4, 3, 2,1 };
	int arr_B[ ] = { 5,4, 3, 2,1 };


	cout << "class 42" << endl;
	cout << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	//cout << arr_A << endl;
	//cout << arr_B << endl;
	system("pause");
	return 0;
}