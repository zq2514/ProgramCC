#include<iostream>
using namespace std;

int main()
{
	//敲桌子案列
	// 从1到100
	// 
	for (int i = 1; i <= 100; i++)
	{
		if( i % 7 == 0 || i % 10 == 7 || i / 10 == 7) 
		{
			cout << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}