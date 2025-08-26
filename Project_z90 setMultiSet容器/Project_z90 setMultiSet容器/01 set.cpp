#include <iostream>
using namespace std;
#include<set>

//* set容器插入数据时用insert
//* set容器插入数据的数据会自动排序

void printSet(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}

void test01()
{
	set<int>s1;   //构造和赋值 ,默认构造
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	printSet(s1);

	//拷贝构造
	set<int>s2(s1);
	cout << "s2= " << endl;
	printSet(s2);

	//赋值
	set<int>s3;
	s3 = s2;
	cout << "s3= " << endl;
	printSet(s3);
}

void test02()
{
	set<int>s1;   //构造和赋值 ,默认构造
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	
	if (s1.empty())
	{
		cout << "s1为空" << endl;

	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1 的大小为" << s1.size() << endl;
	}

	set<int>s2;   //构造和赋值 ,默认构造
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(500);
	s2.insert(400);
	cout << "交换前" << endl;
	printSet(s1);
	printSet(s2);

	cout << "交换后" << endl;
	s2.swap(s1);
	printSet(s1);
	printSet(s2);

}

void test03()
{
	set<int>s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else {
		cout << "第一次插入失败!" << endl;
	}

	ret = s.insert(10);
	if (ret.second) 
	{
		cout << "第二次插入成功!" << endl;
	}
	else
	{
		cout << "第二次插入失败!" << endl;
	}

	multiset<int> ms2;
	ms2.insert(10);
	ms2.insert(10);
	
	for (multiset<int>::iterator it = ms2.begin(); it != ms2.end(); it++)
	{
		cout << *it << " ";

	}
	cout << endl;
}
void test04()
{
	pair<string, int>p1 = make_pair("zhang",26);
	cout << p1.first << " " << p1.second << endl;
}





int main()
{
	//test01();//构造和赋值
	//test02();// set的大小 和交换
	//test03(); // set和multiset
	test04(); // pait 对组的使用
	
	
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