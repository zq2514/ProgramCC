#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

void MyPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//����vector �������󣬲���ͨ��ģ�����ָ�������д�ŵ���������
	vector<int> v;
	// �������д������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	//ÿһ�����������Լ��ĵ����������������������������е�Ԫ��
	//v.begin()���ص����������������ָ�������е�һ������
	//v.end()���ص����������������ָ������Ԫ�ص����һ��Ԫ�ص���һ��λ��
	//vector<int>::iterator �õ�vector<int>���������ĵ���������

	cout << "=========��һ�������ʽ==================="<<endl;
	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();

	//��һ�ֱ�����ʽ
	while (pBegin != pEnd)
	{
		cout << *pBegin << endl;
		pBegin++;
	}


	cout << "============�ڶ��������ʽ================" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;

	cout << "============�����������ʽ================" << endl;
	//�����ֱ�����ʽ��
	//ʹ��STL�ṩ��׼�����㷨  ͷ�ļ� algorithm
	for_each(v.begin(), v.end(), MyPrint);
}

int main()
{
	test01();

	system("pause");
	return 0;
}