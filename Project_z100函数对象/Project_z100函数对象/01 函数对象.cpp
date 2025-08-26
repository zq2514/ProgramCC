#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

//返回bool类型的仿函数称为 谓词
// 

class myCompare
{
public:
	bool operator()(int v)
	{
		return v > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), myCompare());

	if (it == v.end())
	{
		cout << "未找到" << endl;

	}
	else
	{
		cout << "找到了大于5的数字，为" << *it <<endl;
	}
}

void test02()
{
	negate<int>n;
	cout << n(10) << endl;
}

void test03()
{
	plus<int>p;
	cout << p(15, 29) << endl;
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}