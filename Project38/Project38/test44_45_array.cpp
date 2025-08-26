#include<iostream>
using namespace std;
int main()
{

	int arr[5] = { 300,350,200,400,250 };
	//int arr[5] = { 4,5,2,3,1 };
	// 打印矩阵
	cout << "打印原始矩阵：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	// 确定起始和终止下标，并创建中间赋值变量
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = 0;
	// 比较起始和终止下标的位置的大小，看是否进行操作
	// 进行赋值操作
	//起始位置++ 终止位置--

	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	
	// 打印倒置后的矩阵
	cout << "打印倒置后的矩阵：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}