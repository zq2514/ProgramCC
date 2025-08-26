#include<iostream>
using namespace std;
#include<string>

//定义类和对象   类的定义 权限，属性和行为(类中的属性和行为也称为 成员 
// 属性  也成为 成员属性，成员变量
// 行为  也叫做 成员函数 成员方法

class student
{
public:

	string m_Name;
	int m_Id;

	// 行为，显示
	void showMember()
	{
		cout << "姓名：" << m_Name << "\t学号：" << m_Id << endl;
	};
	void setName(string name)
	{
		m_Name = name;
	};
	void setId(int Id)
	{
		m_Id = Id;
	}
};

int main()
{
	student s1;
	s1.m_Name = "张三";
	s1.m_Id = 1;
	s1.showMember();

	student s2;
	s2.m_Name = "李四";
	s2.m_Id = 2;
	s2.showMember();

	student s3;
	s3.setName("王五");
	s3.setId(3);
	s3.showMember();

	system("pause");
	return 0;

}