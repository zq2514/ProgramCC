#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include "orderFile.h"
#include<vector>

class Teacher:public Identity
{
public:
	//Ĭ�Ϲ���
	Teacher();

	//�вι��� (ְ����ţ�����������)
	Teacher(int EmpId, string name,string pwd);

	//�˵�����
	virtual void operMenu() ;

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();

public:
	int m_EmpId;//��ʦ���
};