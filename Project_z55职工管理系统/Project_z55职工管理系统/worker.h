#pragma once 
#include<iostream>
using namespace std;
#include<string>


class Worker
{
public:
	// 显示个人信息
	virtual void ShowInfo() = 0;
	//  获取岗位名称
	virtual string getDeptName() = 0;   // 因为是纯虚基类，抽象类，所以不用写cpp文件实现。
	// 下一步，多态走起

public:
	// 员工编号
	int m_Id;
	//员工姓名
	string m_Name;
	// 员工部门编号
	int m_DeptId;
};