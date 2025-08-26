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
	
	bool ret = binary_search(v.begin(), v.end(),90);
	if (!ret )
	{
		cout << "NO find" << endl;
	}
	else
	{
		cout << "Find: " << ret << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}