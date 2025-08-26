#include<iostream>
using namespace std;

int& test01()
{
	int a = 10;
	return a;
}
int& test02()
{
	static int a = 10;
	return a;
}

int main()
{
	int &ref = test01();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl; //不能返回局部变量的引用,第一次输出可以显示正确结果，但是第二次不可以

	// 不能返回局部变量的原因是，局部变量属于栈区区，程序运行后，栈区内存会自动释放，不进行保留
	// 如何才能让引用中的数据返回？ 将栈区中的局部变量 放到全局区，变为全局区中的静态变量 （全局变量，静态变量，常量）
	int& ref2 = test02();
	cout << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;  //测试表明，ref2 可以正确接收 函数中的静态返回值

	//引用的左值赋值
	test02() = 5000;
	cout << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;


	system("pause");

	return 0;
}
