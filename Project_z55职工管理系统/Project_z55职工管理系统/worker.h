#pragma once 
#include<iostream>
using namespace std;
#include<string>


class Worker
{
public:
	// ��ʾ������Ϣ
	virtual void ShowInfo() = 0;
	//  ��ȡ��λ����
	virtual string getDeptName() = 0;   // ��Ϊ�Ǵ�����࣬�����࣬���Բ���дcpp�ļ�ʵ�֡�
	// ��һ������̬����

public:
	// Ա�����
	int m_Id;
	//Ա������
	string m_Name;
	// Ա�����ű��
	int m_DeptId;
};