#include<iostream>
using namespace std;

int main() {

	int a = 10;
	int b = 10;

	//const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը���
	const int* p1 = &a;
	p1 = &b; //��ȷ
	//*p1 = 100;  ����


	//const���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
	int* const p2 = &a;
	//p2 = &b; //����
	*p2 = 100; //��ȷ

	//const������ָ�������γ���
	const int* const p3 = &a;
	//p3 = &b; //����
	//*p3 = 100; //����

	system("pause");

	return 0;
}