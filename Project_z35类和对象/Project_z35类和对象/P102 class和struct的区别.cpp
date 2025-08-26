#include<iostream>
using namespace std;
#include<string>

class C1
{
//public:
	string m_Name;
};

struct  C2
{
	string m_Name;
};

int main()
{
	C1 c1;
	c1.m_Name = "张三";

	C2 c2;
	c2.m_Name = "李四";

	system("pause");
	return 0;
}