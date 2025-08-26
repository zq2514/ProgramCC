// 一维数组名称的用途
// 统计内存中的长度        sizeof(arr)
// 获取内存中的首地址      
// 4个字节，一个整型数据占用4个字节的位置
// 
#include<iostream>
using namespace std;
int main()
{
	// 1. 可以获取整个数组占用内存空间的大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用的空间: " << sizeof(arr) << endl;
	cout << "每个元素占用的空间: " << sizeof(arr[0]) << endl;
	cout << "数组中的元素个数为： " << sizeof(arr) / sizeof(arr[0]) << endl;

	// 2. 可以通过数组名查看数组首地址
	cout << "数组首地址为： " << arr << endl; //16进制的
	cout << "数组首地址为： " << (int)arr << endl; // 10进制的
	cout << "数组中第一个元素的地址为" << &arr[0] << endl;
	cout << "数组中第一个元素的地址为" << (int) & arr[0] << endl;

	cout << "数组中第二个元素的地址为：" << &arr[1] << endl;
	cout << "数组中第二个元素的地址为：" << (int) & arr[1] << endl;

	system("pause");
	return 0;
	// 3. 数组是不能进行赋值操作的
}
