//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}


// 指针即地址

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	//1.定义指针
	int * p;
	p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为：" << p << endl;
	// 2.使用指针
	*p = 1000;
	cout << "*p的值为：" << *p << endl;
	cout << "a的值为：" << a << endl;

	//3 空指针
	int * p2 = NULL;
	int* p3 = NULL;
	int* p4 = NULL;
	// 空指针不能访问
	//cout << "空指针的地址" << *p2 << endl;
	//4 野指针
	// 野指针形式：指向不该指的地方   int * p = 0x1100; 这个是不允许的。 

	system("pause");
	return 0;
}
