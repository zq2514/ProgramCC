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

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "������Ľ��" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}