#pragma once
#include<iostream>
using namespace std;

//��ݳ�����
class Identity
{
public:
	//�����˵�
	virtual void operMenu() = 0;   // ���麯������̬��ʵ��

	string m_Name; //�û���
	string m_Pwd; //����
};