#pragma once
#include <iostream>
using namespace std;
#include"worker.h"

class Boss :public Worker  //ͷ�ļ� ��̬�̳�worker��ͷ�ļ���ֻ��������ʵ��
{
public:
	// ��Ϣд��,����
	Boss(int id, string name, int dId);

	// ��ʾ������Ϣ
	virtual void ShowInfo();

	//  ��ȡ��λ����
	virtual string getDeptName();
};