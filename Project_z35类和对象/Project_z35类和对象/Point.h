//ͷ�ļ���ͷ���ļ�������������
#pragma once    //��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;

// ����
class Point
{
public:
	// ���õ�
	// ����x
	void setX(int x);

	// ��ȡx
	int getX();

	// ����y
	void setY(int y);

	// ��ȡy
	int getY();


	// ��ȡ��
private:
	int m_X;
	int m_Y;
};