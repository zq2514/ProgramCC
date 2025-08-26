//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//void test01()
//{
//
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}


#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.push_back(9);
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "NO find" << endl;
	}
	else
	{
		cout << "Find: " << *it << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}