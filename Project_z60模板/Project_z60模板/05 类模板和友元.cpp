#include<iostream>
using namespace std;
#include <string>

// 通过全局函数，打印Person信息

template<class T1, class T2>
class Person
{
	//1、全局函数配合友元   类内实现
	// 友元是C++核心资料内容，友元的目的是访问成员中的私有属性
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};


void test01()
{
	Person<string, int> p1("孙悟空", 100);
	printPerson(p1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}