#include<iostream>
using namespace std;
//��Ͷ���
// step1 ������           �������ʱ�����������Ȩ�ޣ����Ժ���Ϊ����Ҫ������һ��
// step2 ʵ��������       ʵ����һ��д��main�����С�
const double PI = 3.14;

class Circle  
{
	//Ȩ��
public:
	//����
	double m_r;
	//��Ϊ
	//��Ϊһ����һ���������������Ϊ�Ǽ���Բ���ܳ�
	double Caculate()
	{
		return 2 * PI * m_r;   //�����漰������PI������ǰ�涨�弴�ɡ�
	};
};


int main()
{
	// ʵ��������
	Circle c1;         // ʵ��������
	c1.m_r = 10.0;     // ��������
	double ZC = c1.Caculate();   // ������Ϊ
	cout << "Բ���ܳ�Ϊ��" << ZC << endl;
	system("pause");
	return 0;
}