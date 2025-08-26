#include<iostream>
using namespace std;
#include "person.hpp"

void test01()
{
	Person<string,int> p1("ËïÎò¿Õ", 100);
	p1.showPerson();
}

int main()
{
	test01();
	system("pause");
	return 0;
}