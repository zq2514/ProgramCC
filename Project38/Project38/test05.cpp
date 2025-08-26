#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		// cout << i << endl;
		for (int j = 1; j <= i; j++)
		{
			cout << j << "*" << i << "=" << i * j << "  ";
		}
		cout << endl;
	}
	cout << "ÎÒµÄ" << endl;
	system("pause");
	return 0;
}