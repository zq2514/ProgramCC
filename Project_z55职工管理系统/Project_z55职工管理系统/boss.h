#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

class Boss :public Worker  //头文件 多态继承worker，头文件中只声明，不实现
{
public:
	// 信息写入,重载
	Boss(int id, string name, int dId);

	// 显示个人信息
	virtual void ShowInfo();

	//  获取岗位名称
	virtual string getDeptName();
};