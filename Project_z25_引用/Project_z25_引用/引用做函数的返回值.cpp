#include<iostream>
using namespace std;

int& test01()
{
	int a = 10;
	return a;
}
int& test02()
{
	static int a = 10;
	return a;
}

int main()
{
	int &ref = test01();
	cout << "ref=" << ref << endl;
	cout << "ref=" << ref << endl; //���ܷ��ؾֲ�����������,��һ�����������ʾ��ȷ��������ǵڶ��β�����

	// ���ܷ��ؾֲ�������ԭ���ǣ��ֲ���������ջ�������������к�ջ���ڴ���Զ��ͷţ������б���
	// ��β����������е����ݷ��أ� ��ջ���еľֲ����� �ŵ�ȫ��������Ϊȫ�����еľ�̬���� ��ȫ�ֱ�������̬������������
	int& ref2 = test02();
	cout << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;  //���Ա�����ref2 ������ȷ���� �����еľ�̬����ֵ

	//���õ���ֵ��ֵ
	test02() = 5000;
	cout << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;


	system("pause");

	return 0;
}
