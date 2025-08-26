// goto  无条件的跳转


//#include<iostream>
//using namespace std;
//int mian()
//{
//	cout << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int mian()
//{
//	cout << "1.xxxxx" << endl;
//	cout << "2.xxxxx" << endl;
//	//goto FLAG;
//	cout << "3.xxxxx" << endl;
//	cout << "4.xxxxx" << endl;
//
//	//FLAG:
//	cout << "5.xxxxx" << endl;
//
//	cout << endl;
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 6)
		{
			break;
		}
		cout << i << endl;

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