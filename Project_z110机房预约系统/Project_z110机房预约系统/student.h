#pragma once
#include<iostream>
using namespace std;

#include "identity.h"
#include "computerRoom.h"
#include<vector>
#include<fstream>
#include"globalFile.h"
#include "orderFile.h"

class Student:public Identity
{
public:

	// Ĭ�Ϲ���
	Student();

	// �вι��� ѧ�ţ�����������
	Student(int id, string name,string pwd);

	// �˵�����
	virtual void operMenu();

	// ����ԤԼ
	void applyOrder();

	// �鿴�ҵ�ԤԼ
	void showMyOrder();

	// �鿴�����˵�ԤԼ
	void showAllOrder();

	// ȡ��ԤԼ
	void cancelOrder();

	vector<ComputerRoom> vCom;

	
public:
	// ѧ��ѧ��
	int m_Id;
};