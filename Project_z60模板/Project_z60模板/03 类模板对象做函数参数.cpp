#include <iostream>
using namespace std;
#include <string>

//类模板
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name: " << this->m_Name << "age: " << this->m_Age << endl;
	}

public:
	NameType m_Name;
	AgeType m_Age;

};

//1、指定传入的类型
void printPerson1(Person<string, int>& p)
{
	p.showPerson();
}

void test01()
{
	Person <string, int>p("孙悟空",100);
	printPerson1(p);

}



int main()
{
	test01();

	system("pause");
	return 0;
}