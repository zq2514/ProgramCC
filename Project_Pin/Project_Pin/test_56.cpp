//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}


// ָ�뼴��ַ

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	//1.����ָ��
	int * p;
	p = &a;
	cout << "a�ĵ�ַΪ��" << &a << endl;
	cout << "ָ��pΪ��" << p << endl;
	// 2.ʹ��ָ��
	*p = 1000;
	cout << "*p��ֵΪ��" << *p << endl;
	cout << "a��ֵΪ��" << a << endl;

	//3 ��ָ��
	int * p2 = NULL;
	int* p3 = NULL;
	int* p4 = NULL;
	// ��ָ�벻�ܷ���
	//cout << "��ָ��ĵ�ַ" << *p2 << endl;
	//4 Ұָ��
	// Ұָ����ʽ��ָ�򲻸�ָ�ĵط�   int * p = 0x1100; ����ǲ�����ġ� 

	system("pause");
	return 0;
}
