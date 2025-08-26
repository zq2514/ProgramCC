#include<iostream>
using namespace std;
#include<string>
#include<vector>

//自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

public:
	string m_Name;
	int m_Age;
};

void test01()
{
	vector<Person> v;

	// 创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "Name:   " << it->m_Name << "\tAge:  " << it->m_Age << endl;
	}
}

//放对象指针
void test02()
{
	vector<Person *> v ;
	// 创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		Person* p = (*it);
		cout << "Name:" << p->m_Name << "\tAge:" << (*it)->m_Age << endl;
	}
}

int main()
{
	test01();
	cout << "============test01===================="<<endl;
	test02();

	system("pause");
	return 0;
}
