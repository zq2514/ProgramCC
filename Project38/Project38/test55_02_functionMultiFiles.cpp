//1.���ļ�����ͷ�ļ�.h
// 2.����ͬ��Դ�ļ�.cpp
// 3����ͷ�ļ���д��������
// 4����Դ�ļ���д��������
//


#include <iostream>
using namespace std;
#include "swap.h"

void swap(int a, int b);

int main()
{
	int a = 10;
	int b = 20;
	cout << "����ǰ�Ľ��" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	swap(a, b);

	system("pause");
	return 0;
}

