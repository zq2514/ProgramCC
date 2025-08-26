#include<iostream>
using namespace std;

int main()
{
	// 冒泡
	int arr[] = { 0,9,8,7,6,5,4,3,2,1 };
	int length_arr = sizeof(arr);
	int length_arr0 = sizeof(arr[0]);
	int num_arr = length_arr / length_arr0;
	cout << "输出数组的个数" << endl;
	cout << num_arr << endl;
	cout << "输出原数组内容" << endl;
	for (int i = 0; i < num_arr; i++)
	{
				cout << arr[i] << " ";
	}
	cout << endl;


	cout << "冒泡排序的输出" << endl;
	int temp;
	for (int m = 0; m < num_arr; m++)
	{
		for (int n = 0; n < num_arr - m - 1; n++)
		{
			if (arr[n] > arr[n+1])
			{
				temp = arr[n];
				arr[n] = arr[n + 1];
				arr[n + 1] = temp;
			}
		}
	}

	for (int i = 0; i < num_arr; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}