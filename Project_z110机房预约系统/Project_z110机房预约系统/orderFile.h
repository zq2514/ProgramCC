#pragma once 
#include <iostream>
using namespace std;
#include<map>
#include<fstream>
#include"globalFile.h"

class OrderFile
{
public:
	//���캯����
	OrderFile();

	//����ԤԼ��¼
	void updataOrder();

	//��¼������  key ��¼������ value ����ֵ
	map<int, map<string, string>> m_orderData;

	//ԤԼ��¼������
	int m_Size;
};