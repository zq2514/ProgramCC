#include "swap.h"


void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "交换后的结果" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}