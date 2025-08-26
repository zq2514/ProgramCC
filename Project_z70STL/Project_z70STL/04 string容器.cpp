//#include<iostream>
//using namespace std;
//#include<string>
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string s1;

	const char* str = "hello world";
	string s2(str); 
	cout << "s2= " << s2 << endl;
	 
}



int main()
{
	test01();
	system("pause");
	return 0;
}