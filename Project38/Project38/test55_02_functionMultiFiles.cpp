//1.分文件创建头文件.h
// 2.创建同名源文件.cpp
// 3、在头文件中写函数声明
// 4、在源文件中写函数定义
//


#include <iostream>
using namespace std;
#include "swap.h"

void swap(int a, int b);

int main()
{
	int a = 10;
	int b = 20;
	cout << "交换前的结果" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap(a, b);

	system("pause");
	return 0;
}

