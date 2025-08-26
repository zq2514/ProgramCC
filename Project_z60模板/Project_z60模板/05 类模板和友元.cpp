#include<iostream>
using namespace std;
#include <string>

// ͨ��ȫ�ֺ�������ӡPerson��Ϣ

template<class T1, class T2>
class Person
{
	//1��ȫ�ֺ��������Ԫ   ����ʵ��
	// ��Ԫ��C++�����������ݣ���Ԫ��Ŀ���Ƿ��ʳ�Ա�е�˽������
	friend void printPerson(Person<T1, T2> p)
	{
		cout << "������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
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
	Person<string, int> p1("�����", 100);
	printPerson(p1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}