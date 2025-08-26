//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
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


#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find(v.begin(),v.end(),5);
	if (it == v.end())
	{
		cout << "NO find" << endl;
	}
	else
	{
		cout << "Find: " << *it << endl;
	}
}


class Person
{
	
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	// ÖØÔØ==
	bool operator==(const Person&p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

public:
	string m_Name;
	int m_Age;
};

void test02()
{
	vector<Person>v;
	Person p1("aaa",10);
	Person p2("bbb", 30);
	Person p3("ccc", 20);
	Person p4("ddd", 30);
	Person p5("eeea",40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	vector<Person>::iterator it = find(v.begin(), v.end(), p2);

	if(it== v.end())
	{
		cout << "Nothing" << endl;
	}
	else
	{
		cout << it->m_Name << "ÄêÁä£º " << it->m_Age << endl;
	}

}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}