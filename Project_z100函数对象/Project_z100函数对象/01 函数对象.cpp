#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

//����bool���͵ķº�����Ϊ ν��
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
		cout << "δ�ҵ�" << endl;

	}
	else
	{
		cout << "�ҵ��˴���5�����֣�Ϊ" << *it <<endl;
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