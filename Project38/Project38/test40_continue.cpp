// continue
//  continue �� break ������ ����һ��forѭ��������break���˳�����ִ�У�����continue��˵���˳��������һ��ѭ��

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