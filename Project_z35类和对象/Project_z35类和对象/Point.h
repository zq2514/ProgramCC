//头文件，头部文件，用来声明：
#pragma once    //防止头文件重复包含
#include<iostream>
using namespace std;

// 点类
class Point
{
public:
	// 设置点
	// 设置x
	void setX(int x);

	// 获取x
	int getX();

	// 设置y
	void setY(int y);

	// 获取y
	int getY();


	// 读取点
private:
	int m_X;
	int m_Y;
};