#pragma once 
#include <iostream>
using namespace std;
#include<string>
#include "worker.h"

class Employee :public Worker
{
public:
	// 添加构造函数，传入人员信息
	Employee(int id,string name,int dId);

	// 显示个人信息
	virtual void ShowInfo() ;
	//  获取岗位名称
	virtual string getDeptName() ;   // 因为是纯虚基类，抽象类，所以不用写cpp文件实现。
	// 下一步，多态走起

	//属性 父类中已经写好
};