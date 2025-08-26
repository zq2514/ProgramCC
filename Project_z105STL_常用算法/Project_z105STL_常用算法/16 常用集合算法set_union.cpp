#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<numeric>

void myPrint(int val)
{
	cout << val << " ";
}
void test02()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;
	vTarget.resize(v1.size()+ v2.size());
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, myPrint);
	cout << endl;

}

int main()
{
	test02();

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
