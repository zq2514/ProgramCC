// continue
//  continue 和 break 的区别： 对于一个for循环来讲，break是退出不再执行，对于continue来说是退出后继续下一次循环

#include<iostream>
using namespace std;
int main()
{
	for (int i = 0 ; i < 10 ; i++)
	{
		if (i == 6)
		{
			break;
		}
		cout <<  i << endl;
		
	}
	cout << endl;
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		if (i == 6)
		{
			continue;
		}
		cout << i << endl;
	}

	cout << "class 40" << endl;
	system("pause");
	return 0;
}