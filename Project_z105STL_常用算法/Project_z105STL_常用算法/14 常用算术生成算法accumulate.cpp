#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>

void myPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	for (int i = 0; i <= 100;i++)
	{
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0);
	cout << total << endl;

}

int main()
{
	test01();
	

	system("pause");
	return 0;
}







//#include<iostream>
//using namespace std;
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
