#include <iostream>
using namespace std;
#include<set>
#include<string>


class compareSet
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test05()
{
	set<int>s1;   //����͸�ֵ ,Ĭ�Ϲ���
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);

	//Ĭ�ϴ�С����
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	set<int, compareSet>s2;   //����͸�ֵ ,Ĭ�Ϲ���

	s2.insert(10);
	s2.insert(30);
	s2.insert(20);
	s2.insert(50);
	s2.insert(40);
	for (set<int, compareSet>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}




int main()
{
	//test05();   // set �Ľ���ʹ��

	system("pause");
	return 0;
}




//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}