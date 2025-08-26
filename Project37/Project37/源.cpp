#include<iostream>
using namespace std;

int main()
{
	for (int i = 0 ; i < 10 ; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;  //直接换行处理
		
	}	

	system("pause");
	return 0;
}