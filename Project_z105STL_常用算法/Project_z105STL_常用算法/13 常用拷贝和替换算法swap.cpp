#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	cout << "替换前： " << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//将容器中的20 替换成 2000
	cout << "替换后：" << endl;
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;


}

class ReplaceGreater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};

void test02()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);
	cout << "替换前： " << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//将容器中的20 替换成 2000
	cout << "替换后：" << endl;
	replace_if(v.begin(), v.end(), ReplaceGreater30(), 2000);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}


void test03()
{
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	vector<int>v1;
	v1.push_back(300);
	v1.push_back(200);
	v1.push_back(400);
	v1.push_back(500);
	v1.push_back(100);
	v1.push_back(200);
	cout << "替换前： " << endl;
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;

	cout << "替换后： " << endl;
	swap(v,v1);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;
}

int main()
{
	//test01();
	//test02();
	test03();

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
