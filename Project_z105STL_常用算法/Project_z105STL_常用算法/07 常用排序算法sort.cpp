#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include <functional>

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void MyPrintF(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//sort默认从小到大排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(),MyPrint());
	cout << endl;

	//从大到小排序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), MyPrintF);
	cout << endl;
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