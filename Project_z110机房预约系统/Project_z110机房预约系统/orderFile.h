#pragma once 
#include <iostream>
using namespace std;
#include<map>
#include<fstream>
#include"globalFile.h"

class OrderFile
{
public:
	//构造函数：
	OrderFile();

	//更新预约记录
	void updataOrder();

	//记录的容器  key 记录的条数 value 具体值
	map<int, map<string, string>> m_orderData;

	//预约记录的条数
	int m_Size;
};