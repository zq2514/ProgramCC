#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


class TransForm
{
public:
	int operator()(int val)
	{
		return val;
	}
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
	
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>vTarget;

	vTarget.resize(v.size());

	transform(v.begin(), v.end(), vTarget.begin(), TransForm());

	cout << "vTarget = " << endl;
	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}