#pragma once 
#include <iostream>
using namespace std;
#include<string>
#include "worker.h"

class Employee :public Worker
{
public:
	// ��ӹ��캯����������Ա��Ϣ
	Employee(int id,string name,int dId);

	// ��ʾ������Ϣ
	virtual void ShowInfo() ;
	//  ��ȡ��λ����
	virtual string getDeptName() ;   // ��Ϊ�Ǵ�����࣬�����࣬���Բ���дcpp�ļ�ʵ�֡�
	// ��һ������̬����

	//���� �������Ѿ�д��
};